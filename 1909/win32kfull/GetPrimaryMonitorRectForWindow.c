/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C0106E14
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRectForWindow(_OWORD *a1, const struct tagWND *a2)
{
  __int64 DispInfo; // rax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo(a1, a2);
  v5 = *GetMonitorRectForWindow(&v7, *(_QWORD *)(DispInfo + 96), a2);
  result = a1;
  *a1 = v5;
  return result;
}
