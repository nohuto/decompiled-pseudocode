/*
 * XREFs of FreeHwndList @ 0x1C006E0B0
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000FCB8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxDesktopRecalc @ 0x1C0010B68 (xxxDesktopRecalc.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0011AAC (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018C6C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     _FindWindowEx @ 0x1C006CFC0 (_FindWindowEx.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006E138 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00D98A8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00EFC34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     AssociateInputContextEx @ 0x1C00FA3E0 (AssociateInputContextEx.c)
 *     xxxClientShutdown @ 0x1C01026EC (xxxClientShutdown.c)
 *     xxxDWP_UpdateUIState @ 0x1C012C39C (xxxDWP_UpdateUIState.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C01357E0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     DestroyInputContext @ 0x1C0156FFC (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C015AAC0 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01D5E5C (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D8EC8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01DA430 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01DA764 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E5F9C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F3FEC (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02441B8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
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
