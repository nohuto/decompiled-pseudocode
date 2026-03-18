/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x1C0035AB4
 * Callers:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C0065424 (-UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     InternalGetRealClientRect @ 0x1C00F3E30 (InternalGetRealClientRect.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00738F4 (ExpandMonitorSpaceVertex.c)
 */

_OWORD *__fastcall GetMonitorWorkRectForDpi(_OWORD *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  *a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_QWORD *)(v7 + 28);
    v9 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(v7 + 66), v8);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 64LL), v9, v8);
  }
  return a1;
}
