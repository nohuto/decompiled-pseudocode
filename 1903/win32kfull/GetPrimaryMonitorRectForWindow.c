/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C001AEDC
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRectForWindow(_OWORD *a1, __int64 a2)
{
  __int64 DispInfo; // rax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo();
  v5 = *(_OWORD *)GetMonitorRectForWindow(v7, *(_QWORD *)(DispInfo + 96), a2);
  result = a1;
  *a1 = v5;
  return result;
}
