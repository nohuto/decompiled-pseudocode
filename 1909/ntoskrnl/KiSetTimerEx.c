/*
 * XREFs of KiSetTimerEx @ 0x1400E2AF0
 * Callers:
 *     MiInsertUnusedSegment @ 0x140070468 (MiInsertUnusedSegment.c)
 *     PfSnTraceTimerRoutine @ 0x1400D44B0 (PfSnTraceTimerRoutine.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x1400E2AD0 (KeSetTimer.c)
 *     PnpInitWatchdog @ 0x1400EEFF0 (PnpInitWatchdog.c)
 *     PopSetWatchdog @ 0x1400EFD4C (PopSetWatchdog.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     PfSnStartTraceTimer @ 0x1401342F4 (PfSnStartTraceTimer.c)
 *     PfpServiceMainThreadBoost @ 0x140169398 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140173D74 (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x140181C5C (PpmEndHighPerfRequest.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FA78 (PnpProcessWatchdogWorkItem.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0D30 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x1402F6EA8 (PopCoalescingSetTimer.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140596628 (PfpStartLoggingHardFaultEvents.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     PfSnBeginBootPhase @ 0x14059EB50 (PfSnBeginBootPhase.c)
 *     PiDrvDbUnloadNode @ 0x140677938 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x1406BA994 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406ED3D0 (PfSnPowerBoost.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x14072BD9C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x140749D88 (PopQueueBatteryStatusTimeout.c)
 *     PopUserPresentSetWorker @ 0x140749E10 (PopUserPresentSetWorker.c)
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x140780040 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x14078BC28 (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14078C474 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x14082E494 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14082F044 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14084BD40 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408604E0 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408AC770 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408ACAB4 (PopDiagStopCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x1408BC664 (TtmpResetEvaluationTimer.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x14097DE90 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14097E2F0 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A19504 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiInsertTimerTable @ 0x140042A10 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140042CD0 (KiCancelTimer.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x1402B2BA0 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  volatile signed __int32 v17; // [rsp+30h] [rbp-48h]
  unsigned __int8 v18; // [rsp+A0h] [rbp+28h]

  v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  v18 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer(a1, 0);
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 60) = a3;
  v17 = *(_DWORD *)a1;
  BYTE1(v17) = a4;
  if ( a2 >= 0 )
  {
    BYTE1(v17) = a4 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v17;
      *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
      KiTimerWaitTest((__int64)CurrentPrcb, a1, 0LL);
      goto LABEL_8;
    }
    a4 |= 1u;
  }
  v14 = 0LL;
  if ( (a4 & 0xFC) != 0 )
    v14 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v17) |= 0x40u;
  v15 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v17) = (unsigned __int64)(v14 + v15) >> 18;
  *(_DWORD *)a1 = v17;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, a1, a5, BYTE2(v17), 0LL) )
    goto LABEL_11;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_8:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v18);
  return v13;
}
