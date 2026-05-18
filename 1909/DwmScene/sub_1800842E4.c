/*
 * XREFs of sub_1800842E4 @ 0x1800842E4
 * Callers:
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 * Callees:
 *     sub_180086E38 @ 0x180086E38 (sub_180086E38.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 */

float *__fastcall sub_1800842E4(__int64 a1, float *a2)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  float v7; // xmm0_4
  float v8; // xmm7_4
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // xmm0_4
  float v13; // xmm6_4
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  float v17; // xmm0_4
  float *result; // rax
  __int64 Sign; // [rsp+20h] [rbp-50h]
  float v20; // [rsp+28h] [rbp-48h]
  unsigned __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+48h] [rbp-28h]

  sub_180087450(a1);
  Sign = *(_QWORD *)(a1 + 172);
  v20 = *(float *)(a1 + 180);
  v23 = qword_18025EEF8;
  v24 = dword_18025EF00;
  sub_180086E38(a1, &v21, &v23, 2LL);
  v4 = _mm_movelh_ps((__m128)v21, (__m128)v22);
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_shuffle_ps(v5, v5, 102);
  v5.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v7 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0)).m128_f32[0], *(float *)&Sign);
  v23 = qword_18025EF08;
  v24 = dword_18025EF10;
  v8 = v7;
  sub_180086E38(a1, &v21, &v23, 2LL);
  v9 = _mm_movelh_ps((__m128)v21, (__m128)v22);
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v12 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)).m128_f32[0], *((float *)&Sign + 1));
  v23 = qword_18025EF18;
  v24 = dword_18025EF20;
  v13 = v12;
  sub_180086E38(a1, &v21, &v23, 2LL);
  v14 = _mm_movelh_ps((__m128)v21, (__m128)v22);
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 102);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v17 = copysignf(_mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)).m128_f32[0], v20);
  *a2 = v8;
  result = a2;
  a2[1] = v13;
  a2[2] = v17;
  return result;
}
