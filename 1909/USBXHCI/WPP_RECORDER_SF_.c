/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001FE0
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0006500 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0009608 (Command_D0EntryPostInterruptsEnabled.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0009AB8 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0009F60 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C000A23C (Command_InternalSendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000C490 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000CCC8 (CommonBuffer_FlushWorkItems.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C000CD78 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C000D8D8 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000DCC0 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C000E1E4 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C000E3F0 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C000EC78 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000F620 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C000FC60 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C000FDCC (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     Controller_TelemetryReport @ 0x1C0010A5C (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0010DF0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00115D0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0011940 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_UcxEvtReset @ 0x1C0011EF0 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0011FE0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0012630 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013260 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C001F820 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C0020B64 (Register_WaitForControllerReady.c)
 *     RootHub_ForceU0AndWait @ 0x1C0021948 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C0021D18 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00226B8 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0022890 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024740 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0024AC0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0025520 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027454 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     TR_AcquireSecureSegments @ 0x1C0027D40 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0032BD0 (Isoch_WdfEvtRingEmptyTimer.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C003F5FC (Wmi_CreateControllerCapabilities.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0046A48 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0047350 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C00477F4 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0047B48 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0048368 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0048700 (XilCoreDeviceSlot_Initialize.c)
 *     Command_ReleaseHardware @ 0x1C005E5E0 (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C005E938 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0060E7C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0062230 (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0065F9C (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0066694 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0066D14 (Interrupter_PrepareInterrupter.c)
 *     Register_ParseCapabilityRegister @ 0x1C0067778 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C00689FC (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C006B084 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C006D100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C006D220 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006D2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
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
