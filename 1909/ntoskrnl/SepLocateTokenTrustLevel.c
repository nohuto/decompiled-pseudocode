/*
 * XREFs of SepLocateTokenTrustLevel @ 0x14000ACD4
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     RtlpSetSecurityObject @ 0x1405C80E0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1405DE270 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406B6FC0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SepAdjustAccessStateForConstraints @ 0x1406D4BD0 (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x1408DE324 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14000CAB0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  BOOLEAN DominatesTrust; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  if ( *a1 )
  {
    RtlSidDominatesForTrust(*(PSID *)(v2 + 1104), *(PSID *)(v1 + 1104), &DominatesTrust);
    if ( DominatesTrust )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
