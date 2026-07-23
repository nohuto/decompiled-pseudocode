/*
 * XREFs of NtQueryDriverEntryOrder @ 0x1800A2A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax

  result = 317;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
