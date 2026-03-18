/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C0057AE0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0039E64 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0057690 (TransformPointBetweenCoordinateSpaces.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C0057A40 (LogicalCursorPosFromDpiAwarenessContext.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIPt @ 0x1C0057D18 (ScaleDPIPt.c)
 *     GetMonitorRectForDpi @ 0x1C0057E78 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  __int64 *MonitorRectForDpi; // rax
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v9 = *a4;
    else
      v9 = 0LL;
    if ( !v9 )
      v9 = _MonitorFromPoint(*a2, 2LL, 18LL);
    if ( a4 )
      *a4 = v9;
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v12 = *(_OWORD *)GetMonitorRectForDpi(&v13, v9, 0LL);
    MonitorRectForDpi = (__int64 *)GetMonitorRectForDpi(&v13, v9, v10);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, v10, *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL), *MonitorRectForDpi, v12);
    return 1LL;
  }
}
