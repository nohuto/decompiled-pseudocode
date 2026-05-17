/*
 * XREFs of ZwFlushKey @ 0x18009EB00
 * Callers:
 *     RtlApplyRXact @ 0x180089C80 (RtlApplyRXact.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushKey()
{
  __int64 result; // rax

  result = 228LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
