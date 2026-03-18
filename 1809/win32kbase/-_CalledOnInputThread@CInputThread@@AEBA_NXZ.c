/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678
 * Callers:
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0004870 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C003140C (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     NtMITDispatchCompletion @ 0x1C0031500 (NtMITDispatchCompletion.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0031610 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C00348E0 (NtMITSetInputDelegationMode.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004E244 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C007A6A0 (NtMITGetCursorUpdateHandle.c)
 *     GetCursorUpdateHandle @ 0x1C007A80C (GetCursorUpdateHandle.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C007A8A0 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C007BD70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C007C164 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     NtMITSetInputCallbacks @ 0x1C0083BC0 (NtMITSetInputCallbacks.c)
 *     NtMITUpdateInputGlobals @ 0x1C0087BA0 (NtMITUpdateInputGlobals.c)
 *     SetThreadPriority @ 0x1C008E850 (SetThreadPriority.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C008EAC8 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C0091F18 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0094500 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C0094588 (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C0094610 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C009539C (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A50FC (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00A52A0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     NtMITDeactivateInputProcessing @ 0x1C00ECE50 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C00ECFE0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00ED180 (NtMITEnableMouseIntercept.c)
 *     NtMITSetLastInputRecipient @ 0x1C00ED7A0 (NtMITSetLastInputRecipient.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0148CD0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0157ACC (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0157C00 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
