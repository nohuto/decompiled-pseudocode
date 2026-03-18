/*
 * XREFs of StringCbLengthW @ 0x1400D5CD0
 * Callers:
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     PfVerifyScenarioBuffer @ 0x140670D80 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406DE5C4 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406E5DF8 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_14091D36C @ 0x14091D36C (sub_14091D36C.c)
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 *     sub_14091F638 @ 0x14091F638 (sub_14091F638.c)
 *     sub_14091FC58 @ 0x14091FC58 (sub_14091FC58.c)
 *     sub_1409206EC @ 0x1409206EC (sub_1409206EC.c)
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
