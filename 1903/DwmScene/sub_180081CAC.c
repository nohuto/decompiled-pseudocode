/*
 * XREFs of sub_180081CAC @ 0x180081CAC
 * Callers:
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_1800864E0 @ 0x1800864E0 (sub_1800864E0.c)
 *     sub_180087280 @ 0x180087280 (sub_180087280.c)
 *     sub_180099E18 @ 0x180099E18 (sub_180099E18.c)
 *     sub_1800AC1F4 @ 0x1800AC1F4 (sub_1800AC1F4.c)
 *     sub_1800AEA64 @ 0x1800AEA64 (sub_1800AEA64.c)
 *     sub_1800B0730 @ 0x1800B0730 (sub_1800B0730.c)
 *     sub_1800B0924 @ 0x1800B0924 (sub_1800B0924.c)
 *     sub_1800B1238 @ 0x1800B1238 (sub_1800B1238.c)
 *     sub_1800B18D0 @ 0x1800B18D0 (sub_1800B18D0.c)
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 *     sub_1800B1E70 @ 0x1800B1E70 (sub_1800B1E70.c)
 *     sub_1800B2074 @ 0x1800B2074 (sub_1800B2074.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180081CAC(_OWORD *a1, _OWORD *a2)
{
  __int128 v2; // xmm9
  __int128 v3; // xmm8
  __int128 v4; // xmm6
  _OWORD *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a2 == (_OWORD *)-16LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v2 = a2[1];
  if ( a2 == (_OWORD *)-32LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = a2[2];
  if ( a2 == (_OWORD *)-48LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v4 = a2[3];
  if ( !a1 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x6A2u);
  *a1 = *a2;
  if ( a1 == (_OWORD *)-16LL )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x6A2u);
  a1[1] = v2;
  if ( a1 == (_OWORD *)-32LL )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x6A2u);
  a1[2] = v3;
  if ( a1 == (_OWORD *)-48LL )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x6A2u);
  result = a1;
  a1[3] = v4;
  return result;
}
