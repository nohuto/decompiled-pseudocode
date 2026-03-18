/*
 * XREFs of FindTimer @ 0x1C00DA984
 * Callers:
 *     TrackMouseEvent @ 0x1C0011C40 (TrackMouseEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C001ADA8 (xxxCancelMouseMoveTracking.c)
 *     SetMouseTrails @ 0x1C0081ACC (SetMouseTrails.c)
 *     xxxSystemTimerProc @ 0x1C0083D00 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     zzzInternalDestroyCaret @ 0x1C0088BEC (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6A0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0136A3C (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     HideAutorunCursor @ 0x1C01CC5F0 (HideAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DBBC0 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E2620 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2B18 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2DC0 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C01E9354 (DecrementCompositedCount.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 *     _KillSystemTimer @ 0x1C01EC0E0 (_KillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01FB430 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C0200508 (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0202630 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C02027B0 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221F74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0222378 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0244CDC (UserKillTimer.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C025360C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02537A8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
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
