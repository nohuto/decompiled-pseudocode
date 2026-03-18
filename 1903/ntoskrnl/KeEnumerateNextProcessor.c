/*
 * XREFs of KeEnumerateNextProcessor @ 0x1400BE260
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140004180 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfMinimumPerfReached @ 0x140004258 (PpmPerfMinimumPerfReached.c)
 *     PpmIdlePrepare @ 0x140032CF0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     PopQueueTargetDpc @ 0x1400BAA48 (PopQueueTargetDpc.c)
 *     PpmParkDistributeUtility @ 0x1400BD830 (PpmParkDistributeUtility.c)
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     KiIntSteerLogProc @ 0x1400BE998 (KiIntSteerLogProc.c)
 *     PopCheckForIdleness @ 0x1400EE110 (PopCheckForIdleness.c)
 *     KeFlushQueuedDpcs @ 0x1400F7B40 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 *     PpmParkReportParkedCores @ 0x14011E5D0 (PpmParkReportParkedCores.c)
 *     PpmPerfApplyLatencyHints @ 0x14011F550 (PpmPerfApplyLatencyHints.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14011F5C0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140120130 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140120180 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x140130E44 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     PpmPerfApplyProcessorStates @ 0x140175980 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x14018A02C (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x14019397C (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140194168 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x14019452C (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194584 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14028D6D0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14029CBEC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x1402AC880 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402ACB00 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x1402ADE20 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402AE848 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1402AE914 (KiSendThawExecution.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B27A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x1402EDECC (PoExecuteIdleCheck.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402EEAA8 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402EFB3C (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1402F0664 (PpmUnlockProcessors.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402F8278 (PpmParkChooseCoresToUnpark.c)
 *     PpmCapturePerformanceDistribution @ 0x1402FFB94 (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140300AB0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140300DD0 (PpmHeteroDistributeUtility.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14059F080 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8590 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405A8F24 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1405AA568 (PnprQuiesceProcessors.c)
 *     PopEtIsrDpcQuery @ 0x1406D4854 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x140739DE8 (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmHvEnableQosEnlightenment @ 0x14077369C (PpmHvEnableQosEnlightenment.c)
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 *     PopConfigureHeteroPolicies @ 0x140773F08 (PopConfigureHeteroPolicies.c)
 *     PpmPerfResetHistoryAll @ 0x140774928 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x14078A980 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14087F070 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A73B0 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408A7548 (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x1408A75B0 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x140A118DC (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_6:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_6;
    }
    return 3221226021LL;
  }
}
