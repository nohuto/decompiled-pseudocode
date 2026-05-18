/*
 * XREFs of sub_1800B1694 @ 0x1800B1694
 * Callers:
 *     sub_1800B0290 @ 0x1800B0290 (sub_1800B0290.c)
 * Callees:
 *     sub_1800B1780 @ 0x1800B1780 (sub_1800B1780.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int32 *__fastcall sub_1800B1694(int a1, __int32 *a2, __int32 *a3, int a4, int a5)
{
  __int32 v6; // xmm1_4
  __m128 v7; // xmm6
  __int32 v8; // xmm0_4
  __int32 v9; // xmm2_4
  __int32 v10; // xmm1_4
  __int32 *result; // rax
  __m128 v12; // [rsp+30h] [rbp-40h] BYREF
  __m128 v13; // [rsp+40h] [rbp-30h] BYREF

  v6 = a3[1];
  v7 = (__m128)0x3F800000u;
  v13.m128_i32[0] = *a3;
  v13.m128_i32[2] = a3[2];
  v13.m128_i32[1] = v6;
  v13.m128_i32[3] = 1065353216;
  v12 = v13;
  sub_1800B1780(a1, (unsigned int)&v13, (unsigned int)&v12, a4, a5, 1);
  if ( v13.m128_f32[3] <= 0.0 )
  {
    v8 = 2143289344;
    v10 = 2143289344;
    v9 = 2143289344;
  }
  else
  {
    v7.m128_f32[0] = 1.0 / v13.m128_f32[3];
    v13 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v13);
    v8 = v13.m128_i32[2];
    v9 = v13.m128_i32[1];
    v10 = v13.m128_i32[0];
  }
  *a2 = v10;
  result = a2;
  a2[1] = v9;
  a2[2] = v8;
  return result;
}
