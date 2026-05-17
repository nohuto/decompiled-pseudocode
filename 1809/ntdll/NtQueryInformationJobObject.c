/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A2B30
 * Callers:
 *     TppJobpRundownJob @ 0x180032968 (TppJobpRundownJob.c)
 *     RtlGetSessionProperties @ 0x1800E77A0 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 323LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
