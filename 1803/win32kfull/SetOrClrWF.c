/*
 * XREFs of SetOrClrWF @ 0x1C00C3E94
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     SetWindowState @ 0x1C0007A70 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0007AD0 (ClearWindowState.c)
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C002C088 (InternalInvalidate3.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C0035B8C (xxxRemoveFullScreen.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0036278 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     SetHungFlag @ 0x1C0058F94 (SetHungFlag.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C0064F04 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C0066E0C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C0066E74 (xxxShowOwnedWindows.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C006AE84 (DestroyWindowSmIcon.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C006B6AC (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     PatchThreadWindows @ 0x1C006CC00 (PatchThreadWindows.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C006E23C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C0071AA8 (ImeSetTopmost.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     NtUserSetCoreWindow @ 0x1C00C1070 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00C1910 (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C32A4 (xxxDWP_UpdateUIState.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     SelectWindowRgn @ 0x1C00C4C7C (SelectWindowRgn.c)
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 *     _SelectPalette @ 0x1C00E5978 (_SelectPalette.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00E99D8 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F0E9C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C00F0FB4 (ClrFTrueVis.c)
 *     xxxSetShellWindow @ 0x1C00F1620 (xxxSetShellWindow.c)
 *     SetDialogPointer @ 0x1C00F1B10 (SetDialogPointer.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F2C68 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxGetUpdateRgn @ 0x1C00F5B38 (xxxGetUpdateRgn.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7D00 (SfnPOWERBROADCAST.c)
 *     xxxGetUpdateRect @ 0x1C00FC220 (xxxGetUpdateRect.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100340 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxAddFullScreen @ 0x1C0103394 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C0105400 (NtUserEnableResizeLayoutSynchronization.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C010DE90 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C010E6B0 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C010F2A0 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C0136078 (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C0138E20 (-ClearWFBeingActivated@@YAXPEAUHWND__@@@Z.c)
 *     VerifyChildMenu @ 0x1C013B334 (VerifyChildMenu.c)
 *     xxxCloneWindowPosAndArrangement @ 0x1C019EF98 (xxxCloneWindowPosAndArrangement.c)
 *     ClrWFNoDwmNotify @ 0x1C01A4E40 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01A4F30 (SetMsgBox.c)
 *     SetWFNoDwmNotify @ 0x1C01A4F68 (SetWFNoDwmNotify.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01BF488 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C01BF6EC (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C01BF73C (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01C10E8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     FreeSpb @ 0x1C01CE640 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01E3D68 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C01FABB4 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C01FAF90 (xxxCompositedPaint.c)
 *     ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC (-xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02005C8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 */

char __fastcall SetOrClrWF(int a1, __int64 a2, __int16 a3, int a4)
{
  int v5; // ebp
  int v6; // edi
  int v7; // r14d
  _DWORD *v9; // r10
  char *v10; // rcx
  unsigned int *v11; // rax
  char v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // ebx
  void *v17; // rax

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v9 = *(_DWORD **)(a2 + 40);
  if ( a4 )
  {
    v5 = v9[7];
    v6 = v9[6];
    v7 = v9[58];
  }
  v10 = (char *)v9 + HIBYTE(a3);
  LOBYTE(v11) = v10[16];
  if ( a1 )
    v12 = (unsigned __int8)v11 | a3;
  else
    v12 = (unsigned __int8)v11 & ~(_BYTE)a3;
  v10[16] = v12;
  if ( a4 )
  {
    LODWORD(v11) = IsWindowDesktopComposed(a2);
    if ( (_DWORD)v11 )
    {
      v11 = *(unsigned int **)(a2 + 40);
      v14 = v11[7];
      v15 = v11[6];
      v16 = v11[58];
      if ( v5 != (_DWORD)v14 )
        goto LABEL_12;
      if ( v6 == (_DWORD)v15 && v7 == v16 )
        return (char)v11;
      if ( v5 == (_DWORD)v14 )
      {
        if ( v6 == (_DWORD)v15 )
        {
          LOBYTE(v11) = v7 ^ v16;
          if ( ((v7 ^ v16) & 0x2E00300) == 0 )
            return (char)v11;
          LODWORD(v11) = 1;
          goto LABEL_14;
        }
        v13 = (v6 ^ (unsigned int)v15) & 0x4E27A9;
      }
      else
      {
LABEL_12:
        v13 = (v5 ^ (unsigned int)v14) & 0xB9CF0000;
      }
      LODWORD(v11) = v13 != 0;
LABEL_14:
      if ( (_DWORD)v11 )
      {
        v17 = (void *)ReferenceDwmApiPort(v13, v15, v14);
        LOBYTE(v11) = DwmAsyncChildStyleChange(v17);
      }
    }
  }
  return (char)v11;
}
