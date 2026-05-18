/*
 * XREFs of sub_18006DA90 @ 0x18006DA90
 * Callers:
 *     sub_180104470 @ 0x180104470 (sub_180104470.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18006DA90(__m128 *a1)
{
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  *a1 = _mm_min_ps(_mm_max_ps(*a1, (__m128)xmmword_180143E20), (__m128)xmmword_180143E10);
}
