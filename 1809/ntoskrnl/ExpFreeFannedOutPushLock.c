/*
 * XREFs of ExpFreeFannedOutPushLock @ 0x140167154
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x140091860 (ExCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExSaFree @ 0x140167170 (ExSaFree.c)
 */

__int64 __fastcall ExpFreeFannedOutPushLock(__int64 a1)
{
  return ExSaFree(a1, 16LL);
}
