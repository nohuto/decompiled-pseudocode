/*
 * XREFs of sub_18009F120 @ 0x18009F120
 * Callers:
 *     sub_18009F198 @ 0x18009F198 (sub_18009F198.c)
 *     sub_1800AA414 @ 0x1800AA414 (sub_1800AA414.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18009F120(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpeq_ps(*a2, *a1)) == 15;
}
