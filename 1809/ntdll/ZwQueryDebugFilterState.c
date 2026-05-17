/*
 * XREFs of ZwQueryDebugFilterState @ 0x1800A2A10
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1800E1FC0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDebugFilterState()
{
  __int64 result; // rax

  result = 314LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
