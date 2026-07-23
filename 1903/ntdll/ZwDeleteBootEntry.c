/*
 * XREFs of ZwDeleteBootEntry @ 0x18009E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteBootEntry(ULONG Id)
{
  NTSTATUS result; // eax

  result = 204;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
