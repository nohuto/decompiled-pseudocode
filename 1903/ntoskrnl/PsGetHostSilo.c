/*
 * XREFs of PsGetHostSilo @ 0x140015A00
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013C34C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1401A4100 (_call_matherr.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x140618978 (PspEstimateNewProcessServerSilo.c)
 *     ObpParseSymbolicLinkEx @ 0x14061AA90 (ObpParseSymbolicLinkEx.c)
 *     ExpWnfLookupPermanentName @ 0x14063C614 (ExpWnfLookupPermanentName.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140644900 (ExpWnfGenerateStateName.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E7818 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E842C (ExpCheckPortableOperatingSystem.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EBF60 (ExpWnfEnumerateScopeInstances.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x1406EFB10 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EFC5C (RtlGetHostNtSystemRoot.c)
 *     ObpSetSiloDeviceMap @ 0x14074F7F8 (ObpSetSiloDeviceMap.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14075F0A4 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x14077B960 (PsStartSiloMonitor.c)
 *     HvlPhase0Initialize @ 0x1407882AC (HvlPhase0Initialize.c)
 *     VRegEnabledInJob @ 0x140841BBC (VRegEnabledInJob.c)
 *     DbgkpRemoveErrorPort @ 0x14084A4C4 (DbgkpRemoveErrorPort.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9F50 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
