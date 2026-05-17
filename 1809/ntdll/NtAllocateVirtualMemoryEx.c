/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x1800A1150
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x180060E80 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     <none>
 */

__int64 NtAllocateVirtualMemoryEx()
{
  __int64 result; // rax

  result = 116LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
