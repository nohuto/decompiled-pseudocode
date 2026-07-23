/*
 * XREFs of RtlTryAcquirePebLock @ 0x180047150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL RtlTryAcquirePebLock(void)
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
