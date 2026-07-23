/*
 * XREFs of ZwCallbackReturn @ 0x18009C780
 * Callers:
 *     sub_1800A03B0 @ 0x1800A03B0 (sub_1800A03B0.c)
 *     KiUserCallbackDispatcher @ 0x1800A0440 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  NTSTATUS result; // eax

  result = 5;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
