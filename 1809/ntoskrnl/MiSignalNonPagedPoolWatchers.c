/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x14017FA60
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x14017F9F8 (MiInitializeNonPagedPoolThresholds.c)
 *     MiCountSystemPool @ 0x1401B4F60 (MiCountSystemPool.c)
 *     MiInitializeMemoryEvents @ 0x14072CB8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043ED00, &LockHandle);
  if ( qword_14043DB08 )
  {
    v0 = MiState[0];
    v1 = qword_140439B18;
    if ( qword_140439B18 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_14043DB08->Header.SignalState )
        KeResetEvent(qword_14043DB08);
    }
    else if ( !qword_14043DB08->Header.SignalState )
    {
      KeSetEvent(qword_14043DB08, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_14043DB00->Header.SignalState )
        KeSetEvent(qword_14043DB00, 0, 0);
    }
    else if ( qword_14043DB00->Header.SignalState )
    {
      KeResetEvent(qword_14043DB00);
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
