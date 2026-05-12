/*
 * XREFs of RaidZoneWriteGroupListPendingIoCount @ 0x1C0039C14
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidZoneWriteGroupListPendingIoCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( a2 )
  {
    return *(unsigned int *)(a2 + 56);
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
    for ( i = *(__int64 **)(a1 + 128); i != (__int64 *)(a1 + 128); i = (__int64 *)*i )
      v2 += *((_DWORD *)i + 14);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v2;
}
