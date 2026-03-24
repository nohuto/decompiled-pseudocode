/*
 * XREFs of KeEnumerateNextProcessor @ 0x140063BE0
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1400A5440 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfMinimumPerfReached @ 0x1400A550C (PpmPerfMinimumPerfReached.c)
 *     PopQueueTargetDpc @ 0x1400A5FC0 (PopQueueTargetDpc.c)
 *     KeFlushQueuedDpcs @ 0x1400DBE50 (KeFlushQueuedDpcs.c)
 *     PpmParkDistributeUtility @ 0x140103720 (PpmParkDistributeUtility.c)
 *     PpmPerfApplyLatencyHints @ 0x140122210 (PpmPerfApplyLatencyHints.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1401222B0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140122300 (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x140122350 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x1401223A0 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14012F6C0 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x140132A00 (KeRemoveQueueDpcEx.c)
 *     PpmPerfApplyProcessorStates @ 0x140175190 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x140180480 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x1401896B0 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140189E70 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x14018A214 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A264 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279390 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1402960B0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140296320 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x140296FC8 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402979B0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140297A74 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14029A9A8 (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B300 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x1402D3830 (PoExecuteIdleCheck.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D43C4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402D549C (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1402D5F90 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E2E8C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1402E3CB0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1402E3FB0 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402E7790 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1405724C0 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140579088 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     PopEtIsrDpcQuery @ 0x1406B34DC (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14070D718 (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14074F434 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x140750144 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x140764270 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408435E0 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086B0EC (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x14086B27C (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x14086B2E0 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
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
