/*
 * XREFs of RtlSidDominatesForTrust @ 0x14000CAB0
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x14000ACD4 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x14000C4A8 (SepTrustLevelCheck.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14000C980 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     RtlpValidTrustSubjectContext @ 0x140180564 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14031DAF0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1405DE270 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406B6FC0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SepAdjustAccessStateForConstraints @ 0x1406D4BD0 (SepAdjustAccessStateForConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406EC2E0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1405DF360 (RtlIsValidProcessTrustLabelSid.c)
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
