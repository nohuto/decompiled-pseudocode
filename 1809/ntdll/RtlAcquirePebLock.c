/*
 * XREFs of RtlAcquirePebLock @ 0x18007E840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAcquirePebLock()
{
  return RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
