/*
 * XREFs of ZwSuspendThread @ 0x18009FD90
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwSuspendThread()
{
  __int64 result; // rax

  result = 438LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
