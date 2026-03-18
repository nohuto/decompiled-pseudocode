/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00B81EC
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0221FA0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

void __fastcall xxxShowWindowViaMinMax(struct tagWND *a1, unsigned int a2, int a3)
{
  char v3; // bl
  struct tagWND *v5; // rdx
  bool v6; // r8

  v3 = a3;
  xxxMinMaximizeEx(a1, a2, a3, 0LL, 0LL, 0LL);
  if ( v3 < 0 )
  {
    LOBYTE(v5) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v5, v6);
  }
}
