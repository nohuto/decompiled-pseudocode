/*
 * XREFs of SetOrClrWF @ 0x1C000DA60
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     _lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_ @ 0x1C0008730 (_lambda_82e764827df857b4f890f656bc6094c4_--_lambda_invoker_cdecl_.c)
 *     xxxSetShellWindow @ 0x1C0009324 (xxxSetShellWindow.c)
 *     NtUserSetCoreWindow @ 0x1C000BCF0 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C000C9AC (SetWindowSubtreeCoreWindowStatus.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C000FF34 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C001C474 (ImeSetTopmost.c)
 *     xxxSendEraseBkgnd @ 0x1C001C804 (xxxSendEraseBkgnd.c)
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C001D218 (xxxRemoveFullScreen.c)
 *     DestroyWindowSmIcon @ 0x1C001D2E8 (DestroyWindowSmIcon.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C003B9D4 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C006E310 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0072AE4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0073424 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     xxxSetScrollBar @ 0x1C00784FC (xxxSetScrollBar.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00ABB00 (xxxDWP_UpdateUIState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00B689C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B8310 (xxxCreateWindowSmIcon.c)
 *     SetMinimize @ 0x1C00B8C08 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00B8C70 (xxxShowOwnedWindows.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     xxxGetUpdateRgn @ 0x1C00C6F40 (xxxGetUpdateRgn.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     SetHungFlag @ 0x1C00D8654 (SetHungFlag.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00D8C48 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     SetDialogPointer @ 0x1C00E6FD0 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00E7160 (PatchThreadWindows.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     ClrFTrueVis @ 0x1C00F73B8 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     _SelectPalette @ 0x1C00FE484 (_SelectPalette.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C920 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C010EBF0 (SfnPOWERBROADCAST.c)
 *     xxxGetUpdateRect @ 0x1C0118828 (xxxGetUpdateRect.c)
 *     xxxAddFullScreen @ 0x1C012321C (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C0123690 (NtUserEnableResizeLayoutSynchronization.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C012F330 (NtUserSetChildWindowNoActivate.c)
 *     SetWindowState @ 0x1C012FBC0 (SetWindowState.c)
 *     ClearWindowState @ 0x1C012FC20 (ClearWindowState.c)
 *     _RegisterShellHookWindow @ 0x1C01300C0 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C0132020 (_DeregisterShellHookWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     VerifyChildMenu @ 0x1C015E6C4 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ClrWFNoDwmNotify @ 0x1C01C6FD0 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01C70C0 (SetMsgBox.c)
 *     SetWFNoDwmNotify @ 0x1C01C70F8 (SetWFNoDwmNotify.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01E205C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C01E2174 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01E5338 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C01F2C24 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0209C38 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C02221F4 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     xxxUpdateShadowZorder @ 0x1C0222B78 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02271A0 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022900C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02291FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
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
  unsigned int v14; // r8d
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
      if ( v5 != v14 )
        goto LABEL_12;
      if ( v6 == (_DWORD)v15 && v7 == v16 )
        return (char)v11;
      if ( v5 == v14 )
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
        v13 = (v5 ^ v14) & 0xB9CF0000;
      }
      LODWORD(v11) = v13 != 0;
LABEL_14:
      if ( (_DWORD)v11 )
      {
        v17 = (void *)ReferenceDwmApiPort(v13, v15);
        LOBYTE(v11) = DwmAsyncChildStyleChange(v17);
      }
    }
  }
  return (char)v11;
}
