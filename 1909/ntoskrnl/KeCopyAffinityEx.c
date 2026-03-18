/*
 * XREFs of KeCopyAffinityEx @ 0x14009A190
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035C00 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140036140 (KiForwardTick.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     PpmParkSteerInterrupts @ 0x14009DA20 (PpmParkSteerInterrupts.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009E2A0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushSingleTb @ 0x1400C59E0 (KxFlushSingleTb.c)
 *     PpmParkReportMask @ 0x1401243A0 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x14012F6AC (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013A030 (KeSynchronizeSecurityDomain.c)
 *     KxFlushEntireTb @ 0x140188418 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x140194EC0 (KeQueryActiveProcessorAffinity.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402B170C (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B2500 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x1402EDDC0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1402EF970 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x14087DBE8 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x14087EFC4 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14087F04C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408A24A0 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408F7ED0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140917374 (ExpProfileCreate.c)
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
