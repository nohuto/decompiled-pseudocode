/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C004CDF0
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C004C5E4 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserGetClipCursor @ 0x1C0115430 (NtUserGetClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIRect @ 0x1C004D168 (ScaleDPIRect.c)
 *     GetMonitorRectForDpiContext @ 0x1C004D248 (GetMonitorRectForDpiContext.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(_OWORD *a1, _OWORD *a2, __int64 a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned __int16 v11; // si
  __int64 *MonitorRectForDpiContext; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !(_DWORD)a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0
    || (int)Is_MonitorFromRectSupported(a1, a2, a3) < 0 )
  {
    result = 0LL;
    *a1 = *a2;
  }
  else
  {
    if ( a4 )
      v9 = *a4;
    else
      v9 = 0LL;
    if ( !v9 )
      v9 = _MonitorFromRect(a2, 2LL, 18LL);
    if ( a4 )
      *a4 = v9;
    if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      v11 = *(_WORD *)(v10 + 68);
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 40);
      v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    }
    v14 = *(_OWORD *)GetMonitorRectForDpiContext(&v15, v9, 18LL);
    MonitorRectForDpiContext = (__int64 *)GetMonitorRectForDpiContext(&v15, v9, CurrentThreadDpiAwarenessContext);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a2, v11, *(unsigned __int16 *)(v10 + 64), *MonitorRectForDpiContext, v14);
    return 1LL;
  }
  return result;
}
