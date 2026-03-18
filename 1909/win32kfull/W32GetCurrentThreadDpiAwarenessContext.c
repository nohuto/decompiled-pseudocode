/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C00140C0 (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C001465C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0016514 (xxxGetTitleBarInfoEx.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0023250 (NtUserDeferWindowPosAndBand.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0043830 (TransformMessageBetweenCoordinateSpaces.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     NtUserGetScrollBarInfo @ 0x1C004B710 (NtUserGetScrollBarInfo.c)
 *     _SetWinEventHook @ 0x1C0056264 (_SetWinEventHook.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     NtUserInvalidateRect @ 0x1C0064A20 (NtUserInvalidateRect.c)
 *     NtUserSetWindowPos @ 0x1C006A7A0 (NtUserSetWindowPos.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0088738 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0088880 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C008A0A0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     cjCopyFontDataW @ 0x1C0091E70 (cjCopyFontDataW.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C009DF28 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C009DF64 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009E040 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00EAB30 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 *     NtUserMoveWindow @ 0x1C00ED450 (NtUserMoveWindow.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00ED6E0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00ED8D0 (NtUserPhysicalToLogicalPoint.c)
 *     _GetMessagePos @ 0x1C00F1E60 (_GetMessagePos.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F2158 (IsChildWindowDpiIsolationEnabled.c)
 *     NtUserGetUpdateRect @ 0x1C00FE560 (NtUserGetUpdateRect.c)
 *     _GetPointerDeviceRects @ 0x1C01081CC (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01098E0 (NtUserGetWindowMinimizeRect.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     NtUserGetMenuBarInfo @ 0x1C012D200 (NtUserGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     NtUserGetComboBoxInfo @ 0x1C0153820 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C015BF0C (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C015CB40 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C015D2B8 (_GetOwnerTransformedMonitorRect.c)
 *     _GetMouseMovePointsEx @ 0x1C01DCAD4 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2380 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E59A0 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E6D84 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E78B8 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01E9E28 (zzzStartSonar.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01F9C98 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FB9E4 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C021FC14 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221584 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0222B70 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02293C4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C022B5E0 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C022D1B0 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C0231DA0 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0232550 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C02357E0 (NtUserSetWindowShowState.c)
 *     _RealChildWindowFromPoint @ 0x1C0244854 (_RealChildWindowFromPoint.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // ebx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 18;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v8 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v8 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v8 + 340) )
        {
          v4 = *(_DWORD *)(v8 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
          if ( CurrentProcessWin32Process )
            v4 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v8 + 328) & 8) != 0 && (v4 & 0xF) == 2 && (v4 & 0xF0) == 0x20 )
          v4 |= 0x20000000u;
      }
    }
  }
  return v4;
}
