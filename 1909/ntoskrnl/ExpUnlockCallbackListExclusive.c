/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x14018162C
 * Callers:
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x14072AC20 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
