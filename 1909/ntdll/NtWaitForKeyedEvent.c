/*
 * XREFs of NtWaitForKeyedEvent @ 0x1800A0800
 * Callers:
 *     RtlpRunOnceWaitForInit @ 0x180083744 (RtlpRunOnceWaitForInit.c)
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

  result = 460;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
