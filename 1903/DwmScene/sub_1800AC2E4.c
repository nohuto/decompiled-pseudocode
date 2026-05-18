/*
 * XREFs of sub_1800AC2E4 @ 0x1800AC2E4
 * Callers:
 *     sub_1800AE170 @ 0x1800AE170 (sub_1800AE170.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800AC2E4(unsigned __int64 *a1, unsigned __int64 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  return (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*a2, (__m128)*a1)) & 3) == 3;
}
