/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001E30
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001870 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005530 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00077B4 (Command_D0EntryPostInterruptsEnabled.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0008334 (Command_InternalSendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000A344 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000AAB4 (CommonBuffer_FlushWorkItems.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C000AB54 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C000B688 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000B9D4 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C000BE88 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C000C070 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C000C898 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000D094 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C000D654 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C000D79C (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     Controller_TelemetryReport @ 0x1C000E2D4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C000E620 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C000ED90 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C000F080 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_UcxEvtReset @ 0x1C000F570 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000F650 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C000FC30 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0010730 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 *     Endpoint_Disable @ 0x1C0015310 (Endpoint_Disable.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C001D1DC (Register_WaitForControllerReady.c)
 *     RootHub_ForceU0AndWait @ 0x1C001DF08 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001E2A0 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EB88 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C001ED30 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0020710 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0020A50 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C00213C0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0022E94 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0023730 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C002DF30 (Isoch_WdfEvtRingEmptyTimer.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0039E98 (Wmi_CreateControllerCapabilities.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C00411B8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0041AE8 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0041F80 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C00422A4 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00429E0 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0042D08 (XilCoreDeviceSlot_Initialize.c)
 *     Command_ReleaseHardware @ 0x1C0057584 (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0057888 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0059B24 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C005AD68 (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005E470 (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C005EA88 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C005EFF0 (Interrupter_PrepareInterrupter.c)
 *     Register_ParseCapabilityRegister @ 0x1C005F990 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0062E40 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C00640E0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00641E0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006429C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]

  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v13 + 3),
        43LL,
        a5,
        a4,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, 0LL);
}
