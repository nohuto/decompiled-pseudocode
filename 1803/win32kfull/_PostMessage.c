/*
 * XREFs of _PostMessage @ 0x1C006DAA0
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C0009E1C (_SetMagnificationInputTransform.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostDeviceNotification @ 0x1C005A518 (PostDeviceNotification.c)
 *     xxxCancelMouseMoveTracking @ 0x1C005E57C (xxxCancelMouseMoveTracking.c)
 *     TrackMouseEvent @ 0x1C0064544 (TrackMouseEvent.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006E9FC (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B5D90 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     SetMouseTrails @ 0x1C00BFDA4 (SetMouseTrails.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DA348 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 *     xxxImmProcessKey @ 0x1C00EA7F4 (xxxImmProcessKey.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010102C (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     NtUserEndMenu @ 0x1C01122F0 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C0138BE0 (PowerOffGdi.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01A47F4 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01A5EF0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01AC270 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01B3690 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01B7760 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01BEF90 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01CEB98 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01D099C (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01D0AC4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01D0C2C (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     _PostUIActions @ 0x1C01F9450 (_PostUIActions.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01FD714 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     zzzPostInertiaMessage @ 0x1C01FDEA4 (zzzPostInertiaMessage.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C003D9F8 (_PostMessageExtended.c)
 */

__int64 __fastcall PostMessage(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct tagQMSG *v5; // rcx

  v4 = 0;
  v5 = PostMessageExtended(a1, a2, a3, a4, 0LL);
  if ( v5 < MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0LL;
  return v4;
}
