/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C005D3C0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000B7BC (xxxQueryInformationThread.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxRemoveFullScreen @ 0x1C0035B8C (xxxRemoveFullScreen.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxCancelTracking @ 0x1C00597BC (xxxCancelTracking.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     xxxSendMessageBSM @ 0x1C0061390 (xxxSendMessageBSM.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C006357C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 *     xxxDisownClipboard @ 0x1C00B5724 (xxxDisownClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C00B58F0 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00B5A04 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00B5C90 (NtUserGetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00B6410 (xxxCloseClipboard.c)
 *     RemoteDisableScreen @ 0x1C00BB240 (RemoteDisableScreen.c)
 *     NtUserSwitchDesktop @ 0x1C00BC740 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalc @ 0x1C00F22DC (xxxDesktopsRecalc.c)
 *     CleanupW32ThreadLocks @ 0x1C00F6A30 (CleanupW32ThreadLocks.c)
 *     xxxSendMinRectMessages @ 0x1C0102848 (xxxSendMinRectMessages.c)
 *     xxxAddFullScreen @ 0x1C0103394 (xxxAddFullScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0108E1C (xxxImmUnloadThreadsLayout.c)
 *     xxxWaitForInputIdle @ 0x1C010B9B4 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010BB84 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 *     xxxChangeClipboardChain @ 0x1C0135630 (xxxChangeClipboardChain.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0137D34 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0137D94 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01A1830 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01AA650 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01AC954 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01AD2F8 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 *     xxxDeferredDesktopRotation @ 0x1C01D2640 (xxxDeferredDesktopRotation.c)
 *     xxxHardErrorControl @ 0x1C01FE504 (xxxHardErrorControl.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  result = *(_QWORD *)a1;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
