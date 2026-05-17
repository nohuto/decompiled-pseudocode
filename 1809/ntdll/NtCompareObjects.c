/*
 * XREFs of NtCompareObjects @ 0x1800A15F0
 * Callers:
 *     RtlIsCurrentProcess @ 0x180080A20 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x1800FB3B0 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareObjects()
{
  __int64 result; // rax

  result = 153LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
