/*
 * XREFs of KeEnumerateNextProcessor @ 0x140063BE0
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1400A5420 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfMinimumPerfReached @ 0x1400A54EC (PpmPerfMinimumPerfReached.c)
 *     PopQueueTargetDpc @ 0x1400A5FA0 (PopQueueTargetDpc.c)
 *     KeFlushQueuedDpcs @ 0x1400DBE30 (KeFlushQueuedDpcs.c)
 *     PpmParkDistributeUtility @ 0x140103700 (PpmParkDistributeUtility.c)
 *     PpmPerfApplyLatencyHints @ 0x1401221F0 (PpmPerfApplyLatencyHints.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140122290 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x1401222E0 (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x140122330 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x140122380 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14012F6A0 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x1401329E0 (KeRemoveQueueDpcEx.c)
 *     PpmPerfApplyProcessorStates @ 0x140175170 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x140180460 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x140189690 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140189E50 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x14018A1F4 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A244 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279290 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x140295FB0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140296220 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x140296EC8 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402978B0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140297974 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14029A8A8 (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B200 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x1402D3730 (PoExecuteIdleCheck.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D42C4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402D539C (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1402D5E90 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E2D8C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1402E3BB0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1402E3EB0 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402E7690 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1405724C0 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140579088 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     PopEtIsrDpcQuery @ 0x1406B34FC (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14070D738 (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14074F454 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x140750164 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x140764290 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140843600 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086B10C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x14086B29C (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x14086B300 (PpmUpdatePerfStates.c)
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
