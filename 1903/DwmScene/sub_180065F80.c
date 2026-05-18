/*
 * XREFs of sub_180065F80 @ 0x180065F80
 * Callers:
 *     sub_180067B38 @ 0x180067B38 (sub_180067B38.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800665C8 @ 0x1800665C8 (sub_1800665C8.c)
 *     sub_1800666CC @ 0x1800666CC (sub_1800666CC.c)
 *     sub_180066DA4 @ 0x180066DA4 (sub_180066DA4.c)
 *     sub_1800693C4 @ 0x1800693C4 (sub_1800693C4.c)
 *     sub_180069950 @ 0x180069950 (sub_180069950.c)
 */

__int64 __fastcall sub_180065F80(__int64 *a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp+10h]

  v4 = (a2 - *a1) / 152;
  v5 = (a1[1] - *a1) / 152;
  if ( v5 == 0x1AF286BCA1AF286LL )
    std::vector<void *>::_Xlen();
  v6 = v5 + 1;
  v7 = (a1[2] - *a1) / 152;
  v8 = v7 >> 1;
  if ( v7 <= 0x1AF286BCA1AF286LL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 )
      v9 = v6;
  }
  else
  {
    v9 = v6;
  }
  v10 = sub_180069950(a1, v9);
  v15 = 152 * v4;
  v11 = 152 * v4 + v10;
  try
  {
    sub_180066DA4();
    v17 = v11;
    v12 = a1[1];
    v13 = *a1;
    if ( a2 == v12 )
    {
      sub_1800665C8(v13, v12, v10, a1);
    }
    else
    {
      sub_1800666CC(v13, a2, v10, a1);
      v17 = v10;
      sub_1800666CC(a2, a1[1], v11 + 152, a1);
    }
  }
  catch ( ... )
  {
    sub_1800695AC(a1, v17, v11 + 152);
    sub_180069C38(a1, v10, v9);
    throw;
  }
  sub_1800693C4(a1, v10, v6, v9);
  return v15 + *a1;
}
