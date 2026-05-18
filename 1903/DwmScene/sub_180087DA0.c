/*
 * XREFs of sub_180087DA0 @ 0x180087DA0
 * Callers:
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_180087DA0(double a1)
{
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)0LL, *(__m128 *)&a1)) & 7) == 7 )
    wassert(
      L"!XMVector3Equal(Axis, XMVectorZero())",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMisc.inl",
      0x2BAu);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_180142EB0, *(__m128 *)&a1), (__m128)xmmword_180142E90)) & 7) != 0 )
    wassert(L"!XMVector3IsInfinite(Axis)", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMisc.inl", 0x2BBu);
  return sub_180087FFC();
}
