/*
 * XREFs of KeCopyAffinityEx @ 0x1400BA320
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035810 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140035D50 (KiForwardTick.c)
 *     KxFlushSingleTb @ 0x14009F8A0 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400B8DE8 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400B9C50 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1400BE420 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkReportMask @ 0x1401239B0 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x14012ED98 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140139958 (KeSynchronizeSecurityDomain.c)
 *     KxFlushEntireTb @ 0x140187E68 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401946E0 (KeQueryActiveProcessorAffinity.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402ADE20 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B19AC (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B27A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x1402EE060 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1402EFC10 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x14087E4E8 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x14087F8C4 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14087F94C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408A2C60 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408F84EC (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140917914 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 result; // ax
  __int64 v4; // rcx

  *(_WORD *)a1 = *a2;
  *(_WORD *)(a1 + 2) = a2[1];
  result = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; result < *a2; *(_QWORD *)(8 * v4 + a1 + 8) = *(_QWORD *)&a2[4 * v4 + 4] )
    v4 = result++;
  return result;
}
