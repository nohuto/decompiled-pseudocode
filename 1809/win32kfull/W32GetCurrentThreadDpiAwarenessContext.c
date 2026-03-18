/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850
 * Callers:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     cjCopyFontDataW @ 0x1C0026910 (cjCopyFontDataW.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C002A620 (TransformMessageBetweenCoordinateSpaces.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C006DF00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C00719B0 (NtUserSetWindowPos.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00853D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C00A55A8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     NtUserGetMenuBarInfo @ 0x1C00ABDB0 (NtUserGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _SetWinEventHook @ 0x1C00B41C4 (_SetWinEventHook.c)
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00B70E0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00B9EE0 (xxxGetTitleBarInfoEx.c)
 *     NtUserInvalidateRect @ 0x1C00C72D0 (NtUserInvalidateRect.c)
 *     _GetMessagePos @ 0x1C00E0550 (_GetMessagePos.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C00F81B0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     NtUserBitBltSysBmp @ 0x1C01065C0 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     NtUserMoveWindow @ 0x1C010AEE0 (NtUserMoveWindow.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C010B570 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C010B730 (NtUserPhysicalToLogicalPoint.c)
 *     InternalGetRealClientRect @ 0x1C010EABC (InternalGetRealClientRect.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0110FE0 (IsChildWindowDpiIsolationEnabled.c)
 *     NtUserGetUpdateRect @ 0x1C01186B0 (NtUserGetUpdateRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0123F50 (NtUserGetWindowMinimizeRect.c)
 *     NtUserGetComboBoxInfo @ 0x1C014C670 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C014FF1C (_ChildWindowFromPointEx.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01557D8 (_GetOwnerTransformedMonitorRect.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0155890 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetMouseMovePointsEx @ 0x1C01C9160 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01CDF84 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01D0F9C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01D2320 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01D2E08 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01D3534 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01D479C (zzzStartSonar.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01E46AC (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01E63BC (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C02087A4 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C020A024 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C020B580 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C0211988 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C0213EB0 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C02159C0 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C021A4A0 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C021AB60 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C021DBC0 (NtUserSetWindowShowState.c)
 *     _RealChildWindowFromPoint @ 0x1C022C400 (_RealChildWindowFromPoint.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v3; // edi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 18;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v6 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v6 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v6 + 340) )
        {
          return *(unsigned int *)(v6 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          if ( CurrentProcessWin32Process )
            return *(unsigned int *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  return v3;
}
