/*
 * XREFs of sub_18006CE9C @ 0x18006CE9C
 * Callers:
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 *     sub_18007C700 @ 0x18007C700 (sub_18007C700.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 */

_QWORD *__fastcall sub_18006CE9C(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001115C(a2, a1 + 144);
  return a2;
}
