/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48
 * Callers:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C000B9D0 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     NtUserGetMenuBarInfo @ 0x1C0020DD0 (NtUserGetMenuBarInfo.c)
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C002DB30 (NtUserDeferWindowPosAndBand.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     cjCopyFontDataW @ 0x1C004DFF0 (cjCopyFontDataW.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00547E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C008616C (xxxGetTitleBarInfoEx.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0088EC8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0089010 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C0090E9C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00A2A60 (TransformMessageBetweenCoordinateSpaces.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     NtUserGetScrollBarInfo @ 0x1C00AA930 (NtUserGetScrollBarInfo.c)
 *     _SetWinEventHook @ 0x1C00B54B4 (_SetWinEventHook.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     NtUserInvalidateRect @ 0x1C00C3350 (NtUserInvalidateRect.c)
 *     NtUserSetWindowPos @ 0x1C00C90D0 (NtUserSetWindowPos.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
 *     NtUserMoveWindow @ 0x1C0112830 (NtUserMoveWindow.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C0113390 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C0113580 (NtUserPhysicalToLogicalPoint.c)
 *     _GetMessagePos @ 0x1C0117EA0 (_GetMessagePos.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0118198 (IsChildWindowDpiIsolationEnabled.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     NtUserGetUpdateRect @ 0x1C0120100 (NtUserGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C012E650 (NtUserGetWindowMinimizeRect.c)
 *     NtUserGetComboBoxInfo @ 0x1C0152A60 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C015AF5C (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C015BB90 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C015C308 (_GetOwnerTransformedMonitorRect.c)
 *     _GetMouseMovePointsEx @ 0x1C01DCC54 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2500 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E5B20 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E6F04 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E7A38 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E8124 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01E9FA8 (zzzStartSonar.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01F9F48 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FBC94 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0220154 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221AC4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C02230B0 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02299E4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C022BC00 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C022D7D0 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C02323C0 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0232B70 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C0235E00 (NtUserSetWindowShowState.c)
 *     _RealChildWindowFromPoint @ 0x1C0244F94 (_RealChildWindowFromPoint.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 18;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v9 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v9 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v9 + 340) )
        {
          v5 = *(_DWORD *)(v9 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7);
          if ( CurrentProcessWin32Process )
            v5 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v9 + 328) & 8) != 0 && (v5 & 0xF) == 2 && (v5 & 0xF0) == 0x20 )
          v5 |= 0x20000000u;
      }
    }
  }
  return v5;
}
