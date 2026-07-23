/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x1800A0010
 * Callers:
 *     sub_180007598 @ 0x180007598 (sub_180007598.c)
 *     sub_1800076B4 @ 0x1800076B4 (sub_1800076B4.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlSleepConditionVariableSRW @ 0x180060AE0 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180060D90 (RtlSleepConditionVariableCS.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     RtlDeleteTimerQueueEx @ 0x180082570 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 458;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
