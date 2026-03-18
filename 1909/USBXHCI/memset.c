/*
 * XREFs of memset @ 0x1C0008D80
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001120 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0001260 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C0001810 (Etw_DeviceListRundown.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00024E0 (CommonBuffer_AcquireSecureBuffer.c)
 *     Device_QueryCapabilities @ 0x1C000273C (Device_QueryCapabilities.c)
 *     XilUsbDevice_QueryAttributes @ 0x1C0004C10 (XilUsbDevice_QueryAttributes.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0004CDC (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C0005590 (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C00060FC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C000624C (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0006310 (UsbDevice_SetResourceAssignment.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0008084 (InitializeTelemetryAssertsKM.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0009608 (Command_D0EntryPostInterruptsEnabled.c)
 *     XilCommand_AllocateSecureResources @ 0x1C000BD5C (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C000BF24 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C000C0A0 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000C234 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000C360 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000C490 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000C6F8 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000C828 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000C978 (XilCommand_SendRequestToRingDoorbell.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000CC34 (CommonBuffer_AcquireShadowBuffer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000E590 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_TelemetryReport @ 0x1C0010A5C (Controller_TelemetryReport.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0011FE0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C00159F0 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C0015B78 (DeviceSlot_D0EntryCleanupState.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0015D88 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0015F44 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0016090 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00161E8 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016318 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016444 (XilDeviceSlot_PrepareHardware.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00165C0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016700 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016864 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00169C4 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0017098 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C0017228 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C00173F0 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0017544 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0017624 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C001782C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017B20 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0017F1C (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0018760 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C00189A0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0019778 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A700 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C001AB74 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C001AC20 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C001AD74 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C001AE60 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C001B0F0 (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B488 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BE60 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C001C650 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C001C8B0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001CCD0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CFA0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C001EF0C (Interrupter_Initialize.c)
 *     Interrupter_InitializeForOffload @ 0x1C001EFB8 (Interrupter_InitializeForOffload.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0022890 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0023EF0 (RootHub_UcxEvtGet20PortInfo.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0024150 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C00243E0 (RootHub_UcxEvtGetHubStatus.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C00245A0 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024740 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0024AC0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0025520 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C0025910 (RootHub_UcxEvtSetHubFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 *     TR_AcquireSecureSegments @ 0x1C0027D40 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C002867C (TR_CreateSecureObject.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C002898C (TR_EnableForwardProgress_Internal.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0028FB0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferRing @ 0x1C00292D8 (TR_InitializeTransferRing.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     TR_SendCompleteStageRequest @ 0x1C00297F4 (TR_SendCompleteStageRequest.c)
 *     Control_TransferData_Initialize @ 0x1C002B1A8 (Control_TransferData_Initialize.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C002C7A0 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C002C950 (Control_WdfEvtIoDefault.c)
 *     Isoch_MapStage @ 0x1C002E590 (Isoch_MapStage.c)
 *     Isoch_Stage_Initialize @ 0x1C0031130 (Isoch_Stage_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C0031C08 (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0032760 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_MapStage @ 0x1C0034954 (Bulk_MapStage.c)
 *     Bulk_Stage_Initialize @ 0x1C0036E58 (Bulk_Stage_Initialize.c)
 *     Bulk_TransferData_Initialize @ 0x1C0037AAC (Bulk_TransferData_Initialize.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00394D8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003963C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C003975C (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C003A180 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003B4BC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C003B8A0 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C003BCF0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C003C370 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C003C7E0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C003C9C0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C003CB10 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C003CC00 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C003CF00 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C003D220 (UsbDevice_UpdateCompletion.c)
 *     Etw_DeviceCreate @ 0x1C003E65C (Etw_DeviceCreate.c)
 *     Etw_DeviceDelete @ 0x1C003E7F8 (Etw_DeviceDelete.c)
 *     Etw_DeviceRundown @ 0x1C003E994 (Etw_DeviceRundown.c)
 *     Etw_DeviceUpdate @ 0x1C003EBB4 (Etw_DeviceUpdate.c)
 *     Etw_EndpointListRundown @ 0x1C003EEB0 (Etw_EndpointListRundown.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C003F5FC (Wmi_CreateControllerCapabilities.c)
 *     Crashdump_Initialize @ 0x1C003FF60 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0040290 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0040E60 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0042434 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C00426B4 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C0042D9C (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0043778 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C0043B4C (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0043EAC (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C0044040 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C0044338 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C004488C (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0046A48 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C0046B80 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C0046C00 (SecureDmaEnabler_Unmap.c)
 *     XilCoreCommand_Initialize @ 0x1C0047450 (XilCoreCommand_Initialize.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C00477F4 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0048368 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0048828 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     TelemetryData_CreateReport @ 0x1C0048BE8 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0049380 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0049B78 (WerpAllocateAndInitializeSid.c)
 *     WerpCreateRegistryKey @ 0x1C0049CC4 (WerpCreateRegistryKey.c)
 *     WerpGetRegistryKey @ 0x1C0049E14 (WerpGetRegistryKey.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C005E324 (Command_CreateCommandWatchdogTimer.c)
 *     Command_PrepareHardware @ 0x1C005E440 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C005E6D8 (CommonBuffer_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C005E938 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C005F94C (Controller_CreateWdfDevice.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0060270 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_ExecuteDSM @ 0x1C00603A8 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C0061A84 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C0061CF4 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C0061F54 (Controller_RetrieveUrsData.c)
 *     Controller_SetDeviceDescription @ 0x1C0062230 (Controller_SetDeviceDescription.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 *     DriverEntry @ 0x1C0064410 (DriverEntry.c)
 *     WppTraceCallback @ 0x1C0064AD0 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0065AE8 (Interrupter_CreateInterrupter.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0065F9C (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_FilterMessageDescriptors @ 0x1C0066290 (Interrupter_FilterMessageDescriptors.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0066694 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0066D14 (Interrupter_PrepareInterrupter.c)
 *     IoControl_Create @ 0x1C0067290 (IoControl_Create.c)
 *     Register_CreateSecureObject @ 0x1C0067578 (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C006768C (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C00683B4 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C006861C (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C006869C (Register_WriteSecureMmio.c)
 *     RootHub_Create @ 0x1C00687F4 (RootHub_Create.c)
 *     RootHub_PrepareHardware @ 0x1C00689FC (RootHub_PrepareHardware.c)
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 *     Control_Initialize @ 0x1C00699F0 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C0069C00 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0069E40 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_Create @ 0x1C006A16C (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C006A2E0 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     DmaEnabler_Create @ 0x1C006A99C (DmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C006AF4C (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C006B084 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C006B2C8 (SecureChannel_Create.c)
 *     TelemetryData_pCreateDumpFile @ 0x1C006B714 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C006B954 (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C006BA5C (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
