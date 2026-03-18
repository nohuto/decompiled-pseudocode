/*
 * XREFs of _PostMessage @ 0x1C00DC980
 * Callers:
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C000C028 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B398C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     SetMouseTrails @ 0x1C00BD258 (SetMouseTrails.c)
 *     _SetMagnificationInputTransform @ 0x1C00C981C (_SetMagnificationInputTransform.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC2C8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     TrackMouseEvent @ 0x1C00DC540 (TrackMouseEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2738 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     PostDeviceNotification @ 0x1C0103C0C (PostDeviceNotification.c)
 *     xxxImmProcessKey @ 0x1C01042F4 (xxxImmProcessKey.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     NtUserEndMenu @ 0x1C01348F0 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C01591A0 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01C7E50 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01CF480 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01D1110 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01D5EA0 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01D9F90 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E1B50 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01F3200 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01F50E0 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F5200 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01F53A8 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     _PostUIActions @ 0x1C0221560 (_PostUIActions.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0221F70 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02261E8 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     zzzPostInertiaMessage @ 0x1C0226BCC (zzzPostInertiaMessage.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C002663C (_PostMessageExtended.c)
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
