/*
 * XREFs of sub_18008E26C @ 0x18008E26C
 * Callers:
 *     sub_18008E640 @ 0x18008E640 (sub_18008E640.c)
 *     sub_1800AE280 @ 0x1800AE280 (sub_1800AE280.c)
 *     sub_1800B8764 @ 0x1800B8764 (sub_1800B8764.c)
 *     sub_1800E03E0 @ 0x1800E03E0 (sub_1800E03E0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008E26C(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpneq_ps(*a2, *a1)) != 0;
}
