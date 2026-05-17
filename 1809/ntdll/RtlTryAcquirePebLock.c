/*
 * XREFs of RtlTryAcquirePebLock @ 0x180068C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlTryAcquirePebLock()
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
