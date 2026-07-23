/*
 * XREFs of KeEnumerateNextProcessor @ 0x140063BD0
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1400A5380 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfMinimumPerfReached @ 0x1400A544C (PpmPerfMinimumPerfReached.c)
 *     PopQueueTargetDpc @ 0x1400A5F00 (PopQueueTargetDpc.c)
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     PpmParkDistributeUtility @ 0x1401037A0 (PpmParkDistributeUtility.c)
 *     PpmPerfApplyLatencyHints @ 0x1401222E0 (PpmPerfApplyLatencyHints.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140122380 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x1401223D0 (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x140122420 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x140122470 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14012F790 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     PpmPerfApplyProcessorStates @ 0x140175290 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x1401805C0 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140189FB0 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x14018A354 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A3A4 (PpmHeteroUpdateHgsConfiguration.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1402962A0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140296510 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140297BA0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140297C64 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14029AB98 (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x1402D3A20 (PoExecuteIdleCheck.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D45B4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402D568C (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1402D6180 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1402E307C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1402E3EA0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1402E41A0 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x1402E7980 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1405734C0 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x140579704 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14057A088 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x14057B720 (PnprQuiesceProcessors.c)
 *     PopEtIsrDpcQuery @ 0x1406B477C (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14070E9B8 (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x140751334 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140844840 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086C34C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x14086C4DC (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x14086C540 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
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
