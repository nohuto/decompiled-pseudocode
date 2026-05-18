/*
 * XREFs of sub_18008E15C @ 0x18008E15C
 * Callers:
 *     sub_18008E530 @ 0x18008E530 (sub_18008E530.c)
 *     sub_1800AE170 @ 0x1800AE170 (sub_1800AE170.c)
 *     sub_1800B8654 @ 0x1800B8654 (sub_1800B8654.c)
 *     sub_1800E02D0 @ 0x1800E02D0 (sub_1800E02D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008E15C(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpneq_ps(*a2, *a1)) != 0;
}
