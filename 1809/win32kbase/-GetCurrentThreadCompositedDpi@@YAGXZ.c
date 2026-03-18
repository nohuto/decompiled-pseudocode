/*
 * XREFs of ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0039B78
 * Callers:
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     GetMonitorRect @ 0x1C0039468 (GetMonitorRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetCurrentThreadCompositedDpi(void)
{
  unsigned __int16 v0; // bx

  v0 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v0;
}
