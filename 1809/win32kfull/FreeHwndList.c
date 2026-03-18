/*
 * XREFs of FreeHwndList @ 0x1C0070D10
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     NtUserBuildHwndList @ 0x1C006FAB0 (NtUserBuildHwndList.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006FDDC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     _FindWindowEx @ 0x1C0070458 (_FindWindowEx.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00724BC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxDWP_UpdateUIState @ 0x1C00ABB00 (xxxDWP_UpdateUIState.c)
 *     xxxShowOwnedWindows @ 0x1C00B8C70 (xxxShowOwnedWindows.c)
 *     xxxDesktopRecalc @ 0x1C00BCB48 (xxxDesktopRecalc.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00C7A58 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CFCF4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2738 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C920 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     AssociateInputContextEx @ 0x1C011A2E0 (AssociateInputContextEx.c)
 *     xxxClientShutdown @ 0x1C011E060 (xxxClientShutdown.c)
 *     DestroyInputContext @ 0x1C014FDBC (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C0153AD0 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01C1F34 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C5CB4 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01C71F4 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01C752C (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01D14FC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01D3000 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01DE254 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C022B8B4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
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
