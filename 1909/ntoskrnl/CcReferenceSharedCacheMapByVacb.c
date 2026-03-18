/*
 * XREFs of CcReferenceSharedCacheMapByVacb @ 0x14027E030
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 */

char __fastcall CcReferenceSharedCacheMapByVacb(__int64 a1)
{
  _QWORD *v2; // rcx
  char v3; // di
  __int64 v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(a1 + 8);
  v3 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(CcGetPartition(v2) + 128);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v4 )
  {
    ++*(_DWORD *)(v4 + 4);
    v3 = 1;
    ++*(_DWORD *)(v4 + 536);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v3;
}
