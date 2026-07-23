/*
 * XREFs of SeValidateSecurityQos @ 0x14064B6F8
 * Callers:
 *     AlpcpValidateAndSetPortAttributes @ 0x140615E5C (AlpcpValidateAndSetPortAttributes.c)
 *     SeCaptureSecurityQos @ 0x14064B61C (SeCaptureSecurityQos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeValidateSecurityQos(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) >= 2u )
    return 3221225485LL;
  else
    return *(_DWORD *)(a1 + 4) > 3u ? 0xC00000A5 : 0;
}
