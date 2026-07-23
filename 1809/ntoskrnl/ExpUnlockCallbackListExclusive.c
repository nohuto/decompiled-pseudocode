/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x140177718
 * Callers:
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x1406E3470 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
