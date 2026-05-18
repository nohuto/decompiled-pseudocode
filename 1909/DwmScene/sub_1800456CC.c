/*
 * XREFs of sub_1800456CC @ 0x1800456CC
 * Callers:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800456CC(_QWORD *a1, __int64 a2, unsigned int a3)
{
  *a1 = a2;
  a1[1] = a2 + a3;
  return a1;
}
