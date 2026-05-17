/*
 * XREFs of ZwUmsThreadYield @ 0x1800A3A90
 * Callers:
 *     RtlUmsThreadYield @ 0x1800F6840 (RtlUmsThreadYield.c)
 * Callees:
 *     <none>
 */

__int64 ZwUmsThreadYield()
{
  __int64 result; // rax

  result = 446LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
