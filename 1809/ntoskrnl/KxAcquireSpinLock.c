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
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7CB0 (KiProcessPendingForegroundBoosts.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
 *     CcPerformReadAhead @ 0x1400DDFC4 (CcPerformReadAhead.c)
 *     KiTimer2Expiration @ 0x1400FB3F0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC43C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiInsertTimer2 @ 0x1400FC800 (KiInsertTimer2.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     PpmIdleSnapConcurrency @ 0x1401049E0 (PpmIdleSnapConcurrency.c)
 *     PsGetThreadProperty @ 0x14010F1A0 (PsGetThreadProperty.c)
 *     PspGetProperty @ 0x14010F41C (PspGetProperty.c)
 *     FsRtlUninitializeFileLock @ 0x1401111F0 (FsRtlUninitializeFileLock.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011499C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114AA4 (KeCpuSetReportParkedProcessors.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140121CF4 (IopCancelIrpsInCurrentThreadList.c)
 *     KiScheduleNextForegroundBoost @ 0x14012295C (KiScheduleNextForegroundBoost.c)
 *     PsRemoveVirtualizedTimer @ 0x1401279FC (PsRemoveVirtualizedTimer.c)
 *     PfSnTraceTimerRoutine @ 0x14012BD50 (PfSnTraceTimerRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x14012D09C (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x140131650 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x140131F70 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x14013207C (ExpTimerPause.c)
 *     KeRemoveQueueDpcEx @ 0x140132A00 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x1401351C0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140136130 (ExpTimerDpcRoutine.c)
 *     ExpTimerApcRoutine @ 0x140136BC0 (ExpTimerApcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013AAA0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x14013F0E0 (PoNotifyMediaBuffering.c)
 *     ExWakeTimersPause @ 0x1401427E0 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x140142A40 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x1401596C0 (PfpPowerActionDpcRoutine.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173260 (KeRegisterBugCheckReasonCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14017537C (PpmPerfApplyProcessorState.c)
 *     KeIpiGenericCall @ 0x140175930 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x140175EB0 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14017E24C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x140187AA8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1401894E8 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x14018B330 (PpmInstallNewIdleStates.c)
 *     KeRegisterBugCheckCallback @ 0x1401910A0 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1401936E4 (KdDisableDebuggerWithLock.c)
 *     sub_1401AD630 @ 0x1401AD630 (sub_1401AD630.c)
 *     KeSynchronizeExecution @ 0x1401BD180 (KeSynchronizeExecution.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14026F470 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x14027DED0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140288458 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1402884B0 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14028BBA0 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14028BCD0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14028BE00 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14028BE58 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14028C01C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14028C200 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140290C90 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140290DD0 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140291FF0 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029336C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402933FC (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x140293FDC (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x140296DE8 (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x140296FC8 (KeFreezeExecution.c)
 *     KiEpfComplete @ 0x14029BCFC (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14029BE54 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029BEF4 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402D5190 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x1402D53B8 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1402D5800 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402D7418 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x1402DB068 (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD3F0 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DE010 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402E3950 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x1402E4730 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1403159D4 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140315C14 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140317828 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x14031C990 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x140571D00 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x140577FC0 (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x14093E808 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14093E924 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14093EA60 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CFD0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140290E28 (KiAcquireSpinLockInstrumented.c)
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
