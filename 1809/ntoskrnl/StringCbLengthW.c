/*
 * XREFs of StringCbLengthW @ 0x1400FD170
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140669CB0 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406860FC (SPCallServerHandleIsAppLicensed.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C2420 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_1408E18D0 @ 0x1408E18D0 (sub_1408E18D0.c)
 *     sub_1408E3004 @ 0x1408E3004 (sub_1408E3004.c)
 *     sub_1408E490C @ 0x1408E490C (sub_1408E490C.c)
 *     sub_1408E5128 @ 0x1408E5128 (sub_1408E5128.c)
 *     sub_1408E5DA4 @ 0x1408E5DA4 (sub_1408E5DA4.c)
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
