/*
 * XREFs of sub_1800F10F8 @ 0x1800F10F8
 * Callers:
 *     sub_1800F18A8 @ 0x1800F18A8 (sub_1800F18A8.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800E9D38 @ 0x1800E9D38 (sub_1800E9D38.c)
 *     sub_1800F1768 @ 0x1800F1768 (sub_1800F1768.c)
 *     sub_1800F38D8 @ 0x1800F38D8 (sub_1800F38D8.c)
 */

__int64 __fastcall sub_1800F10F8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r9
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  _QWORD *v25; // [rsp+A8h] [rbp+20h]

  v5 = (a2 - *a1) / 56;
  v6 = (a1[1] - *a1) / 56LL;
  if ( v6 == 0x492492492492492LL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 56LL;
  v9 = v8 >> 1;
  if ( v8 <= 0x492492492492492LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v19 = v10;
  v11 = sub_1800E9D38((__int64)a1, v10);
  v12 = v11;
  v22 = (__int64)v11;
  v21 = 56 * v5;
  v13 = &v11[7 * v5];
  v13[2] = 0LL;
  v13[3] = 0LL;
  try
  {
    sub_18000F3F4(v13, a3);
    *((_WORD *)v13 + 16) = *(_WORD *)(a3 + 32);
    *((_DWORD *)v13 + 9) = *(_DWORD *)(a3 + 36);
    *((_DWORD *)v13 + 10) = *(_DWORD *)(a3 + 40);
    *((_DWORD *)v13 + 11) = *(_DWORD *)(a3 + 44);
    *((_DWORD *)v13 + 12) = *(_DWORD *)(a3 + 48);
    v25 = v13;
    v14 = a1[1];
    v15 = a1;
    v16 = v12;
    v17 = *a1;
    if ( a2 != v14 )
    {
      sub_1800F1768(v17, a2, v12, a1, v10);
      v25 = v12;
      v15 = a1;
      v16 = v13 + 7;
      v14 = a1[1];
      v17 = a2;
    }
    sub_1800F1768(v17, v14, v16, v15, v19);
    sub_1800F38D8(a1, v12, v7, v10);
    result = v21 + *a1;
  }
  catch ( ... )
  {
    sub_1800F3A9C(a1, v25, v13 + 7);
    sub_180038CDC((__int64)a1, v22, v20);
    throw;
  }
  return result;
}
