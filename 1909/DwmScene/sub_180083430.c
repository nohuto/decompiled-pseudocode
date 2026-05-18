/*
 * XREFs of sub_180083430 @ 0x180083430
 * Callers:
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_1801166D0 @ 0x1801166D0 (sub_1801166D0.c)
 *     sub_180117F54 @ 0x180117F54 (sub_180117F54.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180083430(unsigned __int64 *a1, _DWORD *a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm6
  _DWORD *result; // rax
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  __m128 v7; // xmm6
  __m128 v8; // xmm2

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a2;
  v5 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v6 = _mm_shuffle_ps(v5, v5, 210);
  v7 = _mm_shuffle_ps(v3, v3, 201);
  v8 = _mm_and_ps(
         _mm_sub_ps(_mm_mul_ps(v6, v7), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 210), _mm_shuffle_ps(v7, v7, 201))),
         (__m128)xmmword_180143DE0);
  *a2 = v8.m128_i32[0];
  a2[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  a2[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  return result;
}
