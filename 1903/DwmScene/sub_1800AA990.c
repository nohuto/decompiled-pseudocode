/*
 * XREFs of sub_1800AA990 @ 0x1800AA990
 * Callers:
 *     sub_1800AC538 @ 0x1800AC538 (sub_1800AC538.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800AB858 @ 0x1800AB858 (sub_1800AB858.c)
 *     sub_1800B2844 @ 0x1800B2844 (sub_1800B2844.c)
 *     sub_1800B2B6C @ 0x1800B2B6C (sub_1800B2B6C.c)
 */

__int64 __fastcall sub_1800AA990(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]

  v23 = -2LL;
  v6 = (a2 - *a1) / 48;
  v7 = (a1[1] - *a1) / 48LL;
  if ( v7 == 0x555555555555555LL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 48LL;
  v10 = v9 >> 1;
  if ( v9 <= 0x555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v21 = v11;
  v12 = sub_1800B2B6C(a1, v11);
  v22 = v12;
  v13 = 48 * v6;
  v14 = v13 + v12;
  *(_BYTE *)v14 = *(_BYTE *)a3;
  *(_QWORD *)(v14 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v14 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_QWORD *)(v14 + 40) = 0LL;
  v15 = *(_QWORD *)(a3 + 40);
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *(_QWORD *)(v14 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v14 + 40) = *(_QWORD *)(a3 + 40);
  v16 = a1[1];
  v17 = a1;
  v18 = v12;
  v19 = *a1;
  if ( a2 != v16 )
  {
    sub_1800AB858(v19, a2, v12, a1, v11, v12, -2LL);
    v17 = a1;
    v18 = v13 + v12 + 48;
    v16 = a1[1];
    v19 = a2;
  }
  sub_1800AB858(v19, v16, v18, v17, v21, v22, v23);
  sub_1800B2844(a1, v12, v8, v11);
  return v13 + *a1;
}
