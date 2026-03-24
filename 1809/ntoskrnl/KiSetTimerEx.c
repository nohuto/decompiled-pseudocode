/*
 * XREFs of KiSetTimerEx @ 0x14001D380
 * Callers:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x14001CF20 (KeSetTimer.c)
 *     MiInsertUnusedSegment @ 0x14007B5A0 (MiInsertUnusedSegment.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEC8 (CcScheduleLazyWriteScan.c)
 *     PfSnStartTraceTimer @ 0x1400E2328 (PfSnStartTraceTimer.c)
 *     PfSnTraceTimerRoutine @ 0x14012BD50 (PfSnTraceTimerRoutine.c)
 *     PfpServiceMainThreadBoost @ 0x1401593D4 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140172C4C (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x140177B08 (PpmEndHighPerfRequest.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289B8C (PnpProcessWatchdogWorkItem.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299D04 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1402A2980 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x1402DB930 (PopCoalescingSetTimer.c)
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056690C (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x14056CD44 (PopBuildDeviceNotifyList.c)
 *     PfSnBeginBootPhase @ 0x14056F13C (PfSnBeginBootPhase.c)
 *     CmpDelayFreeCmRm @ 0x140693130 (CmpDelayFreeCmRm.c)
 *     PiDrvDbUnloadNode @ 0x1406A9C58 (PiDrvDbUnloadNode.c)
 *     PfSnPowerBoost @ 0x1406CDA3C (PfSnPowerBoost.c)
 *     PoUserShutdownInitiated @ 0x1406DE4E0 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x1406E0520 (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140719D80 (PopBatteryWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14071F02C (PopQueueBatteryStatusTimeout.c)
 *     PopUserPresentSetWorker @ 0x14071F100 (PopUserPresentSetWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140747E08 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x140757B80 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x140762C18 (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x140763654 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x1407F5824 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1407F6240 (CmpLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140812BF0 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x140826980 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x14086C0E0 (PopSetSystemAwayMode.c)
 *     PopDiagNextCsSleepStudySession @ 0x140870270 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x14087057C (PopDiagStopCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x14087F224 (TtmpResetEvaluationTimer.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1408DD4A0 (WheapSqmWaitWorkerRoutine.c)
 *     KdpTimeSlipWork @ 0x140917C10 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140933C68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140939224 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x14093E5FC (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14093EA60 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x1409D48C4 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400C7B70 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x14029B968 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v9; // rsi
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  volatile signed __int32 v17; // [rsp+30h] [rbp-48h]

  v9 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(a1, 0LL);
  *(_QWORD *)(a1 + 48) = v9;
  v13 = v12;
  *(_DWORD *)(a1 + 60) = a3;
  v17 = *(_DWORD *)a1;
  BYTE1(v17) = a4;
  if ( a2 >= 0 )
  {
    a4 |= 1u;
    BYTE1(v17) = a4;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v17;
      *(_QWORD *)(a1 + 24) = 0LL;
LABEL_9:
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
      goto LABEL_8;
    }
  }
  v14 = 0LL;
  if ( a4 >= 4u )
    v14 = (unsigned __int64)(a4 & 0xFC) << 16;
  HIBYTE(v17) |= 0x40u;
  v15 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v17) = (v14 + v15) >> 18;
  *(_DWORD *)a1 = v17;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, a5, BYTE2(v17), 0LL) )
    goto LABEL_9;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_8:
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v13;
}
