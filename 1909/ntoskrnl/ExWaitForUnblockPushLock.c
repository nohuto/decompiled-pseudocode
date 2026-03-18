/*
 * XREFs of ExWaitForUnblockPushLock @ 0x1403396C0
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1400F89E0 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(__int64 a1, char *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
