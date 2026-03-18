/*
 * XREFs of SeReleaseSid @ 0x14064501C
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtCreateTokenEx @ 0x14061B850 (NtCreateTokenEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406420EC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x140646324 (AlpcpConnectPort.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B1744 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1406CC980 (NtSecureConnectPort.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
