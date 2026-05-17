/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x18009EC00
 * Callers:
 *     RtlpWnfNotificationThread @ 0x1800065D0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x1800066EC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008C460 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 236LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
