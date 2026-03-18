/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x1C0028C60
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0002CA0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570 (NtUserDisplayConfigSetDeviceInfo.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0004870 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0013464 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetHDevName @ 0x1C0013910 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0013DC0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     GreCreateCompatibleDC @ 0x1C001DD10 (GreCreateCompatibleDC.c)
 *     W32CalloutDispatch @ 0x1C0025DE0 (W32CalloutDispatch.c)
 *     UserLeaveUserCritSec @ 0x1C002A3D0 (UserLeaveUserCritSec.c)
 *     UserThreadCallout @ 0x1C002ABF0 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 *     NtUserGetKeyboardLayout @ 0x1C002B3A0 (NtUserGetKeyboardLayout.c)
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     NtUserMapVirtualKeyEx @ 0x1C002B980 (NtUserMapVirtualKeyEx.c)
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C002D540 (UserDeleteW32Thread.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C002F2E0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C00348E0 (NtMITSetInputDelegationMode.c)
 *     NtUserGetAsyncKeyState @ 0x1C0038940 (NtUserGetAsyncKeyState.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0038FB0 (NtUserEnumDisplayMonitors.c)
 *     NtUserLockCursor @ 0x1C003B460 (NtUserLockCursor.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C003E880 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C0041F90 (NtGdiDdDDISetDisplayMode.c)
 *     ReferenceDwmApiPort @ 0x1C0047D00 (ReferenceDwmApiPort.c)
 *     NtUserSetSysColors @ 0x1C0048D20 (NtUserSetSysColors.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004A070 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C004A2B0 (NtUserQueryDisplayConfig.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C004A890 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C004AB20 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtUserChangeDisplaySettings @ 0x1C004B0F0 (NtUserChangeDisplaySettings.c)
 *     NtRIMOnPnpNotification @ 0x1C004E7C0 (NtRIMOnPnpNotification.c)
 *     UserGetDesktopDC @ 0x1C005E630 (UserGetDesktopDC.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C005FC28 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0060990 (xxxCreateSystemThreads.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00649F0 (NtUserActivateKeyboardLayout.c)
 *     NtUserVkKeyScanEx @ 0x1C0064D60 (NtUserVkKeyScanEx.c)
 *     NtUserToUnicodeEx @ 0x1C0065010 (NtUserToUnicodeEx.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006B700 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C006C250 (W32kEtwEnableCallback.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0072B38 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserReleaseDC @ 0x1C00757F0 (UserReleaseDC.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 *     UserDeleteW32Process @ 0x1C00795C0 (UserDeleteW32Process.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C0079D00 (NtUserGetKeyboardLayoutList.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0079F80 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtMITActivateInputProcessing @ 0x1C007A4D0 (NtMITActivateInputProcessing.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C007A6A0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C007BBA0 (NtUserCheckProcessSession.c)
 *     UserProcessFreezeCallout @ 0x1C00819B4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0082608 (UserProcessThawCallout.c)
 *     NtMITSetInputCallbacks @ 0x1C0083BC0 (NtMITSetInputCallbacks.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0086C40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     NtMITUpdateInputGlobals @ 0x1C0087BA0 (NtMITUpdateInputGlobals.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008A200 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C008A300 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C008A770 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C008ABF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C008B770 (NtMITCoreMsgKOpenConnectionTo.c)
 *     InitSystemThread @ 0x1C00904B0 (InitSystemThread.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0091010 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0091070 (AcquireCriticalSectionAndCheckState.c)
 *     NtUserRegisterManipulationThread @ 0x1C0094160 (NtUserRegisterManipulationThread.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00958B0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     UserPowerInfoCallout @ 0x1C0095E9C (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00972E0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     NtUserRegisterSessionPort @ 0x1C00979C0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0097AB0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0097CC0 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00A1410 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtUserClipCursor @ 0x1C00A1DF0 (NtUserClipCursor.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00A25E0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A2C80 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3890 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3990 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A3CB0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A3FF0 (xxxSendWinlogonPowerMessage.c)
 *     ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00DFE40 (--0DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C00E002C (UserGetDesktopIdForCurrentThread.c)
 *     ??$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$06@1@PEAU?$AlpcReply@$06@1@G@Z @ 0x1C00E0818 (--$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$06@1@PEAU-$AlpcReply@$06.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@G@Z @ 0x1C00E09C8 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00E1A40 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00E1E20 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E23AC (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C00E2830 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00E3750 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00E3F24 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     UserProcessTimerDelayCallout @ 0x1C00E4610 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00E4764 (UserProcessTimerStatisticsCallout.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00E5520 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtConfigureInputSpace @ 0x1C00ECB10 (NtConfigureInputSpace.c)
 *     NtMITDeactivateInputProcessing @ 0x1C00ECE50 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C00ECFE0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00ED180 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C00ED340 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowCreated @ 0x1C00ED540 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C00ED670 (NtMITMinuserWindowDestroyed.c)
 *     NtMITSetLastInputRecipient @ 0x1C00ED7A0 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00ED970 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00EDAF0 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00EDC10 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C00EDD50 (NtMITUninitMinuserThread.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00EDF00 (NtMITWaitForMultipleObjectsEx.c)
 *     NtSetCursorInputSpace @ 0x1C00EDFA0 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C00EE140 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C00EE310 (NtSetShellCursorState.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00EE510 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C00EE6A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C00EE7F0 (NtUserEnableTouchPad.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00EE9A0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetClipCursor @ 0x1C00EEEF0 (NtUserGetClipCursor.c)
 *     NtUserGetPointerCursorId @ 0x1C00EF030 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00EF110 (NtUserGetPointerFrameArrivalTimes.c)
 *     NtUserGetPointerInfoList @ 0x1C00EF210 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C00EF660 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C00EF780 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C00EF890 (NtUserGetRawPointerDeviceData.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C00EFAB0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00EFC90 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00F0000 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00F0260 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00F03E0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00F05A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00F0740 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00F0910 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00F0D20 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00F1030 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetDisplayConfig @ 0x1C00F1220 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00F17E0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00F1BE0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserStopAndEndInertia @ 0x1C00F1F80 (NtUserStopAndEndInertia.c)
 *     NtUserSystemParametersInfo @ 0x1C00F20E0 (NtUserSystemParametersInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C00F31C0 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C00F3300 (NtUserUnregisterSessionPort.c)
 *     NtMapVisualRelativePoints @ 0x1C00F36A0 (NtMapVisualRelativePoints.c)
 *     UserFindBaseWindowHandle @ 0x1C00F3FDC (UserFindBaseWindowHandle.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00F5A60 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00FA480 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00FA700 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00FA860 (NtGdiGetCertificateSize.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00FE790 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00FECE0 (NtHWCursorUpdatePointer.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C010C040 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C010C3A0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C010C540 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C0132120 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0132330 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0132530 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0148CD0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0149D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C014C5A4 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CD70 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C014D140 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01524E0 (ProcessKeyboardInputWorker.c)
 *     UserProcessMITInput @ 0x1C01530AC (UserProcessMITInput.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0157C00 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C0164C68 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C01831F4 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     McTemplateK0xqx @ 0x1C00EB610 (McTemplateK0xqx.c)
 */

void UserSessionSwitchLeaveCrit()
{
  __int64 v0; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v2; // rbx
  int v3; // eax
  DWORD LowPart; // eax
  int v5; // r8d
  int v6; // [rsp+30h] [rbp-78h] BYREF
  __int128 v7; // [rsp+38h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  int *v10; // [rsp+80h] [rbp-28h]
  __int64 v11; // [rsp+88h] [rbp-20h]

  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v2 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v3 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      v6 = v3;
      if ( (*(_DWORD *)(v2 + 44) || *(_DWORD *)(v2 + 48) || v3 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&pDesc, L"LeaveCrit");
        v11 = 4LL;
        v10 = &v6;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v2 + 28), 0LL, 4u, &pData);
      }
      *(_DWORD *)(v2 + 44) = 0;
      v7 = 0uLL;
      *(_OWORD *)(v2 + 28) = 0uLL;
    }
  }
  v0 = PsGetCurrentThreadWin32Thread();
  if ( v0 )
  {
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
      && (qword_1C01C3310 & 0x200000010000000LL) != 0
      && (qword_1C01C3318 & 0x200000010000000LL) == qword_1C01C3318 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
        McTemplateK0xqx(
          *(_QWORD *)(v0 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v5,
          LowPart - *(_DWORD *)(v0 + 8),
          0,
          *(_QWORD *)(v0 + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
