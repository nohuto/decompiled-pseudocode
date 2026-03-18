/*
 * XREFs of MiUpdateAvailableEvents @ 0x140188504
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIncreaseAvailablePages @ 0x14002F250 (MiIncreaseAvailablePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14009C010 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x1400DB4B8 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x140188490 (MiUpdatePageThresholdsDpc.c)
 *     MiInitializeMemoryEvents @ 0x14074EE8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateAvailableEvents(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 608, &LockHandle);
  v2 = a1[1008];
  v3 = (struct _KEVENT *)a1[34];
  if ( v2 <= a1[765] )
    KeSetEvent(v3, 0, 0);
  else
    KeResetEvent(v3);
  v4 = (struct _KEVENT *)a1[35];
  if ( v2 <= a1[766] )
    KeResetEvent(v4);
  else
    KeSetEvent(v4, 0, 0);
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
