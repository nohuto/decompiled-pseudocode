/*
 * XREFs of KeCopyAffinityEx @ 0x1400EDB30
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140061720 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 *     KxFlushSingleTb @ 0x1400ECF40 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ED078 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1401199F8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkReportMask @ 0x1401224A0 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DD18 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013853C (KeSynchronizeSecurityDomain.c)
 *     KxFlushEntireTb @ 0x140187998 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x14018A4D0 (KeQueryActiveProcessorAffinity.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A89C (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x1402D3B90 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1402D5750 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x140843D08 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x140845704 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14084578C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408679B0 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BCBC0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1408DAE8C (ExpProfileCreate.c)
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
