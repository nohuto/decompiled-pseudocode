/*
 * XREFs of sub_1800B74D4 @ 0x1800B74D4
 * Callers:
 *     sub_18001BFBC @ 0x18001BFBC (sub_18001BFBC.c)
 *     sub_1800B8A60 @ 0x1800B8A60 (sub_1800B8A60.c)
 * Callees:
 *     sub_1800B7108 @ 0x1800B7108 (sub_1800B7108.c)
 *     sub_1800B7450 @ 0x1800B7450 (sub_1800B7450.c)
 */

__m128 *__fastcall sub_1800B74D4(__m128 *a1, __m128 *a2)
{
  __m128 *v4; // r15
  __m128 *v5; // rsi
  __m128 v6; // xmm6
  __m128 *v7; // r14
  __m128 v8; // xmm7
  __m128 v9; // xmm6
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __m128 v12; // xmm2
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 *v16; // rdi
  __m128 v17; // xmm2
  __m128 v18; // xmm7
  __m128 v19; // xmm2

  sub_1800B7108(a1);
  v4 = a2 + 5;
  if ( a2 == (__m128 *)-80LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v5 = a2 + 4;
  v6 = _mm_mul_ps(*v4, (__m128)xmmword_1801F4F20);
  if ( a2 == (__m128 *)-64LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v7 = a2 + 3;
  v8 = _mm_mul_ps(*v5, (__m128)xmmword_1801F4F30);
  if ( a2 == (__m128 *)-48LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v9 = _mm_add_ps(v6, _mm_add_ps(v8, _mm_mul_ps(*v7, (__m128)xmmword_1801F4F30)));
  a1->m128_i32[0] = v9.m128_i32[0];
  a1->m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  a1->m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  a1->m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  if ( a2 == (__m128 *)-16LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v10 = _mm_mul_ps(a2[1], (__m128)xmmword_1801F4F50);
  a1[1].m128_i32[0] = v10.m128_i32[0];
  a1[1].m128_i32[3] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  a1[1].m128_i32[1] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  a1[1].m128_i32[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  if ( a2 == (__m128 *)-32LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v11 = _mm_mul_ps(a2[2], (__m128)xmmword_1801F4F50);
  a1[2].m128_i32[0] = v11.m128_i32[0];
  a1[2].m128_i32[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  a1[2].m128_i32[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  a1[2].m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v12 = _mm_mul_ps(*a2, (__m128)xmmword_1801F4F50);
  a1[3].m128_i32[0] = v12.m128_i32[0];
  a1[3].m128_i32[3] = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
  a1[3].m128_i32[1] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  a1[3].m128_i32[2] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  if ( a2 == (__m128 *)-128LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v13 = _mm_mul_ps(a2[8], (__m128)xmmword_1801F4F60);
  a1[4].m128_i32[0] = v13.m128_i32[0];
  a1[4].m128_i32[3] = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  a1[4].m128_i32[1] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  a1[4].m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  if ( a2 == (__m128 *)-96LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v14 = _mm_mul_ps(a2[6], (__m128)xmmword_1801F4F60);
  a1[5].m128_i32[0] = v14.m128_i32[0];
  a1[5].m128_i32[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  a1[5].m128_i32[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  a1[5].m128_i32[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v15 = _mm_sub_ps(
          _mm_sub_ps(_mm_mul_ps(*v4, (__m128)xmmword_1801F4F70), _mm_mul_ps(*v7, (__m128)xmmword_1801F4F40)),
          _mm_mul_ps(*v5, (__m128)xmmword_1801F4F40));
  a1[6].m128_i32[0] = v15.m128_i32[0];
  a1[6].m128_i32[3] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  a1[6].m128_i32[1] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  a1[6].m128_i32[2] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v16 = a2 + 7;
  if ( !v16 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v17 = _mm_mul_ps(*v16, (__m128)xmmword_1801F4F60);
  a1[7].m128_i32[0] = v17.m128_i32[0];
  a1[7].m128_i32[3] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  a1[7].m128_i32[1] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  a1[7].m128_i32[2] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  if ( !v5 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v18 = _mm_mul_ps(*v5, (__m128)xmmword_1801F4F60);
  if ( !v7 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v19 = _mm_sub_ps(_mm_mul_ps(*v7, (__m128)xmmword_1801F4F60), v18);
  a1[8].m128_i32[0] = v19.m128_i32[0];
  a1[8].m128_i32[2] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  a1[8].m128_i32[1] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  a1[8].m128_i32[3] = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
  sub_1800B7450(a1, COERCE_DOUBLE(1078530011LL));
  return a1;
}
