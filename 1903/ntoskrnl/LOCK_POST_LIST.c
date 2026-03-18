/*
 * XREFs of LOCK_POST_LIST @ 0x14062C2C0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_POST_LIST()
{
  ExAcquireFastMutexUnsafe(&CmpPostLock);
}
