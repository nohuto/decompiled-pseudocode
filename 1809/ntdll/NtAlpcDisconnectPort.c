/*
 * XREFs of NtAlpcDisconnectPort @ 0x1800A1330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 130;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
