/*
 * XREFs of ZwSetUuidSeed @ 0x18009FC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetUuidSeed(PCHAR Seed)
{
  NTSTATUS result; // eax

  result = 427;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
