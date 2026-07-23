/*
 * XREFs of ZwInitiatePowerAction @ 0x18009E650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  NTSTATUS result; // eax

  result = 252;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
