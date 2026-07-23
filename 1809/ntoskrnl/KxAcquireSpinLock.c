/*
 * XREFs of KxAcquireSpinLock @ 0x140062A90
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140014AC8 (EtwpLockUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     ExpCancelTimer @ 0x14001D270 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x140090200 (PspProcessUnbindVirtualizedTimers.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7D30 (KiProcessPendingForegroundBoosts.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC4BC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiInsertTimer2 @ 0x1400FC880 (KiInsertTimer2.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     PpmIdleSnapConcurrency @ 0x140104A60 (PpmIdleSnapConcurrency.c)
 *     PsGetThreadProperty @ 0x14010F220 (PsGetThreadProperty.c)
 *     PspGetProperty @ 0x14010F49C (PspGetProperty.c)
 *     FsRtlUninitializeFileLock @ 0x140111260 (FsRtlUninitializeFileLock.c)
 *     KeSetSystemAllowedCpuSets @ 0x140114A0C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140121DC4 (IopCancelIrpsInCurrentThreadList.c)
 *     KiScheduleNextForegroundBoost @ 0x140122A2C (KiScheduleNextForegroundBoost.c)
 *     PsRemoveVirtualizedTimer @ 0x140127ACC (PsRemoveVirtualizedTimer.c)
 *     PfSnTraceTimerRoutine @ 0x14012BE20 (PfSnTraceTimerRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x14012D16C (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x140131720 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x140132040 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x14013214C (ExpTimerPause.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x140135290 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140136230 (ExpTimerDpcRoutine.c)
 *     ExpTimerApcRoutine @ 0x140136CC0 (ExpTimerApcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013ABA0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x14013F1E0 (PoNotifyMediaBuffering.c)
 *     ExWakeTimersPause @ 0x1401428E0 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x140142B40 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x1401597C0 (PfpPowerActionDpcRoutine.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173360 (KeRegisterBugCheckReasonCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14017547C (PpmPerfApplyProcessorState.c)
 *     KeIpiGenericCall @ 0x140175A30 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x140175FB0 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14017E38C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x140187BE8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x140189628 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x14018B470 (PpmInstallNewIdleStates.c)
 *     KeRegisterBugCheckCallback @ 0x1401911E0 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x140193824 (KdDisableDebuggerWithLock.c)
 *     sub_1401AD770 @ 0x1401AD770 (sub_1401AD770.c)
 *     KeSynchronizeExecution @ 0x1401BD2E0 (KeSynchronizeExecution.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14026F660 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x14027E0C0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140288648 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1402886A0 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14028BD90 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14028BEC0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14028BFF0 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14028C048 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14028C20C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14028C3F0 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140290E80 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140290FC0 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x1402921E0 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029355C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402935EC (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x1402941CC (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x140296FD8 (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     KiEpfComplete @ 0x14029BEEC (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14029C044 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029C0E4 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402D5380 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x1402D55A8 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1402D59F0 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402D7608 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x1402DB258 (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD5E0 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DE200 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402E3B40 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x1402E4920 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x140315BC4 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140315E04 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140317A18 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x14031CB80 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x140572D00 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x140578FC0 (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x14093F808 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14093F924 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14093FA60 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 */

void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v4; // rcx
  int v5; // eax
  int v6; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v5 = SchedulerAssist[5];
        SchedulerAssist[5] = v5 + 1;
        if ( v5 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      v4 = CurrentPrcb->SchedulerAssist;
      if ( v4 && CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = v4[5] - 1;
        v4[5] = v6;
        if ( !v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      KxWaitForSpinLockAndAcquire(SpinLock);
    }
  }
}
