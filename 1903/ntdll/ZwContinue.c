/*
 * XREFs of ZwContinue @ 0x18009CF40
 * Callers:
 *     LdrInitializeThunk @ 0x180071DF0 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x1800A0330 (KiUserApcDispatcher.c)
 *     sub_1800A0960 @ 0x1800A0960 (sub_1800A0960.c)
 *     sub_1800A0C90 @ 0x1800A0C90 (sub_1800A0C90.c)
 *     sub_18010A120 @ 0x18010A120 (sub_18010A120.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  NTSTATUS result; // eax

  result = 67;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
