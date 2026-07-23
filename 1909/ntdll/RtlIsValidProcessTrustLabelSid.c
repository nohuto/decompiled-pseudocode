/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x18000F100
 * Callers:
 *     RtlSidDominatesForTrust @ 0x18000F520 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008B540 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E6FB0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // eax

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  return !v1 && (*((_DWORD *)Sid + 2) || !*((_DWORD *)Sid + 3));
}
