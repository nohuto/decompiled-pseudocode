/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C000F8E0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000F310 (RaidUnitPendingDpcRoutine.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0040B20 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 161) & 0x20) == 0 && (*(_DWORD *)(a1 + 168) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 696));
    *(_BYTE *)(a1 + 161) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
