/*
 * XREFs of sub_180087EB0 @ 0x180087EB0
 * Callers:
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_180087EB0(double a1)
{
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)0LL, *(__m128 *)&a1)) & 7) == 7 )
    wassert(
      L"!XMVector3Equal(Axis, XMVectorZero())",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMisc.inl",
      0x2BAu);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_180143EB0, *(__m128 *)&a1), (__m128)xmmword_180143E90)) & 7) != 0 )
    wassert(L"!XMVector3IsInfinite(Axis)", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMisc.inl", 0x2BBu);
  return sub_18008810C();
}
