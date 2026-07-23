/*
 * XREFs of PsGetHostSilo @ 0x140091BB0
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013A88C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x140199A0C (_call_matherr.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140586820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     PopInvokeWin32Callout @ 0x1405B1C84 (PopInvokeWin32Callout.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BCEB0 (ObpParseSymbolicLinkEx.c)
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     MiDeleteVadBitmap @ 0x140609CFC (MiDeleteVadBitmap.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060EB18 (PspEstimateNewProcessServerSilo.c)
 *     ExpWnfGenerateStateName @ 0x14060F3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     PspInitializeThunkContext @ 0x1406217DC (PspInitializeThunkContext.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ACD38 (ExpWnfEnumerateScopeInstances.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C884C (ExpCheckPortableOperatingSystem.c)
 *     DbgkpRemoveErrorPort @ 0x140707F00 (DbgkpRemoveErrorPort.c)
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 *     ObpSetSiloDeviceMap @ 0x14072D4A8 (ObpSetSiloDeviceMap.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x140734C1C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x1407568E0 (PsStartSiloMonitor.c)
 *     RtlGetHostNtSystemRoot @ 0x1407653C8 (RtlGetHostNtSystemRoot.c)
 *     VRegEnabledInJob @ 0x1408094FC (VRegEnabledInJob.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 *     PsUnregisterSiloMonitor @ 0x14088CCE0 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
