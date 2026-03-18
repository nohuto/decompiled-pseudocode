/*
 * XREFs of PsReferencePrimaryToken @ 0x1405D6170
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14000C980 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x14001D4D8 (RtlpQueryLowBoxId.c)
 *     MiCreateSystemSection @ 0x1401552D4 (MiCreateSystemSection.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E7AFC (PspDisablePrimaryTokenExchange.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspReferenceTokenForNewProcess @ 0x14061A40C (PspReferenceTokenForNewProcess.c)
 *     PfSnCheckModernApp @ 0x14061B3F8 (PfSnCheckModernApp.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061E550 (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x14061E6C8 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x14061E7BC (SepIsChildTokenByPointer.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     MmCreateSectionEx @ 0x140650E38 (MmCreateSectionEx.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140656C40 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140658230 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140684214 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x1406845F4 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14068688C (PopEtGetProcessSidAndPackageIdentity.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B46E4 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C344C (ObSetCurrentProcessDeviceMap.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x1406DAFCC (PsIsProcessAppContainer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406EDA48 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406F06C0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 *     CmpCreateRegistryProcessToken @ 0x140757E54 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14088DAA4 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x140893AB4 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x1408DB804 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408F15D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408F17BC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FE7F0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
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
