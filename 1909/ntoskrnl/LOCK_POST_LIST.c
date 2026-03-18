/*
 * XREFs of LOCK_POST_LIST @ 0x140630110
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_POST_LIST()
{
  ExAcquireFastMutexUnsafe(&CmpPostLock);
}
