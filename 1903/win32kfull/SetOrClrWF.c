/*
 * XREFs of SetOrClrWF @ 0x1C0044F3C
 * Callers:
 *     xxxSetShellWindow @ 0x1C000B20C (xxxSetShellWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C000D010 (xxxDCETrackCaptionButton.c)
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     SetHungFlag @ 0x1C0013594 (SetHungFlag.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     xxxSetScrollBar @ 0x1C002778C (xxxSetScrollBar.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C0042650 (NtUserSetCoreWindow.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C0084C28 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C008883C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x1C0089E90 (SetWindowGroupBand.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008F7AC (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C00957F8 (ImeSetTopmost.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C0097200 (xxxRemoveFullScreen.c)
 *     DestroyWindowSmIcon @ 0x1C00972D0 (DestroyWindowSmIcon.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C009A728 (xxxSendEraseBkgnd.c)
 *     xxxDoPaint @ 0x1C009A840 (xxxDoPaint.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00B03EC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00B0588 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00B09D8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C00B4E80 (SfnPOWERBROADCAST.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B9750 (xxxCreateWindowSmIcon.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     InternalInvalidate3 @ 0x1C00C5A38 (InternalInvalidate3.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     SetDialogPointer @ 0x1C00F6930 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00F6AB0 (PatchThreadWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C01023E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 *     _SelectPalette @ 0x1C0106D94 (_SelectPalette.c)
 *     xxxGetUpdateRgn @ 0x1C0111590 (xxxGetUpdateRgn.c)
 *     SelectWindowRgn @ 0x1C0114004 (SelectWindowRgn.c)
 *     ClrFTrueVis @ 0x1C0114A74 (ClrFTrueVis.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C01183FC (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxGetUpdateRect @ 0x1C01202E0 (xxxGetUpdateRect.c)
 *     xxxAddFullScreen @ 0x1C012D744 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C012EBF0 (NtUserEnableResizeLayoutSynchronization.c)
 *     SetWindowState @ 0x1C0139780 (SetWindowState.c)
 *     ClearWindowState @ 0x1C01397E0 (ClearWindowState.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C013AC50 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C013BE10 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C013D8E0 (_DeregisterShellHookWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     _lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_ @ 0x1C0161390 (_lambda_82e764827df857b4f890f656bc6094c4_--_lambda_invoker_cdecl_.c)
 *     VerifyChildMenu @ 0x1C0164690 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ClrWFNoDwmNotify @ 0x1C01DA394 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01DA4A0 (SetMsgBox.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F837C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C01F8494 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F84E4 (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FAC2C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02216C8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C023B1C8 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023EE28 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241AB8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02444F0 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
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
