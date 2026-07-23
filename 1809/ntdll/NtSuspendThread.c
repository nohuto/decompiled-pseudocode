/*
 * XREFs of NtSuspendThread @ 0x1800A3990
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThread @ 0x1800DD780 (RtlWow64SuspendThread.c)
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 437;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
