/*
 * XREFs of BuildHwndList @ 0x1C0070DA0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     NtUserBuildHwndList @ 0x1C006FAB0 (NtUserBuildHwndList.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006FDDC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     _FindWindowEx @ 0x1C0070458 (_FindWindowEx.c)
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
 *     xxxForceWindowToDpiForTest @ 0x1C01D31F4 (xxxForceWindowToDpiForTest.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C022B8B4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C0070FA0 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00711FC (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(struct tagWND *a1, char a2, __int64 a3)
{
  struct tagBWL *v3; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rax
  struct tagBWL *result; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  struct tagWND *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx

  v3 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v17 = Win32AllocPool(296LL, 1819767637LL);
    v3 = (struct tagBWL *)v17;
    if ( !v17 )
      return 0LL;
    *(_QWORD *)(v17 + 16) = v17 + 280;
  }
  *((_QWORD *)v3 + 3) = a3;
  for ( *((_QWORD *)v3 + 1) = (char *)v3 + 32; a1; a1 = (struct tagWND *)*((_QWORD *)a1 + 8) )
  {
    v7 = *((_QWORD *)v3 + 3);
    if ( (a2 & 0x20) == 0
      || (v14 = *((_QWORD *)a1 + 5), v15 = *(_DWORD *)(v14 + 236), (unsigned int)(v15 - 1) <= 1)
      || v15 == 16
      || (a2 & 0x10) != 0 && (*(_DWORD *)(v14 + 232) & 0x1000000) != 0 )
    {
      if ( (a2 & 0x40) == 0
        || (v18 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v18 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v18 + 20) & 0x40) != 0
        || !IsWindowSubjectToShellWindowBehavior(a1, 255LL) )
      {
        if ( !v7 || v7 == *((_QWORD *)a1 + 2) )
        {
          **((_QWORD **)v3 + 1) = *(_QWORD *)a1;
          *((_QWORD *)v3 + 1) += 8LL;
          v10 = *((_QWORD *)v3 + 1);
          if ( v10 == *((_QWORD *)v3 + 2) )
          {
            v11 = v10 - (_QWORD)v3;
            v12 = UserReAllocPool(v3, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
            if ( !v12 )
              break;
            v13 = v12 + v11;
            v3 = (struct tagBWL *)v12;
            *(_QWORD *)(v12 + 8) = v13;
            *(_QWORD *)(v12 + 16) = v13 + 64;
          }
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v16 = (struct tagWND *)*((_QWORD *)a1 + 11);
      if ( v16 )
      {
        v3 = InternalBuildHwndList(v3, v16, 3u);
        if ( *((_QWORD *)v3 + 1) >= *((_QWORD *)v3 + 2) )
          break;
      }
    }
    if ( (a2 & 2) == 0 )
      break;
  }
  v8 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( (unsigned __int64)v8 >= *((_QWORD *)v3 + 2) )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *v8 = 1LL;
  if ( (a2 & 8) != 0 )
    v3 = InternalRebuildHwndListForIMEClass(v3);
  result = v3;
  *((_QWORD *)v3 + 3) = gptiCurrent;
  *(_QWORD *)v3 = gpbwlList;
  gpbwlList = v3;
  return result;
}
