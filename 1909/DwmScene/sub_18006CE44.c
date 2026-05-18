/*
 * XREFs of sub_18006CE44 @ 0x18006CE44
 * Callers:
 *     sub_18007C700 @ 0x18007C700 (sub_18007C700.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 */

_QWORD *__fastcall sub_18006CE44(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001115C(a2, a1 + 80);
  return a2;
}
