/*
 * XREFs of ZwReleaseSemaphore @ 0x1800A0440
 * Callers:
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x18006DF10 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x18008DD80 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  NTSTATUS result; // eax

  result = 10;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
