/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20
 * Callers:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C000F498 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0023000 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     _HMObjectFromHandle @ 0x1C00232D0 (_HMObjectFromHandle.c)
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     _HMPheFromObject @ 0x1C0024340 (_HMPheFromObject.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0024380 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00243F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     HMLockObject @ 0x1C0026DB0 (HMLockObject.c)
 *     HMPkheFromPhe @ 0x1C0026DE0 (HMPkheFromPhe.c)
 *     HMUnlockObjectInternal @ 0x1C0026F70 (HMUnlockObjectInternal.c)
 *     HMMarkObjectDestroy @ 0x1C00283B0 (HMMarkObjectDestroy.c)
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 *     MarkThreadsObjects @ 0x1C0028A80 (MarkThreadsObjects.c)
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0029D6C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0029EDC (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ThreadUnlockWorker1 @ 0x1C002A380 (ThreadUnlockWorker1.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BBC4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ValidateHandleSecure @ 0x1C002BCE0 (ValidateHandleSecure.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002BE50 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C002D0D0 (UserThreadCallout.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     NtUserGetKeyboardLayout @ 0x1C002DB30 (NtUserGetKeyboardLayout.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002E984 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00316B8 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 *     NtUserChangeDisplaySettings @ 0x1C0046390 (NtUserChangeDisplaySettings.c)
 *     HMValidateSharedHandle @ 0x1C004FDE4 (HMValidateSharedHandle.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0053C20 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0053F80 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0054860 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0055610 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C00562A0 (NtRIMOnPnpNotification.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C005BA80 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C005F83C (W32kEtwEnableCallback.c)
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0066E1C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     NtUserRegisterSessionPort @ 0x1C00672B0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006767C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00740F0 (NtUserActivateKeyboardLayout.c)
 *     ValidateHmonitorNoRip @ 0x1C0076E40 (ValidateHmonitorNoRip.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C007963C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     HMChangeOwnerThread @ 0x1C0086840 (HMChangeOwnerThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0086C70 (UserSessionSwitchEnterCrit.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0089090 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C008A7A4 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C008AB1C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C008B2D0 (NtMITSetInputDelegationMode.c)
 *     SetInputDelegationModeImpl @ 0x1C008B4FC (SetInputDelegationModeImpl.c)
 *     ClearKeyboardToggleStates @ 0x1C008DBD0 (ClearKeyboardToggleStates.c)
 *     ChangeAcquireResourceType @ 0x1C0091170 (ChangeAcquireResourceType.c)
 *     UserProcessFreezeCallout @ 0x1C0094244 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0094BDC (UserProcessThawCallout.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00970E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0097560 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
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
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B2884 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00B6460 (PowerResumeSuspendEvent.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C01021EC (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0102FF0 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0103090 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0103A54 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0104734 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0104C1C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C01052D4 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105B78 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C0106300 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C0107CD4 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01080EC (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0108B80 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0109E90 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C010A460 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
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
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C017E68C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
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
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
