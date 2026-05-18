/*
 * XREFs of sub_1800AEB74 @ 0x1800AEB74
 * Callers:
 *     sub_1800B1780 @ 0x1800B1780 (sub_1800B1780.c)
 * Callees:
 *     sub_180017E58 @ 0x180017E58 (sub_180017E58.c)
 *     sub_18001B374 @ 0x18001B374 (sub_18001B374.c)
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 *     sub_1800AEA88 @ 0x1800AEA88 (sub_1800AEA88.c)
 *     sub_1800B15C0 @ 0x1800B15C0 (sub_1800B15C0.c)
 *     sub_1800B17CC @ 0x1800B17CC (sub_1800B17CC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800AEB74(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, int a5, int a6, _OWORD *a7, int a8)
{
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  _OWORD *v22; // rax
  __m128 v24; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v25[64]; // [rsp+30h] [rbp-D0h] BYREF
  __m256i v26; // [rsp+70h] [rbp-90h] BYREF
  __m256i v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+B4h] [rbp-4Ch]
  __int64 v30; // [rsp+BCh] [rbp-44h]
  int v31; // [rsp+C4h] [rbp-3Ch]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  _BYTE v35[20]; // [rsp+DCh] [rbp-24h]

  v28 = 1065353216;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 1065353216;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 1065353216;
  *(_QWORD *)v35 = 0LL;
  *(_QWORD *)&v35[8] = 0LL;
  *(_DWORD *)&v35[16] = 1065353216;
  if ( a8 != 1 )
  {
    v14 = (_OWORD *)sub_1800AEA88(a1, a6, a5);
    sub_180081DBC(&v28, v14);
    if ( a4 )
    {
      v26.m256i_i32[0] = 1065353216;
      v15 = a4[1];
      *(__int64 *)((char *)&v26.m256i_i64[1] + 4) = 0LL;
      v16 = a4[2];
      v26.m256i_i32[5] = 1065353216;
      v17 = a4[3];
      v27.m256i_i32[2] = 1065353216;
      *(__int64 *)((char *)&v27.m256i_i64[1] + 4) = 0LL;
      v27.m256i_i32[7] = 1065353216;
      *(__m128 *)v26.m256i_i8 = sub_18001B374(&v24, *(double *)&v15, *(double *)&v16, *(double *)&v17);
      *(_OWORD *)&v26.m256i_u64[2] = v15;
      *(_OWORD *)v27.m256i_i8 = v16;
      *(_OWORD *)&v27.m256i_u64[2] = v17;
      v18 = (_OWORD *)sub_180017E58((__int64)v25, &v28, &v26);
      sub_180081DBC(&v28, v18);
    }
    if ( a7 )
    {
      v26.m256i_i32[0] = 1065353216;
      v19 = a7[1];
      *(__int64 *)((char *)&v26.m256i_i64[1] + 4) = 0LL;
      v20 = a7[2];
      v26.m256i_i32[5] = 1065353216;
      v21 = a7[3];
      v27.m256i_i32[2] = 1065353216;
      *(__int64 *)((char *)&v27.m256i_i64[1] + 4) = 0LL;
      v27.m256i_i32[7] = 1065353216;
      *(__m128 *)v26.m256i_i8 = sub_18001B374(&v24, *(double *)&v19, *(double *)&v20, *(double *)&v21);
      *(_OWORD *)&v26.m256i_u64[2] = v19;
      *(_OWORD *)v27.m256i_i8 = v20;
      *(_OWORD *)&v27.m256i_u64[2] = v21;
      v22 = (_OWORD *)sub_180017E58((__int64)v25, &v26, &v28);
      sub_180081DBC(&v28, v22);
    }
    *(_OWORD *)&v35[4] = 0uLL;
    v13 = (_OWORD *)sub_1800B17CC(&v28, v25);
    goto LABEL_11;
  }
  v11 = (_OWORD *)sub_1800AEA88(a1, a5, a6);
  sub_180081DBC(&v28, v11);
  if ( a4 )
  {
    v12 = (_OWORD *)sub_180017E58((__int64)&v26, a4, &v28);
    sub_180081DBC(&v28, v12);
  }
  if ( a7 )
  {
    v13 = (_OWORD *)sub_180017E58((__int64)&v26, &v28, a7);
LABEL_11:
    sub_180081DBC(&v28, v13);
  }
  sub_1800B15C0(a2, a3, &v28);
  return a2;
}
