/*
 * XREFs of sub_180086C54 @ 0x180086C54
 * Callers:
 *     sub_180086E38 @ 0x180086E38 (sub_180086E38.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180086C54(_DWORD *a1, unsigned __int64 *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  _DWORD *result; // rax
  __m128 v5; // xmm3

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  result = a1;
  v5 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), a3[1]), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *a3)),
         _mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), a3[2]));
  *a1 = v5.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  return result;
}
