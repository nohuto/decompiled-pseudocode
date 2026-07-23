/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A10D0
 * Callers:
 *     RtlWakeAllConditionVariable @ 0x18005A2A0 (RtlWakeAllConditionVariable.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18005CA5C (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeByAddress @ 0x18005E81C (RtlpWakeByAddress.c)
 *     TppIteWakeWaiters @ 0x180073E48 (TppIteWakeWaiters.c)
 *     RtlpWakeSRWLock @ 0x180075260 (RtlpWakeSRWLock.c)
 *     RtlpWakeConditionVariable @ 0x18007F784 (RtlpWakeConditionVariable.c)
 *     RtlpTpTimerQueueRundown @ 0x18008720C (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 111;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
