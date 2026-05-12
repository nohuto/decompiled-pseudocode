/*
 * XREFs of StorRemoveEventQueue @ 0x1C003C944
 * Callers:
 *     RaUnitRemoveFromPendingList @ 0x1C0008C50 (RaUnitRemoveFromPendingList.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C003C9F0 (StorRemoveEventQueueInternal.c)
 */

void __fastcall StorRemoveEventQueue(unsigned int *a1, __int64 a2)
{
  unsigned int *v4; // rbx
  KSPIN_LOCK *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = &a1[16 * *(unsigned int *)(a2 + 36) + 16];
  v5 = (KSPIN_LOCK *)(v4 + 10);
  if ( KeGetCurrentIrql() == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v5, &LockHandle);
    StorRemoveEventQueueInternal(v4, *a1, a2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    StorRemoveEventQueueInternal(v4, *a1, a2);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
