/*
 * XREFs of FindTimer @ 0x1C007A674
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0015130 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00E9B58 (xxxCancelMouseMoveTracking.c)
 *     TrackMouseEvent @ 0x1C00EA080 (TrackMouseEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA3E4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00EA478 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00F6070 (zzzInternalDestroyCaret.c)
 *     SetMouseTrails @ 0x1C01394B4 (SetMouseTrails.c)
 *     HideAutorunCursor @ 0x1C01CC460 (HideAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DBA40 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E24A0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2998 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2C40 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C01E91D4 (DecrementCompositedCount.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     _KillSystemTimer @ 0x1C01EBF60 (_KillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01FB180 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C0200258 (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0202380 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C0202500 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0221E38 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C024459C (UserKillTimer.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0252ECC (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0253068 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C007A780 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  unsigned int v12; // ebp
  _QWORD *i; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rcx

  v5 = 0LL;
  v8 = a2;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0
        && ((v14 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v14, a2) == *(_QWORD *)(v11[3] + 416LL)
         || !a1 && ((a3 ^ *((_BYTE *)v11 + 48)) & 4) == 0) )
      {
        if ( a4 )
          FreeTimer((struct tagTIMER *)(i - 14));
        v15 = 0LL;
        v12 = 1;
        if ( !a4 )
          v15 = i - 14;
        v11 = v15;
        break;
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
