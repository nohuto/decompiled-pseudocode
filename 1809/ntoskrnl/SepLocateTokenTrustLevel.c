/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1400A8F44
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406328A0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406329D0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x14070695C (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x1408A14F4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400AD0E0 (RtlSidDominatesForTrust.c)
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
