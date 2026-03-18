/*
 * XREFs of FreeHwndList @ 0x1C00CC9E0
 * Callers:
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008712C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     _FindWindowEx @ 0x1C00CB8F0 (_FindWindowEx.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00CCA68 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D94F8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FDB68 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxDesktopRecalc @ 0x1C0115E7C (xxxDesktopRecalc.c)
 *     AssociateInputContextEx @ 0x1C011F7B0 (AssociateInputContextEx.c)
 *     xxxClientShutdown @ 0x1C0126ED4 (xxxClientShutdown.c)
 *     DestroyInputContext @ 0x1C015623C (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C0159B10 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01D5FEC (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D9048 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01DA5B0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01DA8E4 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E611C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3D8C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F416C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02448F8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
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
