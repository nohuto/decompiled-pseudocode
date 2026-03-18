/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1405DEB60
 * Callers:
 *     RtlSidDominatesForTrust @ 0x14000CA20 (RtlSidDominatesForTrust.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000CAA0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlAddProcessTrustLabelAce @ 0x140758BB0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1408D0980 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
