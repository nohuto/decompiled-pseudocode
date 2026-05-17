/*
 * XREFs of ZwReleaseSemaphore @ 0x18009C820
 * Callers:
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     RtlConvertSharedToExclusive @ 0x18005F9E0 (RtlConvertSharedToExclusive.c)
 *     RtlReleaseResource @ 0x18005FD60 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x18008A3F0 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
