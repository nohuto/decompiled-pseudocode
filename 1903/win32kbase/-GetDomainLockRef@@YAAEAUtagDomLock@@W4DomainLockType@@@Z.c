/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0022AE0 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     _HMObjectFromHandle @ 0x1C0022DB0 (_HMObjectFromHandle.c)
 *     W32CalloutDispatch @ 0x1C0023550 (W32CalloutDispatch.c)
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     _HMPheFromObject @ 0x1C0023E20 (_HMPheFromObject.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0023E60 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0023ED0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     HMLockObject @ 0x1C0026890 (HMLockObject.c)
 *     HMPkheFromPhe @ 0x1C00268C0 (HMPkheFromPhe.c)
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 *     HMMarkObjectDestroy @ 0x1C0027A10 (HMMarkObjectDestroy.c)
 *     HMAllocObject @ 0x1C0027A70 (HMAllocObject.c)
 *     MarkThreadsObjects @ 0x1C00280E0 (MarkThreadsObjects.c)
 *     HMFreeObject @ 0x1C00283C0 (HMFreeObject.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C002934C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C00294BC (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ThreadUnlockWorker1 @ 0x1C00297F0 (ThreadUnlockWorker1.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BC44 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ValidateHandleSecure @ 0x1C002BD60 (ValidateHandleSecure.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002C3B8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C002DC40 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C002E220 (UserThreadCallout.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     NtUserGetKeyboardLayout @ 0x1C002ED80 (NtUserGetKeyboardLayout.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002F794 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0032408 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C00367BC (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 *     NtUserChangeDisplaySettings @ 0x1C004AD90 (NtUserChangeDisplaySettings.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005A12C (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C005B7FC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C005B9DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     UserPowerInfoCallout @ 0x1C0062AE4 (UserPowerInfoCallout.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00682C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0068620 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0069570 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C006A200 (NtRIMOnPnpNotification.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0070660 (NtUserActivateKeyboardLayout.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0071F50 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0073120 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0073D6C (W32kEtwEnableCallback.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C007A864 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     ValidateHmonitorNoRip @ 0x1C007ADE0 (ValidateHmonitorNoRip.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C007CE3C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     HMChangeOwnerThread @ 0x1C008AC20 (HMChangeOwnerThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C008B050 (UserSessionSwitchEnterCrit.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C008D220 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C008EC74 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C008EFEC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C008F8C0 (NtMITSetInputDelegationMode.c)
 *     SetInputDelegationModeImpl @ 0x1C008FAEC (SetInputDelegationModeImpl.c)
 *     ClearKeyboardToggleStates @ 0x1C0091B60 (ClearKeyboardToggleStates.c)
 *     ChangeAcquireResourceType @ 0x1C0092740 (ChangeAcquireResourceType.c)
 *     UserProcessFreezeCallout @ 0x1C0095764 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C00963AC (UserProcessThawCallout.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C0098A80 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0098F00 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0099DA0 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C009A980 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C009AE60 (NtUserCheckProcessSession.c)
 *     NtMITUpdateInputGlobals @ 0x1C009B4B0 (NtMITUpdateInputGlobals.c)
 *     UserEnterUserCritSec @ 0x1C009C3E0 (UserEnterUserCritSec.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009CBE0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00A1BE0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     xxxCreateSystemThreads @ 0x1C00A2A70 (xxxCreateSystemThreads.c)
 *     InitSystemThread @ 0x1C00A3C60 (InitSystemThread.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     NtUserRegisterManipulationThread @ 0x1C00A7910 (NtUserRegisterManipulationThread.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00A9760 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtMITSetInputCallbacks @ 0x1C00A9D80 (NtMITSetInputCallbacks.c)
 *     NtUserRegisterSessionPort @ 0x1C00AB8F0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00ABCBC (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B5140 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B5364 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     PowerOffMonitor @ 0x1C00B8460 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B8870 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00B8CB0 (xxxSendWinlogonPowerMessage.c)
 *     PowerResumeSuspendEvent @ 0x1C00B99C0 (PowerResumeSuspendEvent.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0104C1C (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0105960 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0105A00 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C01063C4 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C01070A4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010758C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0107C44 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01084E8 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C0108C70 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C010A644 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C010AA5C (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C010B4F0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C010C800 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C010CDD0 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0113960 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0113DA0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0114200 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C0114890 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0114C80 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C0115BA0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C0116010 (NtSetCursorInputSpace.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0116B30 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C01173E0 (NtUserEnableTouchPad.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C0118EF0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserInjectGenericHidInput @ 0x1C0119F50 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C011BA30 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C011C9F0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C011CE40 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C011E380 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C011E780 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C011FE34 (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C01362F0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C0136920 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0136E60 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C015EC30 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015F0F0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015F5B0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0177E50 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0178BB0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0179560 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017C3CC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C017D090 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017EC60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017F0E0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C017F7A8 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C018087C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C0185990 (ProcessKeyboardInputWorker.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C140 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C780 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018D190 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0190C80 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01A0910 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01C7380 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall GetDomainLockRef(__int64 a1, __int64 a2, __int64 a3)
{
  switch ( (_DWORD)a1 )
  {
    case 0:
      return &gDomainProcessInfoLock;
    case 1:
      return &gDomainThreadInfoLock;
    case 2:
      return &gDomainDesktopLock;
    case 4:
      return &gDomainPostLock;
    case 3:
      return &gDomainSmsLock;
    case 5:
      return &gDomainQueueLock;
    case 8:
      return &gDomainHookLock;
    case 9:
      return &gDomainWinEventLock;
    case 0xB:
      return &gDomainClientLibLock;
    case 0xA:
      return &gDomainWindowLock;
    case 0xD:
      return &gDomainPowerTransitionsStateLock;
    case 0xC:
      return &gDomainTlLock;
    case 0xE:
      return &gDomainHandleManagerLock;
    case 0xF:
      return &gDomainRawInputLock;
    case 0x10:
      return &gDomainAsyncKeyStateLock;
    case 0x11:
      return &gDomainJobLock;
    case 6:
      return &gDomainForegroundLock;
    case 7:
      return &gDomainActiveLock;
    case 0x12:
      return &gDomainInputDelegationLock;
    case 0x13:
      return &gDomainQueueMgmtLock;
    case 0x14:
      return &gDomainThreadRundownLock;
    case 0x15:
      return &gDomainEtwLock;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  return &gDomainDummyLock;
}
