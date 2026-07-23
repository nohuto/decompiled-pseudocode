/*
 * XREFs of RtlSidDominatesForTrust @ 0x1400AD0E0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8D50 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1400AA818 (SepTrustLevelCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CBBC (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140300040 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406328A0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406329D0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406CC8F0 (SeCreateClientSecurityFromSubjectContext.c)
 *     SepAdjustAccessStateForConstraints @ 0x14070695C (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1400ABAA0 (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PSID v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *DominatesTrust = 0;
  v3 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v3 )
  {
LABEL_3:
    *DominatesTrust = 1;
    return 0;
  }
  if ( RtlIsValidProcessTrustLabelSid(v3) )
  {
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
        goto LABEL_3;
    }
    else if ( !*(_DWORD *)(v5 + 8) )
    {
      goto LABEL_3;
    }
    *DominatesTrust = 0;
    return 0;
  }
  return -1073741811;
}
