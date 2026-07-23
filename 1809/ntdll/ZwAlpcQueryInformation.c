/*
 * XREFs of ZwAlpcQueryInformation @ 0x1800A13D0
 * Callers:
 *     TpWaitForAlpcCompletion @ 0x180088150 (TpWaitForAlpcCompletion.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 135;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
