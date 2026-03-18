/*
 * XREFs of MmSetAccessLogging @ 0x14017DFC4
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14059E204 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x14059E354 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1405AC72C (PfTSetTracingPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __fastcall MmSetAccessLogging(int a1, int a2)
{
  unsigned __int8 OldIrql; // bl
  BOOLEAN result; // al
  unsigned __int8 v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140466380, &LockHandle);
  dword_140466368 = a1;
  dword_14046636C = a2;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
    if ( stru_140466348.Parameter )
    {
      if ( stru_140466348.Parameter == (void *)2 )
        stru_140466348.Parameter = (void *)3;
    }
    else
    {
      stru_140466348.List.Flink = 0LL;
      stru_140466348.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_140466348.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140466348, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
