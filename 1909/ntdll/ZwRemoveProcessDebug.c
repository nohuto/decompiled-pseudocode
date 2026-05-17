/*
 * XREFs of ZwRemoveProcessDebug @ 0x18009FBE0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800CD240 (DbgUiDebugActiveProcess.c)
 *     DbgUiStopDebugging @ 0x1800CD3C0 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

__int64 ZwRemoveProcessDebug()
{
  __int64 result; // rax

  result = 363LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
