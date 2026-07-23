/*
 * XREFs of ZwQueryEvent @ 0x18009D1A0
 * Callers:
 *     sub_180112080 @ 0x180112080 (sub_180112080.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 86;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
