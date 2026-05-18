/*
 * XREFs of sub_18009E870 @ 0x18009E870
 * Callers:
 *     sub_18009DEA4 @ 0x18009DEA4 (sub_18009DEA4.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 * Callees:
 *     sub_18009D3C4 @ 0x18009D3C4 (sub_18009D3C4.c)
 *     sub_18009E6A0 @ 0x18009E6A0 (sub_18009E6A0.c)
 */

__int64 __fastcall sub_18009E870(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = sub_18009E6A0(v9, a2, a4);
  sub_18009D3C4(a1, v7, a3, a4);
  return a1;
}
