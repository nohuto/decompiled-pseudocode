/*
 * XREFs of ZwAlpcDeleteResourceReserve @ 0x18009D6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  NTSTATUS result; // eax

  result = 127;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
