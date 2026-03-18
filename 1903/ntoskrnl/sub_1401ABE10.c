/*
 * XREFs of sub_1401ABE10 @ 0x1401ABE10
 * Callers:
 *     <none>
 * Callees:
 *     qsort @ 0x1401A0AD0 (qsort.c)
 */

void __fastcall sub_1401ABE10(void *a1, unsigned int a2)
{
  qsort(a1, a2, 8uLL, PtFuncCompare);
}
