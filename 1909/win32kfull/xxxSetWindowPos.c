/*
 * XREFs of xxxSetWindowPos @ 0x1C006C7B4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0009F30 (xxxSwitchToThisWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetShellWindow @ 0x1C000EFF4 (xxxSetShellWindow.c)
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     NtUserSetWindowPos @ 0x1C006A7A0 (NtUserSetWindowPos.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxMoveWindow @ 0x1C00ED66C (xxxMoveWindow.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C00EFD8C (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxShowScrollBar @ 0x1C00F6D14 (xxxShowScrollBar.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetMenu @ 0x1C0155D74 (xxxSetMenu.c)
 *     xxxDrawMenuBar @ 0x1C015A140 (xxxDrawMenuBar.c)
 *     xxxActivateEnabledPopup @ 0x1C015A4AC (xxxActivateEnabledPopup.c)
 *     xxxRedrawFrameAndHook @ 0x1C015E290 (xxxRedrawFrameAndHook.c)
 *     xxxRedrawFrame @ 0x1C015EAE0 (xxxRedrawFrame.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01DA764 (xxxMetricsRecalc.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E1818 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E5DD0 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E5ED0 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01E7A10 (xxxEnableNonClientDpiScaling.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E7E30 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4A50 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F61A0 (xxxSwitchWndProc.c)
 *     xxxSetInternalWindowPos @ 0x1C01F83B4 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxUpdateShadowZorder @ 0x1C023ABA8 (xxxUpdateShadowZorder.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C001A3CC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027760 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C006C970 (xxxSetWindowPosAndBand.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  int v7; // esi
  char v9; // di
  char v10; // al
  unsigned int v11; // ebp
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *TopLevelWindow; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  struct tagWND *v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF

  v7 = a7;
  if ( a2
    || !a1
    || (v9 = 1, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) == 0)
    || !CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v22)
    || !*(_DWORD *)(v22 + 20)
    || (v7 & 0xFFFFFFEF) != 3 )
  {
    v9 = 0;
  }
  v10 = v7;
  if ( !v9 )
    v10 = v7;
  v11 = xxxSetWindowPosAndBand(a1, a5, a6, v10, 0);
  if ( v11 )
  {
    if ( v9 )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground )
      {
        TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
        TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
        if ( TopLevelWindow )
        {
          v19 = 0LL;
          v20 = 0LL;
          v21 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v19 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
          v20 = TopLevelWindow;
          HMLockObject(TopLevelWindow);
          xxxSetWindowPosAndBand(TopLevelWindow, 0, 0, 19, 0);
          ThreadUnlock1(v17, v16, v18);
        }
      }
    }
  }
  return v11;
}
