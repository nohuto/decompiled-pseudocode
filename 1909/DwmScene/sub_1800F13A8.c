/*
 * XREFs of sub_1800F13A8 @ 0x1800F13A8
 * Callers:
 *     sub_1800F1A2C @ 0x1800F1A2C (sub_1800F1A2C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F1920 @ 0x1800F1920 (sub_1800F1920.c)
 *     sub_1800F3ABC @ 0x1800F3ABC (sub_1800F3ABC.c)
 *     sub_1800F3D74 @ 0x1800F3D74 (sub_1800F3D74.c)
 */

__int64 __fastcall sub_1800F13A8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = -2LL;
  v5 = (a2 - *a1) / 40;
  v6 = (a1[1] - *a1) / 40LL;
  if ( v6 == 0x666666666666666LL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 40LL;
  v9 = v8 >> 1;
  if ( v8 <= 0x666666666666666LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v22 = v10;
  v11 = sub_1800F3D74(a1, v10);
  v24 = v11;
  v12 = 5 * v5;
  v13 = v11 + 8 * v12;
  v14 = v13 + 40;
  v23 = v13 + 40;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  v15 = *(_QWORD *)(a3 + 8);
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *(_QWORD *)v13 = *(_QWORD *)a3;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  v16 = *(_QWORD *)(a3 + 24);
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(a3 + 32);
  v17 = a1[1];
  v18 = a1;
  v19 = v11;
  v20 = *a1;
  if ( a2 != v17 )
  {
    sub_1800F1920(v20, a2, v11, a1, v10, v23, v11, -2LL);
    v18 = a1;
    v19 = v14;
    v17 = a1[1];
    v20 = a2;
  }
  sub_1800F1920(v20, v17, v19, v18, v22, v23, v24, v25);
  sub_1800F3ABC(a1, v11, v7, v10);
  return *a1 + 8 * v12;
}
