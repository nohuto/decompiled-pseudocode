/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009DC60
 * Callers:
 *     RtlpWaitOnAddressWakeEntireList @ 0x180006358 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeByAddress @ 0x180006FCC (RtlpWakeByAddress.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWakeSRWLock @ 0x180035E30 (RtlpWakeSRWLock.c)
 *     TppIteWakeWaiters @ 0x180066F8C (TppIteWakeWaiters.c)
 *     RtlWakeAllConditionVariable @ 0x18006D4C0 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x1800794F4 (RtlpWakeConditionVariable.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180082A80 (RtlpInitializeStaticCriticalSection.c)
 *     RtlpTpTimerQueueRundown @ 0x180082D84 (RtlpTpTimerQueueRundown.c)
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
