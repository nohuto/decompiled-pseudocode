/*
 * XREFs of KeCopyAffinityEx @ 0x1400EDA90
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140061720 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     KxFlushSingleTb @ 0x1400ECEA0 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ECFD8 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400ED200 (KxFlushNonGlobalTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140119968 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkReportMask @ 0x1401223B0 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DC28 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013841C (KeSynchronizeSecurityDomain.c)
 *     KxFlushEntireTb @ 0x140187838 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x14018A370 (KeQueryActiveProcessorAffinity.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140296EC8 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14029A5AC (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B200 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x1402D38A0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1402D5460 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x140842AC8 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408444C4 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14084454C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140866770 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BB920 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1408D9BEC (ExpProfileCreate.c)
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
