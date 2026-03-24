/*
 * XREFs of sub_1401A1400 @ 0x1401A1400
 * Callers:
 *     <none>
 * Callees:
 *     qsort @ 0x1401962E0 (qsort.c)
 */

void __fastcall sub_1401A1400(void *a1, unsigned int a2)
{
  qsort(a1, a2, 8uLL, PtFuncCompare);
}
