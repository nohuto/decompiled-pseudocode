/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C005FC1C
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C020B9F0 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusLostWindowEvent(__int64 a1, int a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d

  if ( gpqForeground
    && (v3 = *(_QWORD *)(gpqForeground + 112LL)) != 0
    && v3 != a1
    && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v3 + 16) )
  {
    v4 = 35;
    v5 = 33;
  }
  else
  {
    v3 = a1;
    v4 = 51;
    v5 = 49;
  }
  if ( !gdwDeferWinEvent )
    v4 = v5;
  xxxWindowEvent(0x80000003, v3, 0, a2, v4);
}
