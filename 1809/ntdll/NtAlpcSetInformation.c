/*
 * XREFs of NtAlpcSetInformation @ 0x1800A1430
 * Callers:
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x18006CA90 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180088A94 (TppFastAlpcAdjustConcurrencyCount.c)
 *     AlpcRegisterCompletionList @ 0x180089220 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x1800893E0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180089400 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E1EA0 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 139LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
