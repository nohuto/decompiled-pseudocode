/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1400A8FE4
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140631880 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406319B0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407056DC (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x1408A02B4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400AD180 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  if ( *a1 )
  {
    RtlSidDominatesForTrust(*(_QWORD *)(v2 + 1104), *(_QWORD *)(v1 + 1104), &v4);
    if ( v4 )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
