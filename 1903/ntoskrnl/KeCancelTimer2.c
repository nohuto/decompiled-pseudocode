/*
 * XREFs of KeCancelTimer2 @ 0x140113E70
 * Callers:
 *     ExpSetTimerObject2 @ 0x1400BAC44 (ExpSetTimerObject2.c)
 *     ExCancelTimer @ 0x140113CD0 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x140113D04 (ExpShutdownWorkerFactory.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14015DB58 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14016A0C4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14018B990 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1402F175C (PopDirectedDripsStartDisengageTimer.c)
 *     EtwpCoverageFlushPending @ 0x1406BD290 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x1406E75F4 (EtwpDisableKernelTrace.c)
 *     PdcPoNetworkResiliency @ 0x1408AB780 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408B42F0 (PopNetWnfLowPowerEpochCallback.c)
 *     ExpPartitionDestroy @ 0x140913C24 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400BF298 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400BF2E4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveTimer2 @ 0x1400BFC50 (KiRemoveTimer2.c)
 *     KiUpdateTimer2Flags @ 0x140114164 (KiUpdateTimer2Flags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x1402B2DA8 (KiTraceCancelTimer2.c)
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
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
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
