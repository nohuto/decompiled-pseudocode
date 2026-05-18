/*
 * XREFs of sub_1800847E4 @ 0x1800847E4
 * Callers:
 *     sub_180010DE0 @ 0x180010DE0 (sub_180010DE0.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800FEDE0 @ 0x1800FEDE0 (sub_1800FEDE0.c)
 *     sub_1801026A0 @ 0x1801026A0 (sub_1801026A0.c)
 *     sub_1801029B0 @ 0x1801029B0 (sub_1801029B0.c)
 * Callees:
 *     sub_180018D28 @ 0x180018D28 (sub_180018D28.c)
 *     sub_180081FFC @ 0x180081FFC (sub_180081FFC.c)
 *     sub_180083074 @ 0x180083074 (sub_180083074.c)
 *     sub_1800830F8 @ 0x1800830F8 (sub_1800830F8.c)
 *     sub_180083320 @ 0x180083320 (sub_180083320.c)
 *     sub_18008351C @ 0x18008351C (sub_18008351C.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180084D64 @ 0x180084D64 (sub_180084D64.c)
 *     sub_180086838 @ 0x180086838 (sub_180086838.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_180087DA0 @ 0x180087DA0 (sub_180087DA0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     acosf @ 0x1801271D4 (acosf.c)
 */

__int64 __fastcall sub_1800847E4(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  unsigned int v10; // eax
  _DWORD *v11; // rax
  __m128 v12; // xmm2
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __int128 v15; // xmm0
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __m128 v19; // xmm0
  unsigned __int64 v21; // [rsp+20h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-81h]
  __int128 v23; // [rsp+30h] [rbp-79h] BYREF
  __int64 v24; // [rsp+40h] [rbp-69h] BYREF
  int v25; // [rsp+48h] [rbp-61h]
  unsigned __int64 v26; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-51h]
  _OWORD v28[4]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v29[4]; // [rsp+A0h] [rbp-9h] BYREF

  sub_180087414(a1);
  sub_180083DF0(a1, (__int64)&v24);
  sub_180081FFC(&v21, a2, (unsigned __int64 *)&v24);
  v6 = 0LL;
  v6.m128_f32[0] = *(float *)&v21;
  v7 = _mm_movelh_ps(_mm_unpacklo_ps(v6, (__m128)HIDWORD(v21)), (__m128)v22);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v15 = xmmword_18025E020;
    goto LABEL_8;
  }
  v27 = v22;
  v26 = v21;
  sub_180084D64(&v26);
  v10 = *(_DWORD *)(a3 + 8);
  v21 = *(_QWORD *)a3;
  v22 = v10;
  sub_180084D64(&v21);
  v11 = sub_180083320(&v26, &v23, &v21);
  if ( !v11 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v12 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v11, (__m128)(unsigned int)v11[2]);
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 102);
  v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)).m128_f32[0] > 0.00000059604645 )
  {
    sub_1800830F8((__int64)v28, (unsigned __int64 *)&v24, a2, &v21);
    sub_180018D28(v28, (__int64)v29);
    sub_180083074(&v23, v29);
    v15 = v23;
LABEL_8:
    v23 = v15;
    return sub_180086838(a1, &v23);
  }
  v24 = qword_18025DF68;
  v25 = dword_18025DF70;
  sub_180083320((unsigned __int64 *)&v24, &v21, &v26);
  sub_180084D64(&v21);
  LODWORD(v16) = sub_18008351C((unsigned __int64 *)&v24, &v26).m128_u32[0];
  v17 = fmaxf(v16, -1.0);
  v18 = fminf(v17, 1.0);
  acosf(v18);
  v23 = xmmword_1801E38A0;
  v19 = _mm_movelh_ps((__m128)v21, (__m128)v22);
  *(double *)v19.m128_u64 = sub_180087DA0();
  v23 = (__int128)v19;
  return sub_180086838(a1, &v23);
}
