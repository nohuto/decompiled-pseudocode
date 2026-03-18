/*
 * XREFs of IsValidGuiThreadContext @ 0x1C0026550
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0023000 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002BE50 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C002D0D0 (UserThreadCallout.c)
 *     NtUserGetKeyboardLayout @ 0x1C002DB30 (NtUserGetKeyboardLayout.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00316B8 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtUserChangeDisplaySettings @ 0x1C0046390 (NtUserChangeDisplaySettings.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0053C20 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0053F80 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0054860 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0055610 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C00562A0 (NtRIMOnPnpNotification.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C005F83C (W32kEtwEnableCallback.c)
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0066E1C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     NtUserRegisterSessionPort @ 0x1C00672B0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006767C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00740F0 (NtUserActivateKeyboardLayout.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C007963C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0086C70 (UserSessionSwitchEnterCrit.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0089090 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C008A7A4 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C008AB1C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C008B2D0 (NtMITSetInputDelegationMode.c)
 *     ChangeAcquireResourceType @ 0x1C0091170 (ChangeAcquireResourceType.c)
 *     UserProcessFreezeCallout @ 0x1C0094244 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0094BDC (UserProcessThawCallout.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00970E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0098930 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C0099540 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0099A20 (NtUserCheckProcessSession.c)
 *     NtMITUpdateInputGlobals @ 0x1C009A030 (NtMITUpdateInputGlobals.c)
 *     UserEnterUserCritSec @ 0x1C009AB00 (UserEnterUserCritSec.c)
 *     NtMITSetInputCallbacks @ 0x1C009AE70 (NtMITSetInputCallbacks.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009C320 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C009EB40 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     xxxCreateSystemThreads @ 0x1C00A1830 (xxxCreateSystemThreads.c)
 *     InitSystemThread @ 0x1C00A2BA0 (InitSystemThread.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     NtUserRegisterManipulationThread @ 0x1C00A6B00 (NtUserRegisterManipulationThread.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00A88A0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00AB1F4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     PowerOffMonitor @ 0x1C00B0FB0 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B13C0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00B1800 (xxxSendWinlogonPowerMessage.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B2660 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00B6460 (PowerResumeSuspendEvent.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0103090 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0103A54 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0104C1C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C01052D4 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105B78 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C0106300 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C0107CD4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01080EC (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0108B80 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0109E90 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0110FF0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0111430 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0111890 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C0111F20 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0112310 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C0113230 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C01136A0 (NtSetCursorInputSpace.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C01141C0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C0114A70 (NtUserEnableTouchPad.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C0116580 (NtUserGetSystemDpiForProcess.c)
 *     NtUserInjectGenericHidInput @ 0x1C01175E0 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C011A080 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C011A4D0 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C011BA10 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C011BE10 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C011D4C4 (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0133C80 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C01342B0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C01347F0 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C015CA30 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015CEF0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015D3B0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0175C60 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01769C0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0177370 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A1DC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C017AEA0 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017CA70 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017CEF0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C017D5B8 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C0189F50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018A590 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018AFA0 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C018EA90 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C019E660 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01C53E0 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C0264310 (Win32UserInitialize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

_BOOL8 IsValidGuiThreadContext()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 ThreadWin32Thread; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _BOOL8 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  result = 0;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v1, v0),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( ThreadWin32Thread )
    {
      if ( CurrentProcessWin32Process
        && (*(_DWORD *)(ThreadWin32Thread + 480) & 0x1000000) != 0
        && (*(_DWORD *)(ThreadWin32Thread + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        return 1;
      }
    }
  }
  return result;
}
