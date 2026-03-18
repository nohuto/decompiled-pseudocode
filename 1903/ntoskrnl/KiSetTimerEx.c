/*
 * XREFs of KiSetTimerEx @ 0x1400B2A00
 * Callers:
 *     MiInsertUnusedSegment @ 0x1400701F8 (MiInsertUnusedSegment.c)
 *     PfSnTraceTimerRoutine @ 0x140097190 (PfSnTraceTimerRoutine.c)
 *     PnpInitWatchdog @ 0x14009AFE0 (PnpInitWatchdog.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x1400B29E0 (KeSetTimer.c)
 *     PopSetWatchdog @ 0x1400B35A0 (PopSetWatchdog.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
 *     PfSnStartTraceTimer @ 0x1401338DC (PfSnStartTraceTimer.c)
 *     PfpServiceMainThreadBoost @ 0x140169948 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140173644 (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x14018156C (PpmEndHighPerfRequest.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FD18 (PnpProcessWatchdogWorkItem.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0FD0 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x1402F73F8 (PopCoalescingSetTimer.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1405966DC (PfpStartLoggingHardFaultEvents.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PopBuildDeviceNotifyList @ 0x14059C574 (PopBuildDeviceNotifyList.c)
 *     PfSnBeginBootPhase @ 0x14059EB70 (PfSnBeginBootPhase.c)
 *     PiDrvDbUnloadNode @ 0x14067C5C0 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x14069BA64 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406EC110 (PfSnPowerBoost.c)
 *     PoUserShutdownInitiated @ 0x140725AC0 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x14072783C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x140747E88 (PopQueueBatteryStatusTimeout.c)
 *     PopUserPresentSetWorker @ 0x140747F10 (PopUserPresentSetWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x14076A1F8 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x14077D620 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407897C8 (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14078A014 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x14082F030 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14082F1D4 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14084C640 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x140860DE0 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408A89F0 (PopSetSystemAwayMode.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408ACF10 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408AD254 (PopDiagStopCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x1408BCD94 (TtmpResetEvaluationTimer.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x14097DE90 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14097E2F0 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A19044 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiInsertTimerTable @ 0x140042CD0 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140042F90 (KiCancelTimer.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x1402B2E40 (KiTraceSetTimer.c)
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
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
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
