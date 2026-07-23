/*
 * XREFs of ExpFreeFannedOutPushLock @ 0x140167254
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1400917A0 (ExCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExSaFree @ 0x140167270 (ExSaFree.c)
 */

__int64 __fastcall ExpFreeFannedOutPushLock(__int64 a1)
{
  return ExSaFree(a1, 16LL);
}
