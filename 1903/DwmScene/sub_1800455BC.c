/*
 * XREFs of sub_1800455BC @ 0x1800455BC
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800455BC(_QWORD *a1, __int64 a2, unsigned int a3)
{
  *a1 = a2;
  a1[1] = a2 + a3;
  return a1;
}
