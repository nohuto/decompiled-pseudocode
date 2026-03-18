/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140188BD0
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x140188B58 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14074F91C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_1404694C0, &LockHandle);
  if ( qword_1404682C8 )
  {
    v0 = MiState[0];
    v1 = qword_1404641C8;
    if ( qword_1404641C8 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_1404682C8->Header.SignalState )
        KeResetEvent(qword_1404682C8);
    }
    else if ( !qword_1404682C8->Header.SignalState )
    {
      KeSetEvent(qword_1404682C8, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_1404682C0->Header.SignalState )
        KeSetEvent(qword_1404682C0, 0, 0);
    }
    else if ( qword_1404682C0->Header.SignalState )
    {
      KeResetEvent(qword_1404682C0);
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
