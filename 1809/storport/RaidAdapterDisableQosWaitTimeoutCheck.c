/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0037BA0
 * Callers:
 *     RaidDeleteUnit @ 0x1C001A750 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0049CF4 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5680), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5688);
  if ( v2 == 1 )
  {
    KeCancelTimer((PKTIMER)(a1 + 5552));
    v2 = *(_DWORD *)(a1 + 5688);
  }
  *(_DWORD *)(a1 + 5688) = v2 - 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
