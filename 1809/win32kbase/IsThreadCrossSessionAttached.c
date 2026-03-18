/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1C00A8330
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00210C0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     HmgLockEx @ 0x1C0023060 (HmgLockEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v0);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return 1;
  }
  return result;
}
