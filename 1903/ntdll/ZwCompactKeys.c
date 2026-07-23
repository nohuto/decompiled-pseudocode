/*
 * XREFs of ZwCompactKeys @ 0x18009D9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  NTSTATUS result; // eax

  result = 152;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
