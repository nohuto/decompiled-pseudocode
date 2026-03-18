/*
 * XREFs of PsGetHostSilo @ 0x140091C70
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013A76C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1401998AC (_call_matherr.c)
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140585820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpWnfLookupPermanentName @ 0x1405AA92C (ExpWnfLookupPermanentName.c)
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BBEB0 (ObpParseSymbolicLinkEx.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060DB18 (PspEstimateNewProcessServerSilo.c)
 *     ExpWnfGenerateStateName @ 0x14060E3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     PspInitializeThunkContext @ 0x1406207DC (PspInitializeThunkContext.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ABAB8 (ExpWnfEnumerateScopeInstances.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75CC (ExpCheckPortableOperatingSystem.c)
 *     DbgkpRemoveErrorPort @ 0x140706C80 (DbgkpRemoveErrorPort.c)
 *     HvlPhase0Initialize @ 0x1407259E8 (HvlPhase0Initialize.c)
 *     ObpSetSiloDeviceMap @ 0x14072C2D8 (ObpSetSiloDeviceMap.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x140733A4C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x140755710 (PsStartSiloMonitor.c)
 *     RtlGetHostNtSystemRoot @ 0x1407641F8 (RtlGetHostNtSystemRoot.c)
 *     VRegEnabledInJob @ 0x14080831C (VRegEnabledInJob.c)
 *     NtMapUserPhysicalPages @ 0x1408513E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516D0 (NtMapUserPhysicalPagesScatter.c)
 *     PsUnregisterSiloMonitor @ 0x14088BAA0 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x140905F10 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
