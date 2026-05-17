/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A34D0
 * Callers:
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     TppJobpRundownJob @ 0x180032968 (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 400LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
