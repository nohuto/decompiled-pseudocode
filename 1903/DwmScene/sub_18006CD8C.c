/*
 * XREFs of sub_18006CD8C @ 0x18006CD8C
 * Callers:
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 *     sub_18007C5F0 @ 0x18007C5F0 (sub_18007C5F0.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 */

_QWORD *__fastcall sub_18006CD8C(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001110C(a2, a1 + 144);
  return a2;
}
