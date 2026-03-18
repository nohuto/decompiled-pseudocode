/*
 * XREFs of KeEnumerateNextProcessor @ 0x14009E0E0
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140004210 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfMinimumPerfReached @ 0x1400042E8 (PpmPerfMinimumPerfReached.c)
 *     PpmIdlePrepare @ 0x1400330E0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     PopQueueTargetDpc @ 0x14009A8B8 (PopQueueTargetDpc.c)
 *     PpmParkDistributeUtility @ 0x14009D6B0 (PpmParkDistributeUtility.c)
 *     PpmParkSteerInterrupts @ 0x14009DA20 (PpmParkSteerInterrupts.c)
 *     KiIntSteerLogProc @ 0x14009E818 (KiIntSteerLogProc.c)
 *     PopCheckForIdleness @ 0x1400D5820 (PopCheckForIdleness.c)
 *     KeFlushQueuedDpcs @ 0x1400FB5E0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     PpmParkReportParkedCores @ 0x14011EAE0 (PpmParkReportParkedCores.c)
 *     PpmPerfApplyLatencyHints @ 0x1401202A0 (PpmPerfApplyLatencyHints.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140120310 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140120E80 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140120ED0 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1401319D4 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     PpmPerfApplyProcessorStates @ 0x1401760B0 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x14018A9BC (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x14019415C (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140194948 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x140194D0C (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194D64 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14028D430 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14029C94C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x1402AC5E0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402AC860 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402AE5A8 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1402AE674 (KiSendThawExecution.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B2500 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x1402EDC2C (PoExecuteIdleCheck.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402EE808 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402EF89C (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1402F03C4 (PpmUnlockProcessors.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402F7D28 (PpmParkChooseCoresToUnpark.c)
 *     PpmCapturePerformanceDistribution @ 0x1402FF644 (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140300560 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140300880 (PpmHeteroDistributeUtility.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14059F060 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8570 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405A8F04 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1405AA548 (PnprQuiesceProcessors.c)
 *     PopEtIsrDpcQuery @ 0x1406D3F34 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14073C078 (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmHvEnableQosEnlightenment @ 0x140776C7C (PpmHvEnableQosEnlightenment.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 *     PopConfigureHeteroPolicies @ 0x1407774E8 (PopConfigureHeteroPolicies.c)
 *     PpmPerfResetHistoryAll @ 0x140777F08 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x14078CE60 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14087E770 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A6C10 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408A6DA8 (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x1408A6E10 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x140A12074 (VslConnectSwInterrupt.c)
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
