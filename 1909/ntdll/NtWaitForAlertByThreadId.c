/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A07C0
 * Callers:
 *     RtlpWaitOnAddressWithTimeout @ 0x180007598 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800076B4 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     TppCancelTimer @ 0x18003257C (TppCancelTimer.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlSleepConditionVariableSRW @ 0x180060B80 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180060E30 (RtlSleepConditionVariableCS.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     RtlDeleteTimerQueueEx @ 0x180082C10 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 458;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
