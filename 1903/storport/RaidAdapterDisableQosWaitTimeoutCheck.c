/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C003373C
 * Callers:
 *     RaidDeleteUnit @ 0x1C0012390 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0047384 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5544), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5552);
  if ( v2 == 1 )
  {
    KeCancelTimer((PKTIMER)(a1 + 5416));
    v2 = *(_DWORD *)(a1 + 5552);
  }
  *(_DWORD *)(a1 + 5552) = v2 - 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
