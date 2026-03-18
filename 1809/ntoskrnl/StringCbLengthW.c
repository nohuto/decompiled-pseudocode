/*
 * XREFs of StringCbLengthW @ 0x1400FD0D0
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140668B10 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140684F5C (SPCallServerHandleIsAppLicensed.c)
 *     sub_1406884C0 @ 0x1406884C0 (sub_1406884C0.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C11A0 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_1408E0630 @ 0x1408E0630 (sub_1408E0630.c)
 *     sub_1408E1D64 @ 0x1408E1D64 (sub_1408E1D64.c)
 *     sub_1408E366C @ 0x1408E366C (sub_1408E366C.c)
 *     sub_1408E3E88 @ 0x1408E3E88 (sub_1408E3E88.c)
 *     sub_1408E4B04 @ 0x1408E4B04 (sub_1408E4B04.c)
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
