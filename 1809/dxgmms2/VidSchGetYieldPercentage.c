/*
 * XREFs of VidSchGetYieldPercentage @ 0x1C00325F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetYieldPercentage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  *a3 = *(_DWORD *)(a1 + 192);
  *a2 ^= (*a2 ^ (*(_DWORD *)(a1 + 1936) >> 2)) & 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
