/*
 * XREFs of PsReferencePrimaryToken @ 0x1405D59B0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14000C8F0 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x14001D0E8 (RtlpQueryLowBoxId.c)
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     NtOpenThreadTokenEx @ 0x1405D5B10 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E732C (PspDisablePrimaryTokenExchange.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspReferenceTokenForNewProcess @ 0x1406188FC (PspReferenceTokenForNewProcess.c)
 *     PfSnCheckModernApp @ 0x1406198E8 (PfSnCheckModernApp.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061CA40 (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x14061CBB8 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x14061CCAC (SepIsChildTokenByPointer.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     EtwTraceAppStateChange @ 0x140634190 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406430F0 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406446E0 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MmCreateSectionEx @ 0x14068AD18 (MmCreateSectionEx.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x140691084 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x140691E30 (PspInitializeProcessSecurity.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069331C (PopEtGetProcessSidAndPackageIdentity.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B1744 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C42EC (ObSetCurrentProcessDeviceMap.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x1406DA6CC (PsIsProcessAppContainer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406EC7DC (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406EEBD8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 *     CmpCreateRegistryProcessToken @ 0x1407691C4 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14088E284 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x140894294 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x1408DBF04 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408F1CC0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408F1EAC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC660 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FEE9C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
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
