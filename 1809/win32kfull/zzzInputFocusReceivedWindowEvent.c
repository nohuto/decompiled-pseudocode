/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEvent(int a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(gpqForeground + 112LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 440LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 40);
  v4 = 35;
  if ( !gdwDeferWinEvent )
    v4 = 33;
  xxxWindowEvent(0x80000002, v2, v3, a1, v4);
}
