/*
 * XREFs of KeCancelTimer2 @ 0x1400FAF50
 * Callers:
 *     ExCancelTimer @ 0x1400FA2B0 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x1400FADC0 (ExpShutdownWorkerFactory.c)
 *     ExpSetTimerObject2 @ 0x1400FC0B8 (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140142450 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140159984 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401863F0 (PopThermalUpdateTelemetryClientCount.c)
 *     EtwpCoverageFlushPending @ 0x140684830 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x1406C5A4C (EtwpDisableKernelTrace.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     PopDisengageDirectedDrips @ 0x140868894 (PopDisengageDirectedDrips.c)
 *     PdcPoNetworkResiliency @ 0x14086EC50 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140877010 (PopNetWnfLowPowerEpochCallback.c)
 *     PopCancelDripsWatchdog @ 0x1408793C4 (PopCancelDripsWatchdog.c)
 *     ExpPartitionDestroy @ 0x1408D6354 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1400FB30C (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400FB710 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC41C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC468 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x14029B7D0 (KiTraceCancelTimer2.c)
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
