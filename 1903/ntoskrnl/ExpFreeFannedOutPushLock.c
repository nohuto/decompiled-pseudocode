/*
 * XREFs of ExpFreeFannedOutPushLock @ 0x14016E2F4
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1400AD870 (ExCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExSaFree @ 0x14016E310 (ExSaFree.c)
 */

__int64 __fastcall ExpFreeFannedOutPushLock(__int64 a1)
{
  return ExSaFree(a1, 16LL);
}
