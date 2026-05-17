/*
 * XREFs of ZwDelayExecution @ 0x1800A0960
 * Callers:
 *     LdrpInitMuiCrits @ 0x18000A42C (LdrpInitMuiCrits.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18005A534 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800D24DC (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800DF044 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 ZwDelayExecution()
{
  __int64 result; // rax

  result = 52LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
