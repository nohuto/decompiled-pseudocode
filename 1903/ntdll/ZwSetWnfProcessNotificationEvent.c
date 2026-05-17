/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x18009FC70
 * Callers:
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetWnfProcessNotificationEvent()
{
  __int64 result; // rax

  result = 429LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
