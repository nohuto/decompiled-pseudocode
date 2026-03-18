/*
 * XREFs of StringCbLengthW @ 0x1401078A0
 * Callers:
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406B2E54 (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x1406B45A0 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406E51A8 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_14091D90C @ 0x14091D90C (sub_14091D90C.c)
 *     sub_14091EC8C @ 0x14091EC8C (sub_14091EC8C.c)
 *     sub_14091FBD8 @ 0x14091FBD8 (sub_14091FBD8.c)
 *     sub_1409201F8 @ 0x1409201F8 (sub_1409201F8.c)
 *     sub_140920C8C @ 0x140920C8C (sub_140920C8C.c)
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
