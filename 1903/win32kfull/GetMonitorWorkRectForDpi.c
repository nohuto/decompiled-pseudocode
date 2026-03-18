/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x1C0097130
 * Callers:
 *     GetMonitorWorkRectForDpiContext @ 0x1C00970E4 (GetMonitorWorkRectForDpiContext.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C00E67E8 (-UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0094D40 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorWorkRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_QWORD *)(v7 + 28);
    v9 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(v7 + 66), v8);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v9, v8);
  }
  return a1;
}
