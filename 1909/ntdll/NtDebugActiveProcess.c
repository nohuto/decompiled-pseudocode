/*
 * XREFs of NtDebugActiveProcess @ 0x18009E7A0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800CD240 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtDebugActiveProcess()
{
  __int64 result; // rax

  result = 201LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
