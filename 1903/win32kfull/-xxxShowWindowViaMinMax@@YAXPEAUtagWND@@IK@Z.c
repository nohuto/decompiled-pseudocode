/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0084194
 * Callers:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A744 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

void __fastcall xxxShowWindowViaMinMax(struct tagWND *a1, __int64 a2, char a3)
{
  struct tagWND *v5; // rdx
  bool v6; // r8

  xxxMinMaximizeEx(a1, a2, 0LL, 0LL);
  if ( a3 < 0 )
  {
    LOBYTE(v5) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v5, v6);
  }
}
