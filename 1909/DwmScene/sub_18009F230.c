/*
 * XREFs of sub_18009F230 @ 0x18009F230
 * Callers:
 *     sub_18009F2A8 @ 0x18009F2A8 (sub_18009F2A8.c)
 *     sub_1800AA524 @ 0x1800AA524 (sub_1800AA524.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18009F230(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpeq_ps(*a2, *a1)) == 15;
}
