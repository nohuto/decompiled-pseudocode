/*
 * XREFs of BuildHwndList @ 0x1C002A170
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00095B4 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0028CEC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C0029040 (NtUserBuildHwndList.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
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
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0202ECC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C002A360 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(_QWORD *a1, char a2, __int64 a3)
{
  struct tagBWL *v3; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rax
  struct tagBWL *result; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  struct tagWND *v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx

  v3 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v15 = Win32AllocPool(296LL, 1819767637LL);
    v3 = (struct tagBWL *)v15;
    if ( !v15 )
      return 0LL;
    *(_QWORD *)(v15 + 16) = v15 + 280;
  }
  *((_QWORD *)v3 + 3) = a3;
  for ( *((_QWORD *)v3 + 1) = (char *)v3 + 32; a1; a1 = (_QWORD *)a1[8] )
  {
    v7 = *((_QWORD *)v3 + 3);
    if ( (a2 & 0x20) == 0 || (v14 = *(_DWORD *)(a1[5] + 236LL), (unsigned int)(v14 - 1) <= 1) || v14 == 16 )
    {
      if ( (a2 & 0x40) == 0
        || (v16 = a1[5], (*(_BYTE *)(v16 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v16 + 20) & 0x40) != 0
        || !(unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 255LL, a3) )
      {
        if ( !v7 || v7 == a1[2] )
        {
          **((_QWORD **)v3 + 1) = *a1;
          *((_QWORD *)v3 + 1) += 8LL;
          v10 = *((_QWORD *)v3 + 1);
          if ( v10 == *((_QWORD *)v3 + 2) )
          {
            v11 = v10 - (_QWORD)v3;
            v12 = UserReAllocPool(v3, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
            if ( !v12 )
              break;
            v3 = (struct tagBWL *)v12;
            *(_QWORD *)(v12 + 8) = v11 + v12;
            *(_QWORD *)(v12 + 16) = v11 + v12 + 64;
          }
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v13 = (struct tagWND *)a1[11];
      if ( v13 )
      {
        v3 = InternalBuildHwndList(v3, v13, 3LL);
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
