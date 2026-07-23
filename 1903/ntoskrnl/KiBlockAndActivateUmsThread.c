/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x1402B5EFC
 * Callers:
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

char __fastcall KiBlockAndActivateUmsThread(__int64 a1, struct _KQUEUE *a2, _LIST_ENTRY *a3, struct _KEVENT *a4)
{
  PLIST_ENTRY EntryArray; // [rsp+50h] [rbp+18h] BYREF

  EntryArray = a3;
  KeSetEvent(a4 + 2, 1, 1u);
  KiLeaveGuardedRegionUnsafe(a1);
  LOBYTE(a1) = KeGetCurrentPrcb()->NextThread != 0LL;
  KeRemoveQueueEx(a2, 0, 0, 0LL, &EntryArray, 1u);
  return a1;
}
