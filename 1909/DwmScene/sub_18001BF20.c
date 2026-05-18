/*
 * XREFs of sub_18001BF20 @ 0x18001BF20
 * Callers:
 *     sub_18001BFBC @ 0x18001BFBC (sub_18001BFBC.c)
 *     sub_18001C114 @ 0x18001C114 (sub_18001C114.c)
 *     sub_1800CB758 @ 0x1800CB758 (sub_1800CB758.c)
 *     sub_180104470 @ 0x180104470 (sub_180104470.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_18001BF20(__m128 *a1, __m128 *a2)
{
  __m128 *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_add_ps(*a2, *a1);
  return result;
}
