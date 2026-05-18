/*
 * XREFs of sub_180081E98 @ 0x180081E98
 * Callers:
 *     sub_180084008 @ 0x180084008 (sub_180084008.c)
 *     sub_180086838 @ 0x180086838 (sub_180086838.c)
 *     sub_18010D080 @ 0x18010D080 (sub_18010D080.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_180081E98(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm4
  __m128 *result; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm1

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = *a2;
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v4 = *a3;
  a1->m128_i32[0] = 0;
  result = a1;
  a1->m128_i32[1] = 0;
  a1->m128_i32[2] = 0;
  a1->m128_i32[3] = 1065353216;
  v6 = _mm_shuffle_ps(v3, v3, 27);
  v7 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v6);
  v8 = _mm_shuffle_ps(v6, v6, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 27), _mm_shuffle_ps(v4, v4, 170)), (__m128)xmmword_1801E3640),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v8), (__m128)xmmword_1801E3630)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 255), v3), _mm_mul_ps((__m128)xmmword_1801E3620, v7)));
  return result;
}
