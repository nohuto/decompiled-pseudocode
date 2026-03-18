/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0065C9C
 * Callers:
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxShowWindowViaMinMax(struct tagWND *a1, __int64 a2, char a3)
{
  xxxMinMaximizeEx(a1, a2, 0LL, 0LL);
  if ( a3 < 0 )
    xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
}
