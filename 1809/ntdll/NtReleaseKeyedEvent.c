/*
 * XREFs of NtReleaseKeyedEvent @ 0x1800A2FD0
 * Callers:
 *     RtlRunOnceComplete @ 0x180077F60 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 359;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
