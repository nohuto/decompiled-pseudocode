/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x1800A2FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRegisterThreadTerminatePort(HANDLE PortHandle)
{
  NTSTATUS result; // eax

  result = 358;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
