/*
 * XREFs of ZwSetDefaultLocale @ 0x18009F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  NTSTATUS result; // eax

  result = 392;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
