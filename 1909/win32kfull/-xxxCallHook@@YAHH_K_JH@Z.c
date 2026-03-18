/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000DC88 (xxxDesktopThreadWaiter.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     xxxSetTrayWindow @ 0x1C0017964 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxCallMsgFilter @ 0x1C00DD700 (xxxCallMsgFilter.c)
 *     xxxNotifyIMEStatus @ 0x1C00F4968 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C010A194 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C0118660 (EditionNotifyShellLanguageHook.c)
 *     xxxGetInputEvent @ 0x1C0131A60 (xxxGetInputEvent.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0152590 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C015E290 (xxxRedrawFrameAndHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F23EC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 *     xxxPointerCallHook @ 0x1C01F11D0 (xxxPointerCallHook.c)
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
    return xxxPointerCallHook(a1, v4, a3, dword_1C02E0DF4[a4]);
LABEL_5:
  if ( v6 == 528 && (_WORD)v7 == 582 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02E0DF4[a4]);
  Valid = *(_QWORD *)(gptiCurrent + 8LL * a4 + 912);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL * a4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v5, v4, (int *)a3, 0LL, 0);
}
