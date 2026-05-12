/*
 * XREFs of StorRemoveEventQueue @ 0x1C0038308
 * Callers:
 *     RaUnitRemoveFromPendingList @ 0x1C0007410 (RaUnitRemoveFromPendingList.c)
 *     RaidUnitCompleteRequest @ 0x1C0009540 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C00383C0 (StorRemoveEventQueueInternal.c)
 */

void __fastcall StorRemoveEventQueue(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int *v4; // rbx
  KSPIN_LOCK *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned int *)(a2 + 36) + 1LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = &a1[16 * v2];
  v6 = (KSPIN_LOCK *)(v4 + 10);
  if ( KeGetCurrentIrql() == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v6, &LockHandle);
    StorRemoveEventQueueInternal(v4, *a1, a2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    StorRemoveEventQueueInternal(v4, *a1, a2);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
