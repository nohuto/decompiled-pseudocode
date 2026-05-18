/*
 * XREFs of sub_1800D7414 @ 0x1800D7414
 * Callers:
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800B2C7C @ 0x1800B2C7C (sub_1800B2C7C.c)
 *     sub_1800D8644 @ 0x1800D8644 (sub_1800D8644.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 */

__int64 __fastcall sub_1800D7414(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r9
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  _QWORD *v25; // [rsp+98h] [rbp+20h]

  v4 = (a2 - *a1) / 48;
  v5 = (a1[1] - *a1) / 48LL;
  if ( v5 == 0x555555555555555LL )
    std::vector<void *>::_Xlen();
  v6 = v5 + 1;
  v7 = (a1[2] - *a1) / 48LL;
  v8 = v7 >> 1;
  if ( v7 <= 0x555555555555555LL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 )
      v9 = v6;
  }
  else
  {
    v9 = v6;
  }
  v19 = v9;
  v10 = sub_1800B2C7C((__int64)a1, v9);
  v11 = v10;
  v21 = (__int64)v10;
  v12 = 48 * v4;
  v13 = &v10[6 * v4];
  v13[2] = 0LL;
  v13[3] = 0LL;
  try
  {
    sub_18000F444(v13, a3);
    v13[4] = *(_QWORD *)(a3 + 32);
    v13[5] = *(_QWORD *)(a3 + 40);
    v25 = v13;
    v14 = a1[1];
    v15 = a1;
    v16 = v11;
    v17 = *a1;
    if ( a2 != v14 )
    {
      sub_1800D8644(v17, a2, v11, a1, v9);
      v25 = v11;
      v15 = a1;
      v16 = v13 + 6;
      v14 = a1[1];
      v17 = a2;
    }
    sub_1800D8644(v17, v14, v16, v15, v19);
    sub_1800DA028(a1, v11, v6, v9);
    result = v12 + *a1;
  }
  catch ( ... )
  {
    sub_1800DA108(a1, v25, v13 + 6);
    sub_18002BCA4((__int64)a1, v21, v20);
    throw;
  }
  return result;
}
