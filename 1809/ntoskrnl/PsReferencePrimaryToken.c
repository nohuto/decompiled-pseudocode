/*
 * XREFs of PsReferencePrimaryToken @ 0x1405DE640
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8D50 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1400CCDB0 (RtlpQueryLowBoxId.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405837D4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140583834 (PspSetRedirectionTrustPolicy.c)
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspReferenceTokenForNewProcess @ 0x14060EA9C (PspReferenceTokenForNewProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406111D0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140614280 (AlpcpCheckConnectionSecurity.c)
 *     MmCreateSectionEx @ 0x14061C34C (MmCreateSectionEx.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14064A1F0 (EtwpGetSidExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x14064F9D4 (PspInitializeProcessSecurity.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     PfSnCheckModernApp @ 0x1406688C0 (PfSnCheckModernApp.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068FD4C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406A078C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A3F44 (ObSetCurrentProcessDeviceMap.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1406BA548 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406BA5D4 (SepIsSiblingTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CE568 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406D0F00 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     SeAuditProcessCreation @ 0x14074A7A0 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x140758B04 (CmpCreateRegistryProcessToken.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140856078 (MiFindProcessImageHotPatchRecord.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x14089E72C (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B60D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B62BC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408C0B40 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rsi
  void *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *p_Lock; // rdi

  v1 = &Process[1].Affinity.Bitmap[5];
  v3 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v3 = (void *)ObFastReferenceObjectLocked(v1);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v3;
}
