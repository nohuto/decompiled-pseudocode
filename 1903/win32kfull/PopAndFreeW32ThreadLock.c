/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00D0DF0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000D498 (xxxQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C00116B0 (xxxSetClipboardViewer.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxCancelTracking @ 0x1C0013904 (xxxCancelTracking.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     NtUserSwitchDesktop @ 0x1C0080F50 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00839E4 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x1C0086FB0 (xxxSendMessageBSM.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009020C (xxxCreateDefaultImeWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0097200 (xxxRemoveFullScreen.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxDoPaint @ 0x1C009A840 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxCloseClipboard @ 0x1C00B78A0 (xxxCloseClipboard.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDesktopsRecalc @ 0x1C0115E00 (xxxDesktopsRecalc.c)
 *     CleanupW32ThreadLocks @ 0x1C011EAD0 (CleanupW32ThreadLocks.c)
 *     xxxDisownClipboard @ 0x1C0125564 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C01256F0 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C0125AC0 (NtUserGetClipboardData.c)
 *     xxxAddFullScreen @ 0x1C012D744 (xxxAddFullScreen.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     xxxWaitForInputIdle @ 0x1C0132FA0 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C013310C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     RemoteDisableScreen @ 0x1C0133A40 (RemoteDisableScreen.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01350B4 (xxxImmUnloadThreadsLayout.c)
 *     xxxChangeClipboardChain @ 0x1C01390F0 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C015FEC4 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D6238 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01E1230 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E4808 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E51E4 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 *     xxxDeferredDesktopRotation @ 0x1C020D2D0 (xxxDeferredDesktopRotation.c)
 *     xxxHardErrorControl @ 0x1C023F06C (xxxHardErrorControl.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  result = *(_QWORD *)a1;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
