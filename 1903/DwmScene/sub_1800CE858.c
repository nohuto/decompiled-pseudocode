/*
 * XREFs of sub_1800CE858 @ 0x1800CE858
 * Callers:
 *     sub_1800A44F8 @ 0x1800A44F8 (sub_1800A44F8.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 */

__int64 *__fastcall sub_1800CE858(__int64 a1, __int64 a2)
{
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18000F3F4(v4, a2);
  return sub_1800644E4(a1, v4);
}
