/*
 * XREFs of MmSetAccessLogging @ 0x1401202A8
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140566FF4 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x14057D87C (PfTSetTracingPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __fastcall MmSetAccessLogging(int a1, int a2)
{
  unsigned __int8 OldIrql; // bl
  BOOLEAN result; // al
  unsigned __int8 v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  dword_14043B9A8 = a1;
  dword_14043B9AC = a2;
  if ( a1 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
    if ( !P )
      return KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  }
  else
  {
    if ( WorkItem.Parameter )
    {
      if ( WorkItem.Parameter == (void *)2 )
        WorkItem.Parameter = (void *)3;
    }
    else
    {
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      WorkItem.Parameter = (void *)1;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v6 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v8 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v8);
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
