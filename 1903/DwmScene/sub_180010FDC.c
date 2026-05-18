/*
 * XREFs of sub_180010FDC @ 0x180010FDC
 * Callers:
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180018D28 @ 0x180018D28 (sub_180018D28.c)
 *     sub_180082F74 @ 0x180082F74 (sub_180082F74.c)
 *     sub_1800830F8 @ 0x1800830F8 (sub_1800830F8.c)
 *     sub_180083214 @ 0x180083214 (sub_180083214.c)
 *     sub_18008329C @ 0x18008329C (sub_18008329C.c)
 *     sub_18008457C @ 0x18008457C (sub_18008457C.c)
 *     sub_1800B16BC @ 0x1800B16BC (sub_1800B16BC.c)
 *     sub_1800B1790 @ 0x1800B1790 (sub_1800B1790.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_UNKNOWN **__fastcall sub_180010FDC(_OWORD *a1, double a2, double a3, double a4)
{
  __int128 v4; // xmm0
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a1 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x831u);
  *a1 = v4;
  a1[1] = *(_OWORD *)&a2;
  a1[2] = *(_OWORD *)&a3;
  a1[3] = *(_OWORD *)&a4;
  return result;
}
