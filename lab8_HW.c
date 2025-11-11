#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");

    int n;
    double res, prod = 1;

    printf("Введите n:");
    scanf("%d", &n);

    if (n < 2) printf("n должно быть больше 2!");

    for (int i = 2; i <= n; i++) {
        res = 1 - (1 / pow(i, 2));
        prod *= res;
        printf("При %d получилось: %f\n", i, prod);
    }

    return 0;
}