/*
 * XREFs of sub_1800A90A8 @ 0x1800A90A8
 * Callers:
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

_QWORD *__fastcall sub_1800A90A8(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F444(a2, a1 + 24);
  return a2;
}
