/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x140180F3C
 * Callers:
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x1407298B0 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
