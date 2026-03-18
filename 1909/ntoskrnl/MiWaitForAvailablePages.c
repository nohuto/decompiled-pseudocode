/*
 * XREFs of MiWaitForAvailablePages @ 0x1402E5648
 * Callers:
 *     MiDelayFaultingThread @ 0x1402D22FC (MiDelayFaultingThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall MiWaitForAvailablePages(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned __int8 v4; // bl
  struct _KPRCB *v5; // rcx
  NTSTATUS result; // eax
  void *v7; // rdi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
  if ( *(_QWORD *)(a1 + 8064) < 0x420uLL )
  {
    v7 = (void *)(a1 + 4936);
    KeResetEvent((PRKEVENT)(a1 + 4936));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    return KeWaitForSingleObject(v7, WrFreePage, 0, 0, a2);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v4 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v5 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v5);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
