/*
 * XREFs of sub_1800B1C10 @ 0x1800B1C10
 * Callers:
 *     sub_1800B1B9C @ 0x1800B1B9C (sub_1800B1B9C.c)
 * Callees:
 *     sub_180018D28 @ 0x180018D28 (sub_180018D28.c)
 *     sub_18001B66C @ 0x18001B66C (sub_18001B66C.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_1800AED34 @ 0x1800AED34 (sub_1800AED34.c)
 *     sub_1800B1838 @ 0x1800B1838 (sub_1800B1838.c)
 *     sub_1800B24F8 @ 0x1800B24F8 (sub_1800B24F8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

char __fastcall sub_1800B1C10(__int64 a1)
{
  __int128 v2; // xmm4
  int v3; // eax
  __int128 v4; // xmm0
  float *v5; // rax
  __int128 v6; // xmm2
  int *v7; // rcx
  bool v8; // cc
  __int128 v9; // xmm1
  __int128 v10; // xmm3
  __int128 v11; // xmm0
  __int128 *v12; // rdx
  int v14; // [rsp+20h] [rbp-49h] BYREF
  __m256i v15; // [rsp+30h] [rbp-39h] BYREF
  __m256i v16; // [rsp+50h] [rbp-19h]
  __m256i v17; // [rsp+70h] [rbp+7h] BYREF
  __m256i v18; // [rsp+90h] [rbp+27h]

  if ( sub_1800AED34(a1, 2) )
    return 0;
  sub_1800B1838(a1);
  v2 = *(unsigned int *)(a1 + 332);
  if ( (*(_BYTE *)(a1 + 544) & 2) == 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 316);
  v17 = (__m256i)ymmword_1801F2AC0;
  *(_OWORD *)v18.m256i_i8 = xmmword_1801F2AE0;
  *(_OWORD *)&v18.m256i_u64[2] = xmmword_1801E38A0;
  switch ( v3 )
  {
    case 1:
      v4 = *(unsigned int *)(a1 + 320);
      v5 = (float *)(a1 + 324);
LABEL_5:
      v6 = 0x3A83126Fu;
      v7 = &v14;
      v8 = *v5 >= 0.001;
      v14 = 981668463;
      if ( v8 )
        v7 = (int *)v5;
      if ( *(float *)&v4 >= 0.001 )
        v6 = v4;
      v11 = *(unsigned int *)(a1 + 328);
      v9 = v2;
      v15.m256i_i32[0] = 1065353216;
      v10 = (unsigned int)*v7;
      *(__int64 *)((char *)&v15.m256i_i64[1] + 4) = 0LL;
      v15.m256i_i32[5] = 1065353216;
      v16.m256i_i32[2] = 1065353216;
      *(__int64 *)((char *)&v16.m256i_i64[1] + 4) = 0LL;
      v16.m256i_i32[7] = 1065353216;
      *(double *)&v11 = sub_1800B24F8(v7);
      goto LABEL_10;
    case 2:
      v4 = *(unsigned int *)(a1 + 324);
      v5 = (float *)(a1 + 320);
      goto LABEL_5;
    case 3:
      v10 = *(unsigned int *)(a1 + 324);
      v6 = *(unsigned int *)(a1 + 320);
      break;
    case 4:
      v10 = *(unsigned int *)(a1 + 320);
      v6 = *(unsigned int *)(a1 + 324);
      break;
    default:
      v12 = (__int128 *)(a1 + 932);
      if ( v3 != 5 )
        v12 = &xmmword_18025DFE0;
      goto LABEL_20;
  }
  v9 = *(unsigned int *)(a1 + 340);
  v11 = v9;
  v16.m256i_i32[7] = 1065353216;
  *(__int64 *)((char *)&v16.m256i_i64[1] + 4) = 0LL;
  v16.m256i_i32[2] = 1065353216;
  v15.m256i_i32[5] = 1065353216;
  *(__int64 *)((char *)&v15.m256i_i64[1] + 4) = 0LL;
  v15.m256i_i32[0] = 1065353216;
  *(float *)&v11 = sub_18001B66C(*(float *)&v9 * *(float *)&v2, *(float *)&v9, *(float *)&v6, *(float *)&v10);
LABEL_10:
  *(_OWORD *)v15.m256i_i8 = v11;
  v12 = (__int128 *)&v15;
  *(_OWORD *)&v15.m256i_u64[2] = v9;
  *(_OWORD *)v16.m256i_i8 = v6;
  *(_OWORD *)&v16.m256i_u64[2] = v10;
LABEL_20:
  sub_180081CAC(&v17, v12);
  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    v15 = v17;
    v16 = v18;
    sub_180081CAC((_OWORD *)(a1 + 932), &v15);
  }
  sub_180018D28(&v17, (__int64)&v15);
  v17 = v15;
  v18 = v16;
  sub_180081CAC((_OWORD *)(a1 + 1124), &v17);
  *(_DWORD *)(a1 + 544) &= ~2u;
  return 1;
}
