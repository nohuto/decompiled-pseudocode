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
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtOpenThreadTokenEx @ 0x1406488A0 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649050 (EtwpGetSidExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x14064E834 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x14064EA6C (SeSubProcessToken.c)
 *     PfSnCheckModernApp @ 0x140667720 (PfSnCheckModernApp.c)
 *     EtwpPsProvTraceProcess @ 0x14066C070 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066CA4C (EtwpBuildProcessEvent.c)
 *     PspMapSystemDll @ 0x1406779CC (PspMapSystemDll.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EBAC (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B9118 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1406B92C8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406B9354 (SepIsSiblingTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CD2E8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406CFC80 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B4E30 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408BF8A0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CDC (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1409C4738 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x1409F8288 (PspGetSystemDllSecureHandle.c)
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
