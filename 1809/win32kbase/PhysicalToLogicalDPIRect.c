/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C00395D0
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C0038E90 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserGetClipCursor @ 0x1C00EEEF0 (NtUserGetClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIRect @ 0x1C00398E0 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C00399C0 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(_OWORD *a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v8; // rbx
  unsigned __int16 v9; // si
  __int64 *MonitorRectForDpi; // rax
  __int64 result; // rax
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
      v8 = *a4;
    else
      v8 = 0LL;
    if ( !v8 )
      v8 = _MonitorFromRect(a2, 2LL, 18LL);
    if ( a4 )
      *a4 = v8;
    v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v12 = *(_OWORD *)GetMonitorRectForDpi(&v13, v8, 0LL);
    MonitorRectForDpi = (__int64 *)GetMonitorRectForDpi(&v13, v8, v9);
    ScaleDPIRect(
      (_DWORD)a1,
      (_DWORD)a2,
      v9,
      *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 64LL),
      *MonitorRectForDpi,
      v12);
    return 1LL;
  }
  return result;
}
