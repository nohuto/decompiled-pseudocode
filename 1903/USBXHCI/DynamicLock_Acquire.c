/*
 * XREFs of DynamicLock_Acquire @ 0x1C0046FAC
 * Callers:
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0002620 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     RootHub_DetectPortsInComplianceMode @ 0x1C0003BD8 (RootHub_DetectPortsInComplianceMode.c)
 *     Command_ControllerResetPostReset @ 0x1C000931C (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C00094E0 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C0009948 (Command_FailAllCommands.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0009AB8 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0009F60 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000DF94 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C000EB58 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0010818 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0011140 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0011FE0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00129C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0013980 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     RootHub_ClearPortResumeTime @ 0x1C0020EA4 (RootHub_ClearPortResumeTime.c)
 *     RootHub_D0Entry @ 0x1C0020EF4 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0021508 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C0021948 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C0021D18 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0021F30 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_SetPortResumeTime @ 0x1C0022820 (RootHub_SetPortResumeTime.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0026C58 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027454 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
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
