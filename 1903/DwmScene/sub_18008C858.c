/*
 * XREFs of sub_18008C858 @ 0x18008C858
 * Callers:
 *     sub_18009C650 @ 0x18009C650 (sub_18009C650.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall sub_18008C858(unsigned __int64 *a1, _DWORD *a2, double a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm9
  __m128 v7; // xmm10
  __m128 v8; // xmm11
  __m128 v9; // xmm7
  unsigned __int64 result; // rax
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __m128 v13; // xmm6
  __m128 v14; // xmm8
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm7
  __m128 v19; // xmm6

  v6 = *(__m128 *)&a4;
  v7 = *(__m128 *)&a3;
  v8 = v5;
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v9 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( a1 == (unsigned __int64 *)-12LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  result = 1LL;
  v11 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a1 + 12), (__m128)*((unsigned int *)a1 + 5));
  v12 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_180142CC0[0], v11), v9);
  v13 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v5), _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v4)),
            _mm_mul_ps(_mm_shuffle_ps(v12, v12, 170), v7)),
          v6);
  v14 = v13;
  do
  {
    v15 = (__m128)xmmword_180142CC0[result++];
    v16 = _mm_add_ps(_mm_mul_ps(v15, v11), v9);
    v17 = _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v8), _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v4)),
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), v7)),
            v6);
    v14 = _mm_min_ps(v14, v17);
    v13 = _mm_max_ps(v13, v17);
  }
  while ( result < 8 );
  v18 = _mm_mul_ps(_mm_add_ps(v13, v14), (__m128)xmmword_180145450);
  if ( !a2 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
  *a2 = v18.m128_i32[0];
  a2[1] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  a2[2] = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
  v19 = _mm_mul_ps(_mm_sub_ps(v13, v14), (__m128)xmmword_180145450);
  if ( a2 == (_DWORD *)-12LL )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
  a2[3] = v19.m128_i32[0];
  a2[4] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  a2[5] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  return result * 16;
}
