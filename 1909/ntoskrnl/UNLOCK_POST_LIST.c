/*
 * XREFs of UNLOCK_POST_LIST @ 0x1406300F4
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_POST_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpPostLock);
}
