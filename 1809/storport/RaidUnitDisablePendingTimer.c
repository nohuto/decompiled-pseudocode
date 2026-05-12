/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C00104D4
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0044150 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) == 0 && (*(_DWORD *)(a1 + 456) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 928));
    *(_BYTE *)(a1 + 449) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
