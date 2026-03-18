/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1C0075BD4
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
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
