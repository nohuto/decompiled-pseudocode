/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C0037100
 * Callers:
 *     xxxSetShellWindow @ 0x1C0009324 (xxxSetShellWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxRemoveFullScreen @ 0x1C001D218 (xxxRemoveFullScreen.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserSwitchDesktop @ 0x1C0094ED0 (NtUserSwitchDesktop.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00AD260 (xxxCreateDefaultImeWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     xxxQueryInformationThread @ 0x1C00BB038 (xxxQueryInformationThread.c)
 *     xxxDesktopsRecalc @ 0x1C00BCADC (xxxDesktopsRecalc.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00CC948 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSendMessageBSM @ 0x1C00CFB80 (xxxSendMessageBSM.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxCancelTracking @ 0x1C00D81FC (xxxCancelTracking.c)
 *     xxxCloseClipboard @ 0x1C00D9B50 (xxxCloseClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00DCA10 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C00DE71C (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00DE988 (xxxEmptyClipboard.c)
 *     xxxDisownClipboard @ 0x1C00E021C (xxxDisownClipboard.c)
 *     RemoteDisableScreen @ 0x1C00EA398 (RemoteDisableScreen.c)
 *     CleanupW32ThreadLocks @ 0x1C0112EA0 (CleanupW32ThreadLocks.c)
 *     xxxAddFullScreen @ 0x1C012321C (xxxAddFullScreen.c)
 *     xxxSendMinRectMessages @ 0x1C01240B0 (xxxSendMinRectMessages.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0129A74 (xxxImmUnloadThreadsLayout.c)
 *     xxxWaitForInputIdle @ 0x1C012B420 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012B584 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxChangeClipboardChain @ 0x1C0130244 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0158634 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01C2EF0 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01CCD50 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01CFB7C (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01CFFF0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01D03B0 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01D3000 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F6FC0 (xxxDeferredDesktopRotation.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
