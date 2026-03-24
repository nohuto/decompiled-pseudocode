/*
 * XREFs of ObFastDereferenceObject @ 0x14004D9D0
 * Callers:
 *     PspGetRedirectionTrustPolicy @ 0x1405827D4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140582834 (PspSetRedirectionTrustPolicy.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405828D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwTraceAppStateChange @ 0x1405B2C80 (EtwTraceAppStateChange.c)
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406101D0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140613280 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x1406258FC (PsQueryProcessAttributes.c)
 *     PfQuerySuperfetchInformation @ 0x140629AD0 (PfQuerySuperfetchInformation.c)
 *     PsImpersonateClient @ 0x140637B70 (PsImpersonateClient.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtOpenThreadTokenEx @ 0x140648880 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649030 (EtwpGetSidExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x14064E814 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x14064EA4C (SeSubProcessToken.c)
 *     PfSnCheckModernApp @ 0x140667700 (PfSnCheckModernApp.c)
 *     EtwpPsProvTraceProcess @ 0x14066C050 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066CA2C (EtwpBuildProcessEvent.c)
 *     PspMapSystemDll @ 0x1406779AC (PspMapSystemDll.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EB8C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4CC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4C80 (EtwQueryProcessTelemetryInfo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB04 (PspAllocateAndQueryNotificationChannel.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B90F8 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1406B92A8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406B9334 (SepIsSiblingTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CD2C8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406CFC60 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetQuotaLimits @ 0x1406D10F8 (PspSetQuotaLimits.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B4E10 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408BF880 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CBC (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1409C4738 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x1409F8298 (PspGetSystemDllSecureHandle.c)
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
