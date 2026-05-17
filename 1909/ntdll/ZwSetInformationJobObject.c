/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A00A0
 * Callers:
 *     TppJobpRundownJob @ 0x18007E5B8 (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x18007E710 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 401LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
