/*
 * XREFs of NtSetInformationObject @ 0x1800A0E50
 * Callers:
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x18008463C (TppCritResetThread.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
