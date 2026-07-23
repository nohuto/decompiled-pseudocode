/*
 * XREFs of NtDisableLastKnownGood @ 0x18009E920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  NTSTATUS result; // eax

  result = 213;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
