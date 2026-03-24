/*
 * XREFs of KeCopyAffinityEx @ 0x1400EDAB0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140061720 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     KxFlushSingleTb @ 0x1400ECEC0 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ECFF8 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400ED220 (KxFlushNonGlobalTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140119988 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkReportMask @ 0x1401223D0 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DC48 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013843C (KeSynchronizeSecurityDomain.c)
 *     KxFlushEntireTb @ 0x140187858 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x14018A390 (KeQueryActiveProcessorAffinity.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140296FC8 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A6AC (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B300 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x1402D39A0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1402D5560 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x140842AA8 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408444A4 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14084452C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140866750 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BB900 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1408D9BCC (ExpProfileCreate.c)
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
