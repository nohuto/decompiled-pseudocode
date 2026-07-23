/*
 * XREFs of ZwTestAlert @ 0x1800A3A10
 * Callers:
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x1800A3EB0 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 441;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
