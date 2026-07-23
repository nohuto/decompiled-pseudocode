/*
 * XREFs of ZwDelayExecution @ 0x18009D510
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18001A790 (LdrpInitMuiCrits.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18006D6D0 (EtwpWaitForBufferReferenceCount.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 *     InitSecurityCookie @ 0x1800D0CAC (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800DCCF8 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
