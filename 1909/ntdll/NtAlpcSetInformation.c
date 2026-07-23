/*
 * XREFs of NtAlpcSetInformation @ 0x18009DFE0
 * Callers:
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18003382C (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x180078C54 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x1800855B0 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180085700 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180085720 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFAF0 (AlpcAdjustCompletionListConcurrencyCount.c)
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
