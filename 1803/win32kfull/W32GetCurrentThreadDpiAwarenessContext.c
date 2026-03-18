/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350
 * Callers:
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000CED4 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     NtUserBitBltSysBmp @ 0x1C000D180 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00144C0 (NtUserDeferWindowPosAndBand.c)
 *     _GetIconSize @ 0x1C0016068 (_GetIconSize.c)
 *     NtUserInvalidateRect @ 0x1C002A820 (NtUserInvalidateRect.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     NtUserSetWindowPos @ 0x1C0034750 (NtUserSetWindowPos.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     xxxGetCursorPos @ 0x1C003C260 (xxxGetCursorPos.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C003C520 (NtUserPhysicalToLogicalPoint.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0041E60 (TransformMessageBetweenCoordinateSpaces.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0056FA4 (xxxGetTitleBarInfoEx.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C00666E0 (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0066C3C (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     _GetCursorInfo @ 0x1C006A980 (_GetCursorInfo.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     NtUserGetMenuBarInfo @ 0x1C00C34F0 (NtUserGetMenuBarInfo.c)
 *     xxxDCEWindowHitTest @ 0x1C00D62E0 (xxxDCEWindowHitTest.c)
 *     _SetWinEventHook @ 0x1C00D77D0 (_SetWinEventHook.c)
 *     _GetPointerDeviceRects @ 0x1C00E05F0 (_GetPointerDeviceRects.c)
 *     NtUserMoveWindow @ 0x1C00F2030 (NtUserMoveWindow.c)
 *     InternalGetRealClientRect @ 0x1C00F3E30 (InternalGetRealClientRect.c)
 *     _GetMessagePos @ 0x1C00F5880 (_GetMessagePos.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00F6010 (NtUserLogicalToPhysicalPoint.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F79E8 (IsChildWindowDpiIsolationEnabled.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     NtUserGetUpdateRect @ 0x1C00FC0C0 (NtUserGetUpdateRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0102700 (NtUserGetWindowMinimizeRect.c)
 *     NtUserGetComboBoxInfo @ 0x1C012C1A0 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C012D97C (_ChildWindowFromPointEx.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0133E00 (_GetOwnerTransformedMonitorRect.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0133EB0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetMouseMovePointsEx @ 0x1C01A70BC (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01AB2E0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01ADEFC (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01AF4C4 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01AFFA0 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01B052C (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01B21B8 (zzzStartSonar.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01C04C4 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01C1C0C (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C01E2934 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C01E5640 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01EB9C0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01ED9E0 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01EF340 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C01F2EE0 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01F3500 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C01F6130 (NtUserSetWindowShowState.c)
 *     _RealChildWindowFromPoint @ 0x1C02034F8 (_RealChildWindowFromPoint.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
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
