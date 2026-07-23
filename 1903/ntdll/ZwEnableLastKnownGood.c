/*
 * XREFs of ZwEnableLastKnownGood @ 0x18009E1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwEnableLastKnownGood(void)
{
  NTSTATUS result; // eax

  result = 216;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
