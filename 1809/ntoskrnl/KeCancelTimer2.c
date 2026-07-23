/*
 * XREFs of KeCancelTimer2 @ 0x1400FAFF0
 * Callers:
 *     ExCancelTimer @ 0x1400FA350 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x1400FAE60 (ExpShutdownWorkerFactory.c)
 *     ExpSetTimerObject2 @ 0x1400FC158 (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140142570 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140159AA4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140186550 (PopThermalUpdateTelemetryClientCount.c)
 *     EtwpCoverageFlushPending @ 0x1406859D0 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x1406C6CCC (EtwpDisableKernelTrace.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     PopDisengageDirectedDrips @ 0x140869AD4 (PopDisengageDirectedDrips.c)
 *     PdcPoNetworkResiliency @ 0x14086FE90 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140878250 (PopNetWnfLowPowerEpochCallback.c)
 *     PopCancelDripsWatchdog @ 0x14087A604 (PopCancelDripsWatchdog.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1400FB3AC (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400FB7B0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC4BC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC508 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x14029BAC0 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r15d
  char v2; // di
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = 0;
  v2 = 0;
  v4 = 2;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_8;
      v1 = 4;
    }
    v4 = 0;
    v2 = 1;
LABEL_8:
    KiUpdateTimer2Flags(a1, v1, v4);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( v5 && v2 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever)));
  return v2;
}
