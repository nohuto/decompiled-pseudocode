/*
 * XREFs of TraceGreReleaseSemaphore @ 0x1C015EB04
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TraceGreReleaseSemaphore(__int64 a1, __int64 a2)
{
  return EtwTraceGreLockReleaseSemaphore(a1, a2);
}
