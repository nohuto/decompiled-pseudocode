/*
 * XREFs of sub_180083084 @ 0x180083084
 * Callers:
 *     sub_180087390 @ 0x180087390 (sub_180087390.c)
 * Callees:
 *     sub_18001102C @ 0x18001102C (sub_18001102C.c)
 */

__int64 __fastcall sub_180083084(__int64 a1, __m128 *a2)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm4
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm5
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm2
  __m128 v13; // xmm1

  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = *a2;
  v4 = _mm_add_ps(v3, v3);
  v5 = _mm_mul_ps(v4, *a2);
  v6 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 230), _mm_shuffle_ps(*a2, *a2, 208));
  v7 = _mm_sub_ps(
         _mm_sub_ps((__m128)xmmword_1801E44B0, _mm_and_ps(_mm_shuffle_ps(v5, v5, 193), (__m128)xmmword_180143DE0)),
         _mm_and_ps(_mm_shuffle_ps(v5, v5, 218), (__m128)xmmword_180143DE0));
  v8 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 201), _mm_shuffle_ps(v3, v3, 255));
  v9 = _mm_add_ps(v8, v6);
  v10 = _mm_sub_ps(v6, v8);
  v11 = _mm_shuffle_ps(v9, v10, 73);
  v12 = _mm_shuffle_ps(v9, v10, 160);
  v13 = _mm_shuffle_ps(v7, _mm_shuffle_ps(v11, v11, 120), 237);
  sub_18001102C(
    (_OWORD *)a1,
    *(double *)_mm_shuffle_ps(v13, v13, 114).m128_u64,
    *(double *)_mm_shuffle_ps(_mm_shuffle_ps(v12, v12, 136), v7, 228).m128_u64,
    0.0);
  return a1;
}
