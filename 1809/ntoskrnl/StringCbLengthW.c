/*
 * XREFs of StringCbLengthW @ 0x1400FD0F0
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140668AF0 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140684F3C (SPCallServerHandleIsAppLicensed.c)
 *     sub_1406884A0 @ 0x1406884A0 (sub_1406884A0.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C1180 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_1408E0610 @ 0x1408E0610 (sub_1408E0610.c)
 *     sub_1408E1D44 @ 0x1408E1D44 (sub_1408E1D44.c)
 *     sub_1408E364C @ 0x1408E364C (sub_1408E364C.c)
 *     sub_1408E3E68 @ 0x1408E3E68 (sub_1408E3E68.c)
 *     sub_1408E4AE4 @ 0x1408E4AE4 (sub_1408E4AE4.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
