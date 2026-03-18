/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEvent(int a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  int v4; // ecx

  v2 = *(_QWORD *)(gpqForeground + 112LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 40);
  v4 = 35;
  if ( !gdwDeferWinEvent )
    v4 = 33;
  xxxWindowEvent(0x80000002, v2, v3, a1, v4);
}
