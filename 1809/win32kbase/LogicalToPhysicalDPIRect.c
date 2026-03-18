/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C00394B0
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C0038E90 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserLockCursor @ 0x1C003B460 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00A1DF0 (NtUserClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIRect @ 0x1C00398E0 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C00399C0 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(_OWORD *a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int16 v10; // bx
  __int64 *MonitorRectForDpi; // rax
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromRectSupported() < 0 )
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
      v9 = _MonitorFromRect(a2, 2LL, CurrentThreadDpiAwarenessContext);
    if ( a4 )
      *a4 = v9;
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v12 = *(_OWORD *)GetMonitorRectForDpi(&v13, v9, v10);
    MonitorRectForDpi = (__int64 *)GetMonitorRectForDpi(&v13, v9, 0LL);
    ScaleDPIRect(
      (_DWORD)a1,
      (_DWORD)a2,
      *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL),
      v10,
      *MonitorRectForDpi,
      v12);
    return 1LL;
  }
  return result;
}
