/*
 * XREFs of ZwCancelTimer2 @ 0x18009D910
 * Callers:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  NTSTATUS result; // eax

  result = 146;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
