/*
 * XREFs of ZwImpersonateThread @ 0x18009ED80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  NTSTATUS result; // eax

  result = 248;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
