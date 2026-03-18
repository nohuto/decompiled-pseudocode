/*
 * XREFs of ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A744
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C002D8D4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0084194 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023A63C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

void __fastcall NotifyShell::TrackedWindowPosChanged(NotifyShell *this, struct tagWND *a2)
{
  char v2; // di

  v2 = (char)a2;
  if ( IsWindowSubjectToShellWindowBehavior(this, 16LL) )
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(this, v2, 0, 0);
}
