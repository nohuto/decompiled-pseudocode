/*
 * XREFs of sub_18009D7CC @ 0x18009D7CC
 * Callers:
 *     sub_1800AE280 @ 0x1800AE280 (sub_1800AE280.c)
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18009D7CC(unsigned __int64 *a1, unsigned __int64 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  return (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*a2, (__m128)*a1)) & 3) != 3;
}
