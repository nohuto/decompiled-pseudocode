/*
 * XREFs of NtWaitForKeyedEvent @ 0x1800A3C50
 * Callers:
 *     RtlpRunOnceWaitForInit @ 0x180086DFC (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 459;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
