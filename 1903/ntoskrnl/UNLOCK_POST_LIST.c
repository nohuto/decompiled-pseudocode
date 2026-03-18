/*
 * XREFs of UNLOCK_POST_LIST @ 0x14062C2A4
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_POST_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpPostLock);
}
