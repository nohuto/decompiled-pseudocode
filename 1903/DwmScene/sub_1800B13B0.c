/*
 * XREFs of sub_1800B13B0 @ 0x1800B13B0
 * Callers:
 *     sub_1801016F0 @ 0x1801016F0 (sub_1801016F0.c)
 * Callees:
 *     sub_1800B0D54 @ 0x1800B0D54 (sub_1800B0D54.c)
 *     sub_1800B0F84 @ 0x1800B0F84 (sub_1800B0F84.c)
 */

__int64 __fastcall sub_1800B13B0(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_1800B0F84(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_1800B0D54(a1, v3);
  return sub_18002627C((_QWORD *)(a1 + 448));
}
