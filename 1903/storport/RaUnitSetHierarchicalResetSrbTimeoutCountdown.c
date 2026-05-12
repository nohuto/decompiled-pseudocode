/*
 * XREFs of RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C0044A28
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C0047634 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

void __fastcall RaUnitSetHierarchicalResetSrbTimeoutCountdown(__int64 a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1536), &LockHandle);
  *(_DWORD *)(a1 + 1524) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
