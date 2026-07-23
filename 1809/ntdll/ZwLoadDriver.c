/*
 * XREFs of ZwLoadDriver @ 0x1800A22D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  NTSTATUS result; // eax

  result = 255;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
