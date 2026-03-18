/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C0133390
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2C84 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEvent(int a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  int v4; // ecx

  v2 = *(_QWORD *)(gpqForeground + 120LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 40);
  v4 = 35;
  if ( !gdwDeferWinEvent )
    v4 = 33;
  xxxWindowEvent(0x80000002, (struct tagWND *)v2, (unsigned int)v3, a1, v4);
}
