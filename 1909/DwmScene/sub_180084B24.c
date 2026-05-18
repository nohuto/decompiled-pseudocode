/*
 * XREFs of sub_180084B24 @ 0x180084B24
 * Callers:
 *     sub_1800865F0 @ 0x1800865F0 (sub_1800865F0.c)
 * Callees:
 *     sub_1800814E0 @ 0x1800814E0 (sub_1800814E0.c)
 *     sub_18008225C @ 0x18008225C (sub_18008225C.c)
 *     sub_1800823B8 @ 0x1800823B8 (sub_1800823B8.c)
 *     sub_1800834FC @ 0x1800834FC (sub_1800834FC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char __fastcall sub_180084B24(__int64 a1, _DWORD *a2, _OWORD *a3, _DWORD *a4)
{
  unsigned int v4; // xmm3_4
  int v7; // xmm15_4
  unsigned int v9; // xmm12_4
  unsigned int v10; // xmm13_4
  unsigned int v11; // xmm14_4
  unsigned int v12; // xmm9_4
  unsigned int v13; // xmm10_4
  unsigned int v14; // xmm11_4
  __m128 v15; // xmm2
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm3_4
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  float v22; // xmm6_4
  __m128 v23; // xmm2
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  float v26; // xmm8_4
  __int64 v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  unsigned int v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+50h] [rbp-B0h]
  __int128 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  float v38; // [rsp+90h] [rbp-70h]
  _BYTE v39[64]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)a1;
  v9 = *(_DWORD *)(a1 + 16);
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_DWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a1 + 32);
  v13 = *(_DWORD *)(a1 + 36);
  v14 = *(_DWORD *)(a1 + 40);
  v29 = *(_QWORD *)(a1 + 48);
  v30 = *(_DWORD *)(a1 + 56);
  LODWORD(v28) = v4;
  DWORD2(v34) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v34 = __PAIR64__(v4, v7);
  v15 = _mm_movelh_ps((__m128)__PAIR64__(v4, v7), (__m128)DWORD2(v34));
  v16 = _mm_mul_ps(v15, v15);
  HIDWORD(v28) = DWORD2(v34);
  *(_QWORD *)&v35 = __PAIR64__(v10, v9);
  DWORD2(v35) = v11;
  v17 = _mm_shuffle_ps(v16, v16, 102);
  *(_QWORD *)&v36 = __PAIR64__(v13, v12);
  DWORD2(v36) = v14;
  v16.m128_f32[0] = (float)(v16.m128_f32[0] + v17.m128_f32[0]) + _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  v18 = _mm_sqrt_ps(_mm_shuffle_ps(v16, v16, 0)).m128_f32[0];
  v19 = _mm_movelh_ps((__m128)__PAIR64__(v10, v9), (__m128)v11);
  v20 = _mm_mul_ps(v19, v19);
  *(float *)&v37 = v18;
  v21 = _mm_shuffle_ps(v20, v20, 102);
  v20.m128_f32[0] = (float)(v20.m128_f32[0] + v21.m128_f32[0]) + _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
  LODWORD(v22) = _mm_sqrt_ps(_mm_shuffle_ps(v20, v20, 0)).m128_u32[0];
  v23 = _mm_movelh_ps((__m128)__PAIR64__(v13, v12), (__m128)v14);
  v24 = _mm_mul_ps(v23, v23);
  *((float *)&v37 + 1) = v22;
  v25 = _mm_shuffle_ps(v24, v24, 102);
  v24.m128_f32[0] = (float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
  LODWORD(v26) = _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)).m128_u32[0];
  v38 = v26;
  if ( v18 != 0.0 )
  {
    sub_1800823B8(&v34, v18);
    v7 = v34;
    v28 = *(_QWORD *)((char *)&v34 + 4);
  }
  if ( v22 != 0.0 )
  {
    sub_1800823B8(&v35, v22);
    v11 = DWORD2(v35);
    v10 = DWORD1(v35);
    v9 = v35;
  }
  if ( v26 != 0.0 )
  {
    sub_1800823B8(&v36, v26);
    v14 = DWORD2(v36);
    v13 = DWORD1(v36);
    v12 = v36;
  }
  v33 = 0;
  v32 = v28;
  *(_QWORD *)&v36 = v29;
  v31 = v7;
  *(_QWORD *)&v34 = __PAIR64__(v10, v9);
  *((_QWORD *)&v34 + 1) = v11;
  *(_QWORD *)&v35 = __PAIR64__(v13, v12);
  *((_QWORD *)&v35 + 1) = v14;
  *((_QWORD *)&v36 + 1) = v30 | 0x3F80000000000000LL;
  sub_1800814E0((__int64)v39, &v31, &v34, &v35, &v36);
  if ( !sub_1800834FC((__int64)v39, a2, a3, a4) )
    return 0;
  sub_18008225C(a2, &v37);
  return 1;
}
