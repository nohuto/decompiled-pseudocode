/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x14017F900
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x14017F898 (MiInitializeNonPagedPoolThresholds.c)
 *     MiCountSystemPool @ 0x1401B4E00 (MiCountSystemPool.c)
 *     MiInitializeMemoryEvents @ 0x14072B9BC (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043DC40, &LockHandle);
  if ( qword_14043CA48 )
  {
    v0 = MiState[0];
    v1 = qword_140438A58;
    if ( qword_140438A58 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_14043CA48->Header.SignalState )
        KeResetEvent(qword_14043CA48);
    }
    else if ( !qword_14043CA48->Header.SignalState )
    {
      KeSetEvent(qword_14043CA48, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_14043CA40->Header.SignalState )
        KeSetEvent(qword_14043CA40, 0, 0);
    }
    else if ( qword_14043CA40->Header.SignalState )
    {
      KeResetEvent(qword_14043CA40);
    }
  }
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
  return result;
}
