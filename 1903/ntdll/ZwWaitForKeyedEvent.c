/*
 * XREFs of ZwWaitForKeyedEvent @ 0x1800A0050
 * Callers:
 *     sub_1800830A4 @ 0x1800830A4 (sub_1800830A4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForKeyedEvent(
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
