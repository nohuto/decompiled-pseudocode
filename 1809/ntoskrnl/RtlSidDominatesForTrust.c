/*
 * XREFs of RtlSidDominatesForTrust @ 0x1400AD180
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8DF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8FE4 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1400AA8B8 (SepTrustLevelCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CA9C (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1402FFD50 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140631880 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406319B0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeTokenCanImpersonate @ 0x1406380E0 (SeTokenCanImpersonate.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B9118 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406CB670 (SeCreateClientSecurityFromSubjectContext.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407056DC (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1400ABB40 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !RtlIsValidProcessTrustLabelSid(a1) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
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
    *a3 = 0;
    return 0LL;
  }
  return 3221225485LL;
}
