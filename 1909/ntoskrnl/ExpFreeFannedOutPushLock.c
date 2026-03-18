/*
 * XREFs of ExpFreeFannedOutPushLock @ 0x14016E9E4
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14008E890 (ExCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExSaFree @ 0x14016EA00 (ExSaFree.c)
 */

__int64 __fastcall ExpFreeFannedOutPushLock(__int64 a1)
{
  return ExSaFree(a1, 16LL);
}
