/*
 * XREFs of FreeHwndList @ 0x1C002A0E0
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00095B4 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0028CEC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C0029040 (NtUserBuildHwndList.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     _FindWindowEx @ 0x1C0029C30 (_FindWindowEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     xxxInternalEnumWindow @ 0x1C005A814 (xxxInternalEnumWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0061534 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxShowOwnedWindows @ 0x1C0066E74 (xxxShowOwnedWindows.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C32A4 (xxxDWP_UpdateUIState.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DA348 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E8258 (UpdateMonitorForWindowAndChildren.c)
 *     xxxDesktopRecalc @ 0x1C00F2340 (xxxDesktopRecalc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     AssociateInputContextEx @ 0x1C00FD77C (AssociateInputContextEx.c)
 *     xxxClientShutdown @ 0x1C00FEEE8 (xxxClientShutdown.c)
 *     DestroyInputContext @ 0x1C0130450 (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C0135280 (xxxArrangeIconicWindows.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01A3AB8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01A5050 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01A55FC (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01AE400 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C01AE634 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01BB370 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01BB73C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0202ECC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeHwndList(struct tagBWL *a1)
{
  __int64 *v1; // r8
  __int64 *v2; // rdx
  __int64 result; // rax
  struct tagBWL *v4; // r8

  v1 = (__int64 *)gpbwlList;
  v2 = (__int64 *)gpbwlList;
  if ( gpbwlList )
  {
    while ( v2 != (__int64 *)a1 )
    {
      result = *v2;
      v1 = v2;
      v2 = (__int64 *)result;
      if ( !result )
        return result;
    }
    result = *(_QWORD *)a1;
    *v1 = *(_QWORD *)a1;
    v4 = pbwlCache;
    if ( pbwlCache )
    {
      if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = a1;
        a1 = v4;
      }
      return Win32FreePool(a1);
    }
    else
    {
      pbwlCache = a1;
    }
  }
  return result;
}
