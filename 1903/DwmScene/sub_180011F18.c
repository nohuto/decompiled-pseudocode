/*
 * XREFs of sub_180011F18 @ 0x180011F18
 * Callers:
 *     sub_180012100 @ 0x180012100 (sub_180012100.c)
 *     sub_18009C638 @ 0x18009C638 (sub_18009C638.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_180011F18(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __m128 v5; // xmm6
  __m128 v6; // xmm9
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rsi
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm2
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a2 )
    wassert(L"Count > 0", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXCollision.inl", 0x772u);
  if ( !a3 )
    wassert(L"pPoints", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXCollision.inl", 0x773u);
  v5 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v6 = v5;
  if ( a2 > 1 )
  {
    v7 = (unsigned __int64 *)((char *)a3 + a4);
    v8 = a2 - 1;
    do
    {
      if ( !v7 )
        wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
      v9 = (__m128)*v7;
      v10 = (__m128)*((unsigned int *)v7 + 2);
      v7 = (unsigned __int64 *)((char *)v7 + a4);
      v11 = _mm_movelh_ps(v9, v10);
      v6 = _mm_min_ps(v6, v11);
      v5 = _mm_max_ps(v5, v11);
      --v8;
    }
    while ( v8 );
  }
  v12 = _mm_mul_ps(_mm_add_ps(v5, v6), (__m128)xmmword_180145450);
  if ( !a1 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
  *a1 = v12.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  v13 = _mm_mul_ps(_mm_sub_ps(v5, v6), (__m128)xmmword_180145450);
  a1[2] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  if ( a1 == (_DWORD *)-12LL )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
  a1[3] = v13.m128_i32[0];
  a1[4] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  a1[5] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  return result;
}
