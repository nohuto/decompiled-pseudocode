/*
 * XREFs of sub_1800CE968 @ 0x1800CE968
 * Callers:
 *     sub_1800A4608 @ 0x1800A4608 (sub_1800A4608.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 */

__int64 *__fastcall sub_1800CE968(__int64 a1, __int64 a2)
{
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18000F444(v4, a2);
  return sub_1800645F4(a1, v4);
}
