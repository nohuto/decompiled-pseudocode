/*
 * XREFs of RtlReleasePebLock @ 0x180075AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
