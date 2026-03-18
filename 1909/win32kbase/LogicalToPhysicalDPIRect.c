/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C004CCA0
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C004C5E4 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserLockCursor @ 0x1C0093B90 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00AFD10 (NtUserClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIRect @ 0x1C004D168 (ScaleDPIRect.c)
 *     GetMonitorRectForDpiContext @ 0x1C004D248 (GetMonitorRectForDpiContext.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(_OWORD *a1, _OWORD *a2, __int64 a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // di
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
      v10 = *a4;
    else
      v10 = 0LL;
    if ( !v10 )
      v10 = _MonitorFromRect(a2, 2LL, CurrentThreadDpiAwarenessContext);
    if ( a4 )
      *a4 = v10;
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_WORD *)(v11 + 64);
    if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
      v13 = *(_WORD *)(v11 + 68);
    else
      v13 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v14 = *(_OWORD *)GetMonitorRectForDpiContext(&v15, v10, CurrentThreadDpiAwarenessContext);
    v15 = *(_OWORD *)GetMonitorRectForDpiContext(&v15, v10, 18LL);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a2, v12, v13, v15, v14);
    return 1LL;
  }
  return result;
}
