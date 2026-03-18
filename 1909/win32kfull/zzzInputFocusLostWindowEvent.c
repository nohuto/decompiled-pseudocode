/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C0133320
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1588 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C024D220 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusLostWindowEvent(__int64 a1, int a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d

  if ( gpqForeground
    && (v3 = *(_QWORD *)(gpqForeground + 120LL)) != 0
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
  xxxWindowEvent(0x80000003, (struct tagWND *)v3, 0LL, a2, v4);
}
