/*
 * XREFs of NtAlpcSetInformation @ 0x1800A1450
 * Callers:
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x18006CA90 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180088AA4 (TppFastAlpcAdjustConcurrencyCount.c)
 *     AlpcRegisterCompletionList @ 0x180089230 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x1800893F0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180089410 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E1EA0 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 139;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
