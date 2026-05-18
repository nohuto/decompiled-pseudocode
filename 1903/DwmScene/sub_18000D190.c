/*
 * XREFs of sub_18000D190 @ 0x18000D190
 * Callers:
 *     sub_18000A8E0 @ 0x18000A8E0 (sub_18000A8E0.c)
 *     sub_18000A9B8 @ 0x18000A9B8 (sub_18000A9B8.c)
 *     sub_18000AA90 @ 0x18000AA90 (sub_18000AA90.c)
 *     sub_18000BDFC @ 0x18000BDFC (sub_18000BDFC.c)
 *     sub_18000CE38 @ 0x18000CE38 (sub_18000CE38.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     sub_18000D308 @ 0x18000D308 (sub_18000D308.c)
 * Callees:
 *     sub_18000C094 @ 0x18000C094 (sub_18000C094.c)
 */

__int64 __fastcall sub_18000D190(__int64 a1, int a2, __int64 a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000C094(a1, a2, a3, 0LL, 0LL, retaddr, 3);
}
