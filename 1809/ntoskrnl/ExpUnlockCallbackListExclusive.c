/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1401775F8
 * Callers:
 *     ExCreateCallback @ 0x1406CA3A0 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x1406E21F0 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
