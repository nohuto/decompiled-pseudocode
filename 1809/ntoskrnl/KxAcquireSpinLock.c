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
 *     PspProcessUnbindVirtualizedTimers @ 0x1400902C0 (PspProcessUnbindVirtualizedTimers.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7C90 (KiProcessPendingForegroundBoosts.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     CcPerformReadAhead @ 0x1400DDFA4 (CcPerformReadAhead.c)
 *     KiTimer2Expiration @ 0x1400FB3D0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC41C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiInsertTimer2 @ 0x1400FC7E0 (KiInsertTimer2.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     PpmIdleSnapConcurrency @ 0x1401049C0 (PpmIdleSnapConcurrency.c)
 *     PsGetThreadProperty @ 0x14010F180 (PsGetThreadProperty.c)
 *     PspGetProperty @ 0x14010F3FC (PspGetProperty.c)
 *     FsRtlUninitializeFileLock @ 0x1401111D0 (FsRtlUninitializeFileLock.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011497C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114A84 (KeCpuSetReportParkedProcessors.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140121CD4 (IopCancelIrpsInCurrentThreadList.c)
 *     KiScheduleNextForegroundBoost @ 0x14012293C (KiScheduleNextForegroundBoost.c)
 *     PsRemoveVirtualizedTimer @ 0x1401279DC (PsRemoveVirtualizedTimer.c)
 *     PfSnTraceTimerRoutine @ 0x14012BD30 (PfSnTraceTimerRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x14012D07C (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x140131630 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x140131F50 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x14013205C (ExpTimerPause.c)
 *     KeRemoveQueueDpcEx @ 0x1401329E0 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x1401351A0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140136110 (ExpTimerDpcRoutine.c)
 *     ExpTimerApcRoutine @ 0x140136BA0 (ExpTimerApcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013AA80 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x14013F0C0 (PoNotifyMediaBuffering.c)
 *     ExWakeTimersPause @ 0x1401427C0 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x140142A20 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x1401596A0 (PfpPowerActionDpcRoutine.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173240 (KeRegisterBugCheckReasonCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14017535C (PpmPerfApplyProcessorState.c)
 *     KeIpiGenericCall @ 0x140175910 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x140175E90 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14017E22C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x140187A88 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1401894C8 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x14018B310 (PpmInstallNewIdleStates.c)
 *     KeRegisterBugCheckCallback @ 0x140191080 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1401936C4 (KdDisableDebuggerWithLock.c)
 *     sub_1401AD610 @ 0x1401AD610 (sub_1401AD610.c)
 *     KeSynchronizeExecution @ 0x1401BD160 (KeSynchronizeExecution.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14026F370 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x14027DDD0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140288358 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1402883B0 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14028BAA0 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14028BBD0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14028BD00 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14028BD58 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14028BF1C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14028C100 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140290B90 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140290CD0 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140291EF0 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029326C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402932FC (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x140293EDC (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x140296CE8 (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x140296EC8 (KeFreezeExecution.c)
 *     KiEpfComplete @ 0x14029BBFC (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14029BD54 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029BDF4 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402D5090 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x1402D52B8 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1402D5700 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402D7318 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x1402DAF68 (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD2F0 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DDF10 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402E3850 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x1402E4630 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1403158D4 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140315B14 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140317728 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x14031C890 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x140571D00 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x140577FC0 (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x14093E808 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14093E924 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14093EA60 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CFD0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140290D28 (KiAcquireSpinLockInstrumented.c)
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
