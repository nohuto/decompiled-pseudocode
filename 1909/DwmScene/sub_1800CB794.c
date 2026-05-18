/*
 * XREFs of sub_1800CB794 @ 0x1800CB794
 * Callers:
 *     sub_1800B8B1C @ 0x1800B8B1C (sub_1800B8B1C.c)
 * Callees:
 *     sub_1800B7450 @ 0x1800B7450 (sub_1800B7450.c)
 *     sub_1800CB5C8 @ 0x1800CB5C8 (sub_1800CB5C8.c)
 */

__m128 *__fastcall sub_1800CB794(__m128 *a1, __m128 *a2)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm2
  __m128 *v6; // r14
  __m128 v7; // xmm2
  __m128 *v8; // rsi
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  __m128 v12; // xmm2
  __m128 v13; // xmm6
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 *v16; // rdi
  __m128 v17; // xmm2

  sub_1800CB5C8(a1);
  if ( a2 == (__m128 *)-48LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v4 = _mm_mul_ps(a2[3], (__m128)xmmword_1801F6EA0);
  a1->m128_i32[0] = v4.m128_i32[0];
  a1->m128_i32[3] = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  a1->m128_i32[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  a1->m128_i32[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  if ( a2 == (__m128 *)-16LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v5 = _mm_mul_ps(a2[1], (__m128)xmmword_1801F6EA0);
  a1[1].m128_i32[0] = v5.m128_i32[0];
  a1[1].m128_i32[3] = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  a1[1].m128_i32[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  a1[1].m128_i32[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  if ( a2 == (__m128 *)-32LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v6 = a2 + 8;
  v7 = _mm_mul_ps(a2[2], (__m128)xmmword_1801F6EA0);
  a1[2].m128_i32[0] = v7.m128_i32[0];
  a1[2].m128_i32[3] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  a1[2].m128_i32[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  a1[2].m128_i32[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  if ( a2 == (__m128 *)-128LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v8 = a2 + 6;
  v9 = _mm_mul_ps(*v6, (__m128)xmmword_1801F6E60);
  if ( a2 == (__m128 *)-96LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v10 = _mm_mul_ps(*v8, (__m128)xmmword_1801F6E50);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v11 = _mm_add_ps(v9, _mm_sub_ps(_mm_mul_ps(*a2, (__m128)xmmword_1801F6E90), v10));
  a1[3].m128_i32[0] = v11.m128_i32[0];
  a1[3].m128_i32[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  a1[3].m128_i32[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  a1[3].m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v12 = _mm_sub_ps(
          _mm_sub_ps(_mm_mul_ps(*a2, (__m128)xmmword_1801F6E90), _mm_mul_ps(*v8, (__m128)xmmword_1801F6E50)),
          _mm_mul_ps(*v6, (__m128)xmmword_1801F6E60));
  a1[4].m128_i32[0] = v12.m128_i32[0];
  a1[4].m128_i32[3] = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
  a1[4].m128_i32[1] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  a1[4].m128_i32[2] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  v13 = _mm_add_ps(_mm_mul_ps(*v8, (__m128)xmmword_1801F6E70), _mm_mul_ps(*a2, (__m128)xmmword_1801F6E90));
  a1[5].m128_i32[0] = v13.m128_i32[0];
  a1[5].m128_i32[3] = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  a1[5].m128_i32[1] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  a1[5].m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  if ( a2 == (__m128 *)-80LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v14 = _mm_mul_ps(a2[5], (__m128)xmmword_1801F6E80);
  a1[6].m128_i32[0] = v14.m128_i32[0];
  a1[6].m128_i32[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  a1[6].m128_i32[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  a1[6].m128_i32[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  if ( a2 == (__m128 *)-112LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v15 = _mm_mul_ps(a2[7], (__m128)xmmword_1801F6E80);
  a1[7].m128_i32[0] = v15.m128_i32[0];
  a1[7].m128_i32[3] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  a1[7].m128_i32[1] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  a1[7].m128_i32[2] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v16 = a2 + 4;
  if ( !v16 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v17 = _mm_mul_ps(*v16, (__m128)xmmword_1801F6E80);
  a1[8].m128_i32[0] = v17.m128_i32[0];
  a1[8].m128_i32[2] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  a1[8].m128_i32[1] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  a1[8].m128_i32[3] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  sub_1800B7450(a1, COERCE_DOUBLE(1050868099LL));
  return a1;
}
