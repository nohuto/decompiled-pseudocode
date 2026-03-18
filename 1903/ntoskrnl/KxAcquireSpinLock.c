/*
 * XREFs of KxAcquireSpinLock @ 0x1400A20E0
 * Callers:
 *     ExpTimerApcRoutine @ 0x140001790 (ExpTimerApcRoutine.c)
 *     EtwpLockBufferList @ 0x140003A10 (EtwpLockBufferList.c)
 *     ExpCancelTimer @ 0x1400086A0 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     PfSnTraceTimerRoutine @ 0x140097190 (PfSnTraceTimerRoutine.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     PsInsertVirtualizedTimer @ 0x1400B811C (PsInsertVirtualizedTimer.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     PspGetProperty @ 0x1400BD130 (PspGetProperty.c)
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 *     PpmIdleSnapConcurrency @ 0x1400BD6F0 (PpmIdleSnapConcurrency.c)
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400BF298 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E4810 (KiProcessPendingForegroundBoosts.c)
 *     PspSetProcessFreezeStateCallback @ 0x1400E6090 (PspSetProcessFreezeStateCallback.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1400E77FC (PspProcessUnbindVirtualizedTimers.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSystemAllowedCpuSets @ 0x1400F9E04 (KeSetSystemAllowedCpuSets.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400FEAE0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1400FEBF0 (ExpTimerDpcRoutine.c)
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 *     EtwpLockUnlockBufferList @ 0x140109AB0 (EtwpLockUnlockBufferList.c)
 *     KiInsertTimer2 @ 0x140121DE4 (KiInsertTimer2.c)
 *     KiScheduleNextForegroundBoost @ 0x140122B78 (KiScheduleNextForegroundBoost.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1401278A8 (IopCancelIrpsInCurrentThreadList.c)
 *     KeAcquireInterruptSpinLock @ 0x1401330D0 (KeAcquireInterruptSpinLock.c)
 *     PsRemoveVirtualizedTimer @ 0x14013377C (PsRemoveVirtualizedTimer.c)
 *     ExpTimerPause @ 0x140135048 (ExpTimerPause.c)
 *     FsRtlUninitializeFileLock @ 0x14013BBB0 (FsRtlUninitializeFileLock.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013C7C0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x140143320 (PoNotifyMediaBuffering.c)
 *     ExWakeTimersPause @ 0x14015DC1C (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14015DDB4 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x140169C40 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x140175B70 (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017A400 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x14017F2A0 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x14017F570 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1401854F4 (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1401923F8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1401937A8 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x140194B00 (PpmInstallNewIdleStates.c)
 *     KeRegisterBugCheckCallback @ 0x14019B130 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x14019DCB4 (KdDisableDebuggerWithLock.c)
 *     sub_1401B84B0 @ 0x1401B84B0 (sub_1401B84B0.c)
 *     KeSynchronizeExecution @ 0x1401C4D20 (KeSynchronizeExecution.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140282E50 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x140292960 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14029E544 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14029E59C (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x1402A1C30 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x1402A1D60 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x1402A1E90 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x1402A1EE8 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x1402A20AC (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x1402A2290 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x1402A76E0 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x1402A7820 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x1402A8940 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1402A9D4C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402A9DDC (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x1402AA9BC (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x1402AD610 (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x1402ADE20 (KeFreezeExecution.c)
 *     KiEpfComplete @ 0x1402B3230 (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x1402B3384 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1402B3424 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402EF830 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x1402EFA58 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1402EFEB0 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402F1FA8 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x1402F6BF8 (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9BA4 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FAE98 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140300710 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x140301560 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1403343C8 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140334608 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140336254 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x14033BC04 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x1405A1C6C (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1405A7E30 (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x14097E09C (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14097E1B8 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14097E2F0 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
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
