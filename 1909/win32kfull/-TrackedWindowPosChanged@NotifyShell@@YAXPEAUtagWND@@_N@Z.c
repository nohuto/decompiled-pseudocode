/*
 * XREFs of ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0013264 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0022FF4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E200 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023A01C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

void __fastcall NotifyShell::TrackedWindowPosChanged(NotifyShell *this, struct tagWND *a2, __int64 a3)
{
  char v3; // di

  v3 = (char)a2;
  if ( IsWindowSubjectToShellWindowBehavior(this, 16LL, a3) )
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(this, v3, 0, 0);
}
