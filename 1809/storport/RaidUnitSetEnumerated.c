/*
 * XREFs of RaidUnitSetEnumerated @ 0x1C00176E8
 * Callers:
 *     RaidpBuildAdapterBusRelations @ 0x1C0017474 (RaidpBuildAdapterBusRelations.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitSetEnumerated(__int64 a1, char a2)
{
  char v4; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  v4 = *(_BYTE *)(a1 + 448);
  *(_BYTE *)(a1 + 448) = v4 ^ (v4 ^ (2 * a2)) & 2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (v4 & 2) != 0;
}
