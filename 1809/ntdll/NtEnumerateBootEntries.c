/*
 * XREFs of NtEnumerateBootEntries @ 0x1800A1DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax

  result = 216;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
