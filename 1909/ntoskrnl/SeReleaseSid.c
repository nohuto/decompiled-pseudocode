/*
 * XREFs of SeReleaseSid @ 0x140658B6C
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtCreateTokenEx @ 0x14061D360 (NtCreateTokenEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140655C3C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x14065A080 (AlpcpConnectPort.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B46E4 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1406CB7B0 (NtSecureConnectPort.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
