/*
 * XREFs of ZwWaitForMultipleObjects @ 0x18009D230
 * Callers:
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800DCB54 @ 0x1800DCB54 (sub_1800DCB54.c)
 *     sub_1800F8558 @ 0x1800F8558 (sub_1800F8558.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
