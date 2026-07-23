/*
 * XREFs of ZwTestAlert @ 0x1800A05C0
 * Callers:
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x1800A0A60 (KiUserApcHandler.c)
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
