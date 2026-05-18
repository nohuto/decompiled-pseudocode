/*
 * XREFs of sub_180099950 @ 0x180099950
 * Callers:
 *     sub_18009B3D0 @ 0x18009B3D0 (sub_18009B3D0.c)
 *     sub_18009C8D0 @ 0x18009C8D0 (sub_18009C8D0.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall sub_180099950(unsigned __int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  __m128 v3; // xmm8
  unsigned __int64 v4; // rdi
  __m128 v5; // xmm7
  __int128 *result; // rax
  __m128 v7; // xmm6

  v2 = a2;
  if ( !a2 )
    wassert(L"Corners != nullptr", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXCollision.inl", 0x4E2u);
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( a1 == (unsigned __int64 *)-12LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v4 = 0LL;
  v5 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a1 + 12), (__m128)*((unsigned int *)a1 + 5));
  do
  {
    result = xmmword_180143CC0;
    v7 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_180143CC0[v4], v5), v3);
    if ( !v2 )
      wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
    *v2 = v7.m128_i32[0];
    ++v4;
    v2[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
    v2[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
    v2 += 3;
  }
  while ( v4 < 8 );
  return result;
}
