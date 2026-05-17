/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A10B0
 * Callers:
 *     RtlWakeAllConditionVariable @ 0x18005A2A0 (RtlWakeAllConditionVariable.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18005CA5C (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeByAddress @ 0x18005E81C (RtlpWakeByAddress.c)
 *     TppIteWakeWaiters @ 0x180073E38 (TppIteWakeWaiters.c)
 *     RtlpWakeSRWLock @ 0x180075250 (RtlpWakeSRWLock.c)
 *     RtlpWakeConditionVariable @ 0x18007F774 (RtlpWakeConditionVariable.c)
 *     RtlpTpTimerQueueRundown @ 0x1800871FC (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlertThreadByThreadId()
{
  __int64 result; // rax

  result = 111LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
