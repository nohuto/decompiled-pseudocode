/*
 * XREFs of SeReleaseSid @ 0x1406112AC
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtCreateTokenEx @ 0x1405BC550 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F814 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x1406144A4 (AlpcpConnectPort.c)
 *     NtCreateLowBoxToken @ 0x140654F90 (NtCreateLowBoxToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EBAC (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1406A5B40 (NtSecureConnectPort.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
