/*
 * XREFs of ZwAlpcRevokeSecurityContext @ 0x18009D7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcRevokeSecurityContext()
{
  __int64 result; // rax

  result = 137LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
