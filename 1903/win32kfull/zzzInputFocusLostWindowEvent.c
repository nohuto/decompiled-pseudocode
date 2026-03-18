/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C00147C0
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C024D960 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 */

__int64 __fastcall zzzInputFocusLostWindowEvent(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // r8d

  if ( gpqForeground
    && (v1 = *(_QWORD *)(gpqForeground + 120LL)) != 0
    && v1 != a1
    && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v1 + 16) )
  {
    v2 = 35;
    v3 = 33;
  }
  else
  {
    v2 = 51;
    v3 = 49;
  }
  if ( !gdwDeferWinEvent )
    v2 = v3;
  return xxxWindowEvent(0x80000003, v2);
}
