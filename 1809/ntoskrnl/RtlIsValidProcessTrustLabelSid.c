/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1400ABB60
 * Callers:
 *     SepReconcileTrustSidWithProcessProtection @ 0x1400ABA70 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x1400AD1A0 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727930 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140892700 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  return !v1 && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}
