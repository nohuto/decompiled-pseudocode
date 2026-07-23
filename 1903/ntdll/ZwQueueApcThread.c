/*
 * XREFs of ZwQueueApcThread @ 0x18009CF80
 * Callers:
 *     RtlQueueApcWow64Thread @ 0x1800DB340 (RtlQueueApcWow64Thread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  NTSTATUS result; // eax

  result = 69;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
