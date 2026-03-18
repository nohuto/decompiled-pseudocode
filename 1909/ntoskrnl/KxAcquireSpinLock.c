/*
 * XREFs of KxAcquireSpinLock @ 0x140091710
 * Callers:
 *     ExpTimerApcRoutine @ 0x140001790 (ExpTimerApcRoutine.c)
 *     EtwpLockBufferList @ 0x140003A94 (EtwpLockBufferList.c)
 *     ExpCancelTimer @ 0x140008730 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     PsRemoveVirtualizedTimer @ 0x140090268 (PsRemoveVirtualizedTimer.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     PspGetProperty @ 0x14009CFB0 (PspGetProperty.c)
 *     IopAllocateFileObjectExtension @ 0x14009D080 (IopAllocateFileObjectExtension.c)
 *     PpmIdleSnapConcurrency @ 0x14009D570 (PpmIdleSnapConcurrency.c)
 *     PpmParkSteerInterrupts @ 0x14009DA20 (PpmParkSteerInterrupts.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14009F118 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTimer2Expiration @ 0x14009FD10 (KiTimer2Expiration.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1400C8558 (PspProcessUnbindVirtualizedTimers.c)
 *     PfSnTraceTimerRoutine @ 0x1400D44B0 (PfSnTraceTimerRoutine.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E97B0 (KiProcessPendingForegroundBoosts.c)
 *     PspSetProcessFreezeStateCallback @ 0x1400EB030 (PspSetProcessFreezeStateCallback.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x1401014E0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1401015F0 (ExpTimerDpcRoutine.c)
 *     EtwpLockUnlockBufferList @ 0x140108C3C (EtwpLockUnlockBufferList.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011EDC8 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KiInsertTimer2 @ 0x140122C34 (KiInsertTimer2.c)
 *     KiScheduleNextForegroundBoost @ 0x140123C88 (KiScheduleNextForegroundBoost.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1401282C8 (IopCancelIrpsInCurrentThreadList.c)
 *     PsInsertVirtualizedTimer @ 0x14012F984 (PsInsertVirtualizedTimer.c)
 *     KeAcquireInterruptSpinLock @ 0x140133BC0 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x140135948 (ExpTimerPause.c)
 *     FsRtlUninitializeFileLock @ 0x14013C1D0 (FsRtlUninitializeFileLock.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013CDA0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x140143860 (PoNotifyMediaBuffering.c)
 *     ExWakeTimersPause @ 0x14015E2BC (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14015E454 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x1401696E0 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x1401762A0 (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017AAF0 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x14017F990 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x14017FC60 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140185AA4 (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x140192BE0 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x140193F88 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1401952E0 (PpmInstallNewIdleStates.c)
 *     KeRegisterBugCheckCallback @ 0x14019B790 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x14019E3D4 (KdDisableDebuggerWithLock.c)
 *     sub_1401B8BD0 @ 0x1401B8BD0 (sub_1401B8BD0.c)
 *     KeSynchronizeExecution @ 0x1401C58A0 (KeSynchronizeExecution.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140282BB0 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1402926C0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14029E2A4 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14029E2FC (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x1402A1990 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x1402A1AC0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x1402A1BF0 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x1402A1C48 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x1402A1E0C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x1402A1FF0 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x1402A7440 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x1402A7580 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x1402A86A0 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1402A9AAC (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402A9B3C (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x1402AA71C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x1402AD370 (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     KiEpfComplete @ 0x1402B2F90 (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x1402B30E4 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1402B3184 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402EF590 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x1402EF7B8 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1402EFC10 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402F1D08 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x1402F66A8 (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9654 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FA948 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403001C0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x140301010 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x140333E28 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140334068 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140335CB4 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x14033B664 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x1405A1C4C (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1405A7E10 (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x14097E09C (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14097E1B8 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14097E2F0 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 */

void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // eax

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
        v6 = SchedulerAssist[5];
        SchedulerAssist[5] = v6 + 1;
        if ( v6 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      v5 = CurrentPrcb->SchedulerAssist;
      if ( v5 && CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = v5[5] - 1;
        v5[5] = v7;
        if ( !v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)SpinLock, v1);
    }
  }
}
