/*
 * XREFs of sub_1800B14C0 @ 0x1800B14C0
 * Callers:
 *     sub_180101800 @ 0x180101800 (sub_180101800.c)
 * Callees:
 *     sub_1800B0E64 @ 0x1800B0E64 (sub_1800B0E64.c)
 *     sub_1800B1094 @ 0x1800B1094 (sub_1800B1094.c)
 */

__int64 __fastcall sub_1800B14C0(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_1800B1094(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_1800B0E64(a1, v3);
  return sub_18002638C((_QWORD *)(a1 + 448));
}
