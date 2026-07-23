/*
 * XREFs of ZwQueryDebugFilterState @ 0x18009EE30
 * Callers:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 *     DbgQueryDebugFilterState @ 0x1800DFB50 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  NTSTATUS result; // eax

  result = 315;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
