/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140188620
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x1401885A8 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14074EE8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140469780, &LockHandle);
  if ( qword_140468588 )
  {
    v0 = MiState[0];
    v1 = qword_1404644C8;
    if ( qword_1404644C8 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140468588->Header.SignalState )
        KeResetEvent(qword_140468588);
    }
    else if ( !qword_140468588->Header.SignalState )
    {
      KeSetEvent(qword_140468588, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140468580->Header.SignalState )
        KeSetEvent(qword_140468580, 0, 0);
    }
    else if ( qword_140468580->Header.SignalState )
    {
      KeResetEvent(qword_140468580);
    }
  }
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
  return result;
}
