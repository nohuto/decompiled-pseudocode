/*
 * XREFs of DynamicLock_Acquire @ 0x1C0041760
 * Callers:
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0002450 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Command_ControllerResetPostReset @ 0x1C0007538 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C00076E8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C0007AC8 (Command_FailAllCommands.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000BC40 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C000C778 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C000E0B4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C000E930 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000F650 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000FF70 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0010DB0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     RootHub_ClearPortResumeTime @ 0x1C001D4F4 (RootHub_ClearPortResumeTime.c)
 *     RootHub_D0Entry @ 0x1C001D548 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C001D69C (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001DB74 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C001DF08 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001E2A0 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_SetPortResumeTime @ 0x1C001ECBC (RootHub_SetPortResumeTime.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C00227B4 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0022E94 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 */

__int64 __fastcall DynamicLock_Acquire(__int64 a1)
{
  if ( *(_DWORD *)a1 != 1 )
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 2528))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(a1 + 8));
  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
      88);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(a1 + 8),
           0LL);
}
