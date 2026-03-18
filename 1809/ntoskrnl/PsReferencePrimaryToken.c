/*
 * XREFs of PsReferencePrimaryToken @ 0x1405DD640
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8DF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1400CCD10 (RtlpQueryLowBoxId.c)
 *     MiCreateSystemSection @ 0x1400F58FC (MiCreateSystemSection.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405827D4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140582834 (PspSetRedirectionTrustPolicy.c)
 *     EtwTraceAppStateChange @ 0x1405B2C80 (EtwTraceAppStateChange.c)
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     MiCreateSectionCommon @ 0x1405DD7A0 (MiCreateSectionCommon.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F7498 (PspDisablePrimaryTokenExchange.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspReferenceTokenForNewProcess @ 0x14060DA9C (PspReferenceTokenForNewProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406101D0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140613280 (AlpcpCheckConnectionSecurity.c)
 *     MmCreateSectionEx @ 0x14061B34C (MmCreateSectionEx.c)
 *     PsQueryProcessAttributes @ 0x1406258FC (PsQueryProcessAttributes.c)
 *     SepCreateClientSecurityEx @ 0x140631EC0 (SepCreateClientSecurityEx.c)
 *     NtOpenThreadTokenEx @ 0x1406488A0 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649050 (EtwpGetSidExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x14064E834 (PspInitializeProcessSecurity.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     PfSnCheckModernApp @ 0x140667720 (PfSnCheckModernApp.c)
 *     EtwpPsProvTraceProcess @ 0x14066C070 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066CA4C (EtwpBuildProcessEvent.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14068EBAC (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A2CC4 (ObSetCurrentProcessDeviceMap.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     PsIsProcessAppContainer @ 0x1406B8208 (PsIsProcessAppContainer.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B9118 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1406B92C8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406B9354 (SepIsSiblingTokenByPointer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CD2E8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406CFC80 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetQuotaLimits @ 0x1406D1118 (PspSetQuotaLimits.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x14075754C (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x140757934 (CmpCreateRegistryProcessToken.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140854E38 (MiFindProcessImageHotPatchRecord.c)
 *     NtLoadEnclaveData @ 0x14085AFD0 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x14089D4EC (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B4E30 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B501C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408BF8A0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CDC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
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
