/*
 * XREFs of ZwGetContextThread @ 0x18009E470
 * Callers:
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 *     sub_18010A184 @ 0x18010A184 (sub_18010A184.c)
 *     sub_180112B54 @ 0x180112B54 (sub_180112B54.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 237;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
