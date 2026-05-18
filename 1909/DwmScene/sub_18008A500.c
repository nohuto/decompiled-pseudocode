/*
 * XREFs of sub_18008A500 @ 0x18008A500
 * Callers:
 *     sub_18009C760 @ 0x18009C760 (sub_18009C760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008A500(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm8
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm2
  __m128 v7; // xmm9
  __m128 v8; // xmm6
  __int64 result; // rax
  __m128 v10; // xmm7
  __m128 v11; // xmm6

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( a2 == (unsigned __int64 *)-12LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v4 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a2 + 12), (__m128)*((unsigned int *)a2 + 5));
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v5 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  if ( a3 == (unsigned __int64 *)-12LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v6 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a3 + 12), (__m128)*((unsigned int *)a3 + 5));
  v7 = _mm_min_ps(_mm_sub_ps(v3, v4), _mm_sub_ps(v5, v6));
  v8 = _mm_max_ps(_mm_add_ps(v4, v3), _mm_add_ps(v6, v5));
  result = _mm_movemask_ps(_mm_cmple_ps(v7, v8)) & 7;
  if ( (_BYTE)result != 7 )
    wassert(L"XMVector3LessOrEqual( Min, Max )", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXCollision.inl", 0x743u);
  v10 = _mm_mul_ps(_mm_add_ps(v8, v7), (__m128)xmmword_180146450);
  if ( !a1 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
  *a1 = v10.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  v11 = _mm_mul_ps(_mm_sub_ps(v8, v7), (__m128)xmmword_180146450);
  a1[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  if ( a1 == (_DWORD *)-12LL )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
  a1[3] = v11.m128_i32[0];
  a1[4] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  a1[5] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  return result;
}
