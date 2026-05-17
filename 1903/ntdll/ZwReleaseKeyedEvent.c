/*
 * XREFs of ZwReleaseKeyedEvent @ 0x18009F3D0
 * Callers:
 *     RtlRunOnceComplete @ 0x18000B240 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseKeyedEvent()
{
  __int64 result; // rax

  result = 360LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
