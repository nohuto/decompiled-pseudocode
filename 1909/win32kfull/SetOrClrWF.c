/*
 * XREFs of SetOrClrWF @ 0x1C008990C
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     xxxSetShellWindow @ 0x1C000EFF4 (xxxSetShellWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C0014C84 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     NtUserSetCoreWindow @ 0x1C00167F0 (NtUserSetCoreWindow.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0016B88 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018DDC (SetWindowSubtreeCoreWindowStatus.c)
 *     SetWindowGroupBand @ 0x1C0019924 (SetWindowGroupBand.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C001B0B0 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C0036530 (ImeSetTopmost.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C0037F30 (xxxRemoveFullScreen.c)
 *     DestroyWindowSmIcon @ 0x1C0038000 (DestroyWindowSmIcon.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C003B200 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C003B4F8 (xxxSendEraseBkgnd.c)
 *     xxxDoPaint @ 0x1C003B610 (xxxDoPaint.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C005124C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00513E8 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0051838 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0055C30 (SfnPOWERBROADCAST.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     SetDialogPointer @ 0x1C00D6A20 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00D6BA0 (PatchThreadWindows.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 *     _SelectPalette @ 0x1C00E1194 (_SelectPalette.c)
 *     xxxGetUpdateRgn @ 0x1C00EC440 (xxxGetUpdateRgn.c)
 *     SelectWindowRgn @ 0x1C00EE40C (SelectWindowRgn.c)
 *     ClrFTrueVis @ 0x1C00EF728 (ClrFTrueVis.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxAddFullScreen @ 0x1C0108784 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C0109D40 (NtUserEnableResizeLayoutSynchronization.c)
 *     xxxCreateWindowSmIcon @ 0x1C0109E88 (xxxCreateWindowSmIcon.c)
 *     SetWindowState @ 0x1C0113780 (SetWindowState.c)
 *     ClearWindowState @ 0x1C01137E0 (ClearWindowState.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C0114C50 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C0115D50 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C0117800 (_DeregisterShellHookWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C012C39C (xxxDWP_UpdateUIState.c)
 *     xxxGetUpdateRect @ 0x1C012ECD8 (xxxGetUpdateRect.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     SetHungFlag @ 0x1C0135468 (SetHungFlag.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0136D84 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     _lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_ @ 0x1C0162360 (_lambda_82e764827df857b4f890f656bc6094c4_--_lambda_invoker_cdecl_.c)
 *     VerifyChildMenu @ 0x1C0165C60 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ClrWFNoDwmNotify @ 0x1C01DA214 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01DA320 (SetMsgBox.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F80CC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C01F81E4 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F8234 (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FA97C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C0208C24 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0221188 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C023ABA8 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C023B074 (xxxCompositedPaint.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023E808 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241498 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 */

char __fastcall SetOrClrWF(int a1, __int64 a2, unsigned __int16 a3, int a4)
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
  v10 = (char *)v9 + ((unsigned __int64)a3 >> 8);
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
        v13 = (v5 ^ (unsigned int)v14) & 0xB1CF0000;
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
