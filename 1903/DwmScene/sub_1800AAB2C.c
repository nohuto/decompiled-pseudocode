/*
 * XREFs of sub_1800AAB2C @ 0x1800AAB2C
 * Callers:
 *     sub_1800AC4BC @ 0x1800AC4BC (sub_1800AC4BC.c)
 *     sub_1801245B8 @ 0x1801245B8 (sub_1801245B8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180031D3C @ 0x180031D3C (sub_180031D3C.c)
 *     sub_1800AB8E8 @ 0x1800AB8E8 (sub_1800AB8E8.c)
 *     sub_1800B2924 @ 0x1800B2924 (sub_1800B2924.c)
 */

unsigned __int64 __fastcall sub_1800AAB2C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 *v11; // r15
  unsigned __int64 v12; // rsi
  char *v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // r9
  __int64 *v16; // r8
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 *v20; // [rsp+20h] [rbp-58h]
  __int64 *v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 *v25; // [rsp+88h] [rbp+10h]

  v23 = -2LL;
  v5 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (__int64)(a1[2] - *a1) >> 5;
  v9 = v8 >> 1;
  if ( v8 <= 0x7FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = sub_180031D3C((__int64)a1, v10);
  v21 = v11;
  v12 = v5 & 0xFFFFFFFFFFFFFFE0uLL;
  v13 = (char *)v11 + v12;
  v19 = (__int64)v11 + v12 + 32;
  *((_QWORD *)v13 + 2) = 0LL;
  *((_QWORD *)v13 + 3) = 0LL;
  try
  {
    sub_18001110C((__int64 *)((char *)v11 + v12), a3);
    v25 = (__int64 *)((char *)v11 + v12);
    v14 = a1[1];
    v15 = a1;
    v16 = v11;
    v17 = *a1;
    if ( a2 != v14 )
    {
      sub_1800AB8E8(v17, a2, v11, a1, v19, v11, -2LL);
      v25 = v11;
      v15 = a1;
      v16 = (__int64 *)(v13 + 32);
      v14 = a1[1];
      v17 = a2;
    }
    sub_1800AB8E8(v17, v14, v16, v15, v19, v21, v23);
    sub_1800B2924(a1, v11, v7, v10);
    result = v12 + *a1;
  }
  catch ( ... )
  {
    sub_18006DEA4((__int64)a1, v25, v20);
    sub_180031DAC((__int64)a1, v22, v10);
    throw;
  }
  return result;
}
