/*
 * XREFs of RaidUnitReenablePendingTimer @ 0x1C000617C
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0003E50 (RaidUnitClaimIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001E400 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00252E0 (RaUnitRemoveDeviceIrp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0044330 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00446C0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReenablePendingTimer(__int64 a1, char a2)
{
  int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 3192) != 0 ? 1 : 4;
  v5 = *(_BYTE *)(a1 + 3192) != 0 ? 0xFFFFFF06 : 0;
  v6 = *(_BYTE *)(a1 + 3192) != 0 ? 500 : 2000;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 928), (LARGE_INTEGER)(-10000 * v6), v6, v5 + 300, (PKDPC)(a1 + 992));
    *(_DWORD *)(*(_QWORD *)(a1 + 504) + 4LL) = v4;
    *(_BYTE *)(a1 + 449) &= ~0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
