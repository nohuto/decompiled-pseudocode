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

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3, a2) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v3, a2, a3, v3) )
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
    *a3 = 0;
    return 0LL;
  }
  return 3221225485LL;
}
