/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320
 * Callers:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0002C10 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0013BA0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0024C50 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0030B40 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserThreadCallout @ 0x1C0033E20 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x1C00340E0 (xxxUserProcessCallout.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00399EC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003ACE0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003CEF4 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C004DE90 (NtUserChangeDisplaySettings.c)
 *     W32CalloutDispatch @ 0x1C005A060 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 *     UserProcessFreezeCallout @ 0x1C005A850 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C005A980 (UserProcessThawCallout.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C005C180 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtMITSetInputDelegationMode @ 0x1C0065F90 (NtMITSetInputDelegationMode.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C006A810 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ChangeAcquireResourceType @ 0x1C006A910 (ChangeAcquireResourceType.c)
 *     UserEnterUserCritSec @ 0x1C006ADC0 (UserEnterUserCritSec.c)
 *     NtUserCheckProcessSession @ 0x1C006C360 (NtUserCheckProcessSession.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C006C8D0 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E9B0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0075C20 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _DrvProcessWin32kEscape_::_93_::UserCritShared::UserCritShared @ 0x1C0077340 (_DrvProcessWin32kEscape_--_93_--UserCritShared--UserCritShared.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C009FBC0 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     InitSystemThread @ 0x1C00A0CF0 (InitSystemThread.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00A1084 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00A1208 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A1F30 (xxxSendWinlogonPowerMessage.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2A74 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A31F8 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A41FC (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 *     PowerResumeSuspendEvent @ 0x1C00A5060 (PowerResumeSuspendEvent.c)
 *     VideoPortCallout @ 0x1C00A5730 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     UserProcessTimerDelayCallout @ 0x1C00A77A8 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00A792C (UserProcessTimerStatisticsCallout.c)
 *     xxxCreateSystemThreads @ 0x1C00A7C10 (xxxCreateSystemThreads.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00A9524 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AAE20 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     W32kEtwEnableCallback @ 0x1C00B04E8 (W32kEtwEnableCallback.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00B3180 (NtDWMCommitInputSystemOutputConfig.c)
 *     NtDWMSetCursorOrientation @ 0x1C00B3330 (NtDWMSetCursorOrientation.c)
 *     NtMITDeactivateInputProcessing @ 0x1C00B3BD0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C00B3D80 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00B3F50 (NtMITEnableMouseIntercept.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00B4140 (NtMITGetCursorUpdateHandle.c)
 *     NtMITMinuserWindowCreated @ 0x1C00B4700 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C00B4870 (NtMITMinuserWindowDestroyed.c)
 *     NtMITSetInputCallbacks @ 0x1C00B49E0 (NtMITSetInputCallbacks.c)
 *     NtMITUninitMinuserThread @ 0x1C00B5170 (NtMITUninitMinuserThread.c)
 *     NtMITUpdateInputGlobals @ 0x1C00B5350 (NtMITUpdateInputGlobals.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C00B56B0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C00B5B60 (NtUserEnableTouchPad.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C00B7550 (NtUserGetSystemDpiForProcess.c)
 *     NtUserInjectGenericHidInput @ 0x1C00B7FC0 (NtUserInjectGenericHidInput.c)
 *     NtUserRegisterManipulationThread @ 0x1C00B8940 (NtUserRegisterManipulationThread.c)
 *     NtUserRegisterSessionPort @ 0x1C00B8AD0 (NtUserRegisterSessionPort.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00B8C60 (NtUserRemoveInjectionDevice.c)
 *     NtUserStopAndEndInertia @ 0x1C00B9F90 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C00BB190 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C00BB310 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C00BC61C (UserFindBaseWindowHandle.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C00CABD0 (NtGdiDdDDISetDisplayMode.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6068 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00DBCE8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00DF3B0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnPnpNotification @ 0x1C00DF750 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C00DF8D0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C00DFB40 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C010ADA0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AFE0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010B210 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01204D0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0120700 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0121DA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0122D60 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01235D0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01269F8 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0127380 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01278A0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C0127C70 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 *     UserProcessMITInput @ 0x1C01311BC (UserProcessMITInput.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0134314 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C0141544 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C015F7C8 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00B0468 (McTemplateK0xqx.c)
 */

__int64 __fastcall EtwTraceAcquiredExclusiveUserCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v6; // ecx
  int v7; // r8d
  LONGLONG v8; // rbx
  LARGE_INTEGER v9; // rsi

  result = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v4 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = PerformanceCounter.QuadPart - *(_QWORD *)(v4 + 8);
    v9 = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
      && (qword_1C019A1C0 & 0x200000010000000LL) != 0
      && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8
      && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v6) = byte_1C019A1D8 - 1;
      McTemplateK0xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v7, v8, 0, gullUserCritAcquireToken);
    }
    if ( v8 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && v9.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v7,
          v8,
          1000000 * v8 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      W32KEtwUserCritAcquireDelayExLastTelemetryQPC = v9.QuadPart;
    }
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
