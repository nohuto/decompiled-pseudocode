/*
 * XREFs of ObFastDereferenceObject @ 0x14004D9D0
 * Callers:
 *     PspGetRedirectionTrustPolicy @ 0x1405837D4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140583834 (PspSetRedirectionTrustPolicy.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406111D0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140614280 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14064A1F0 (EtwpGetSidExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x14064F9D4 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     PfSnCheckModernApp @ 0x1406688C0 (PfSnCheckModernApp.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 *     PspMapSystemDll @ 0x140678B6C (PspMapSystemDll.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068FD4C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406A078C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1406BA548 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406BA5D4 (SepIsSiblingTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CE568 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406D0F00 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B60D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408C0B40 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1409C5738 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x1409F9298 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
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
