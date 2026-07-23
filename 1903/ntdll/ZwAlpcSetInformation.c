/*
 * XREFs of ZwAlpcSetInformation @ 0x18009D830
 * Callers:
 *     sub_18003382C @ 0x18003382C (sub_18003382C.c)
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 *     AlpcRegisterCompletionList @ 0x180084F10 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180085060 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180085080 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFA30 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
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
