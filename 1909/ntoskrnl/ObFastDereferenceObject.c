/*
 * XREFs of ObFastDereferenceObject @ 0x14003AE70
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     PfSnCheckModernApp @ 0x14061B3F8 (PfSnCheckModernApp.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061E550 (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x14061E6C8 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x14061E7BC (SepIsChildTokenByPointer.c)
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140656C40 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140658230 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     PspMapSystemDll @ 0x14067E6D8 (PspMapSystemDll.c)
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140684214 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1406845F4 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14068688C (PopEtGetProcessSidAndPackageIdentity.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B46E4 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406EDA48 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406F06C0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408F15D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FE7F0 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1409FD1E4 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A3DB50 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObject((PVOID)a2);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObject((PVOID)a2);
  }
  return result;
}
