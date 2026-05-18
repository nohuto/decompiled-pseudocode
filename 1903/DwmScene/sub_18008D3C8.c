/*
 * XREFs of sub_18008D3C8 @ 0x18008D3C8
 * Callers:
 *     sub_180088FBC @ 0x180088FBC (sub_180088FBC.c)
 *     sub_18008D230 @ 0x18008D230 (sub_18008D230.c)
 *     sub_18008D98C @ 0x18008D98C (sub_18008D98C.c)
 *     sub_1800BCD5C @ 0x1800BCD5C (sub_1800BCD5C.c)
 *     sub_1800CADA4 @ 0x1800CADA4 (sub_1800CADA4.c)
 *     sub_1800CB148 @ 0x1800CB148 (sub_1800CB148.c)
 *     sub_18010D97C @ 0x18010D97C (sub_18010D97C.c)
 *     sub_180111B28 @ 0x180111B28 (sub_180111B28.c)
 *     sub_180111E98 @ 0x180111E98 (sub_180111E98.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18008D460 @ 0x18008D460 (sub_18008D460.c)
 *     sub_18008D4F8 @ 0x18008D4F8 (sub_18008D4F8.c)
 */

__int64 __fastcall sub_18008D3C8(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 3;
  v4 = 2 * a2;
  if ( 2 * a2 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_18008D460(a1 + 3, 2 * a2);
  }
  v7 = a1[1];
  sub_18008D4F8(v2, v4, &v7);
  result = a2 - 1;
  a1[6] = a2 - 1;
  a1[7] = a2;
  return result;
}
