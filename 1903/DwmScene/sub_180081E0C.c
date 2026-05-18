/*
 * XREFs of sub_180081E0C @ 0x180081E0C
 * Callers:
 *     sub_18009C540 @ 0x18009C540 (sub_18009C540.c)
 *     sub_1800FD970 @ 0x1800FD970 (sub_1800FD970.c)
 *     sub_180101EC0 @ 0x180101EC0 (sub_180101EC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180081E0C(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  return (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2)) & 7) != 7;
}
