/*
 * XREFs of _PostMessage @ 0x1C0015330
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0011998 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     TrackMouseEvent @ 0x1C0011C40 (TrackMouseEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0017D28 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C001ADA8 (xxxCancelMouseMoveTracking.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     SetMouseTrails @ 0x1C0081ACC (SetMouseTrails.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxImmProcessKey @ 0x1C00B185C (xxxImmProcessKey.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FDB68 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     PostDeviceNotification @ 0x1C010DA04 (PostDeviceNotification.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C012B0CC (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     NtUserEndMenu @ 0x1C013F420 (NtUserEndMenu.c)
 *     _SetMagnificationInputTransform @ 0x1C015ED40 (_SetMagnificationInputTransform.c)
 *     PowerOffGdi @ 0x1C0160D20 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01DB284 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01E40C4 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01EB5C0 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01EF880 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01F7E44 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0200870 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C0207190 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C02094B0 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C020BF68 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C020C0EC (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C020C304 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     _PostUIActions @ 0x1C0239C90 (_PostUIActions.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023A714 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023E670 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C001632C (_PostMessageExtended.c)
 */

__int64 __fastcall PostMessage(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = PostMessageExtended(a1, a2, a3, a4, 0LL);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
