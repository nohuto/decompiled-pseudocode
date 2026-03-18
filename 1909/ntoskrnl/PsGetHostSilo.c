/*
 * XREFs of PsGetHostSilo @ 0x140015DF0
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013C96C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1401A4820 (_call_matherr.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14061A488 (PspEstimateNewProcessServerSilo.c)
 *     ObpParseSymbolicLinkEx @ 0x14061C5A0 (ObpParseSymbolicLinkEx.c)
 *     RtlGetHostNtSystemRoot @ 0x140623C90 (RtlGetHostNtSystemRoot.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140623CC0 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpWnfLookupPermanentName @ 0x14063F6C4 (ExpWnfLookupPermanentName.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140658450 (ExpWnfGenerateStateName.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E8918 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E94CC (ExpCheckPortableOperatingSystem.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ED220 (ExpWnfEnumerateScopeInstances.c)
 *     ObpSetSiloDeviceMap @ 0x140750288 (ObpSetSiloDeviceMap.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1407639C8 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     HvlPhase0Initialize @ 0x14078A70C (HvlPhase0Initialize.c)
 *     VRegEnabledInJob @ 0x14084121C (VRegEnabledInJob.c)
 *     DbgkpRemoveErrorPort @ 0x140849BC4 (DbgkpRemoveErrorPort.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
