/*
 * XREFs of sub_180081DBC @ 0x180081DBC
 * Callers:
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_1800865F0 @ 0x1800865F0 (sub_1800865F0.c)
 *     sub_180087390 @ 0x180087390 (sub_180087390.c)
 *     sub_180099F28 @ 0x180099F28 (sub_180099F28.c)
 *     sub_1800AC304 @ 0x1800AC304 (sub_1800AC304.c)
 *     sub_1800AEB74 @ 0x1800AEB74 (sub_1800AEB74.c)
 *     sub_1800B0840 @ 0x1800B0840 (sub_1800B0840.c)
 *     sub_1800B0A34 @ 0x1800B0A34 (sub_1800B0A34.c)
 *     sub_1800B1348 @ 0x1800B1348 (sub_1800B1348.c)
 *     sub_1800B19E0 @ 0x1800B19E0 (sub_1800B19E0.c)
 *     sub_1800B1D20 @ 0x1800B1D20 (sub_1800B1D20.c)
 *     sub_1800B1F80 @ 0x1800B1F80 (sub_1800B1F80.c)
 *     sub_1800B2184 @ 0x1800B2184 (sub_1800B2184.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180081DBC(_OWORD *a1, _OWORD *a2)
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
