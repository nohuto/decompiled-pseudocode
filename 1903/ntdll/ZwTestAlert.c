/*
 * XREFs of ZwTestAlert @ 0x18009FE10
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_1800A02B0 @ 0x1800A02B0 (sub_1800A02B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 442;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
