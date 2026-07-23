/*
 * XREFs of ZwQueryDebugFilterState @ 0x1800A2A30
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1800E1FC0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  NTSTATUS result; // eax

  result = 314;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
