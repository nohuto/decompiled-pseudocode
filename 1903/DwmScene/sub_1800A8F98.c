/*
 * XREFs of sub_1800A8F98 @ 0x1800A8F98
 * Callers:
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

_QWORD *__fastcall sub_1800A8F98(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F3F4(a2, a1 + 24);
  return a2;
}
