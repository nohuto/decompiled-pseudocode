/*
 * XREFs of sub_180083074 @ 0x180083074
 * Callers:
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 * Callees:
 *     sub_180087E84 @ 0x180087E84 (sub_180087E84.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180083074(_DWORD *a1, __int128 *a2)
{
  __int128 v3; // xmm0

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  v3 = *a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 1065353216;
  *(double *)&v3 = sub_180087E84();
  *(_OWORD *)a1 = v3;
  return a1;
}
