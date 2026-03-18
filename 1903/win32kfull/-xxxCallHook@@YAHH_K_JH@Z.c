/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000E508 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0010D60 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxGetInputEvent @ 0x1C0015AE0 (xxxGetInputEvent.c)
 *     xxxSetTrayWindow @ 0x1C0017B08 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0017BF0 (xxxRedrawTitle.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     xxxNotifyIMEStatus @ 0x1C011A958 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C013E530 (EditionNotifyShellLanguageHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01517D0 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C015D2E0 (xxxRedrawFrameAndHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E8124 (xxxCallJournalPlaybackHook.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F256C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxIsDragging @ 0x1C0248118 (xxxIsDragging.c)
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkNextValid @ 0x1C00B459C (PhkNextValid.c)
 *     xxxPointerCallHook @ 0x1C01F1350 (xxxPointerCallHook.c)
 */

__int64 __fastcall xxxCallHook(int a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 Valid; // rcx

  v4 = a2;
  v5 = a1;
  if ( a4 == 4 )
  {
    v6 = *(_DWORD *)(a3 + 16);
    v7 = *(_QWORD *)(a3 + 8);
    goto LABEL_3;
  }
  if ( a4 == 3 )
    goto LABEL_11;
  if ( a4 )
  {
    if ( a4 == -1 || a4 == 6 )
    {
LABEL_11:
      v6 = *(_DWORD *)(a3 + 8);
      v7 = *(_QWORD *)(a3 + 16);
      goto LABEL_3;
    }
    if ( a4 != 12 )
    {
      v6 = 0;
      LOWORD(v7) = 0;
      goto LABEL_4;
    }
    v6 = *(_DWORD *)(a3 + 24);
    v7 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v6 = *(_DWORD *)a3;
    LOWORD(v7) = 0;
  }
LABEL_3:
  if ( v6 - 577 > 3 )
  {
LABEL_4:
    if ( v6 < 0x245 || v6 > 0x257 || v6 == 589 )
      goto LABEL_5;
  }
  if ( v6 != 595 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02E1834[a4]);
LABEL_5:
  if ( v6 == 528 && (_WORD)v7 == 582 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02E1834[a4]);
  Valid = *(_QWORD *)(gptiCurrent + 8LL * a4 + 912);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * a4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v5, v4, (int *)a3, 0LL, 0);
}
