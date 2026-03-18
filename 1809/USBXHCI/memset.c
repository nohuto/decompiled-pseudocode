/*
 * XREFs of memset @ 0x1C0006FC0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001120 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0001260 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C00017F0 (Etw_DeviceListRundown.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C000230C (CommonBuffer_AcquireSecureBuffer.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C0004628 (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005134 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0005284 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0005348 (UsbDevice_SetResourceAssignment.c)
 *     InitializeTelemetryAssertsKM @ 0x1C00062E4 (InitializeTelemetryAssertsKM.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00077B4 (Command_D0EntryPostInterruptsEnabled.c)
 *     XilCommand_AllocateSecureResources @ 0x1C0009CD4 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0009E70 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0009FC0 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000A130 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000A238 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000A344 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000A55C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000A66C (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000A788 (XilCommand_SendRequestToRingDoorbell.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000AA20 (CommonBuffer_AcquireShadowBuffer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000C200 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_TelemetryReport @ 0x1C000E2D4 (Controller_TelemetryReport.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000F650 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Device_CheckIsSecureDevice @ 0x1C0011314 (Device_CheckIsSecureDevice.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0012FE0 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C001310C (DeviceSlot_D0EntryCleanupState.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0013310 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C001349C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00135C0 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00136F4 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0013804 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0013910 (XilDeviceSlot_PrepareHardware.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0013A68 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0013B7C (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0013CC8 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0013E04 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0014468 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C00145CC (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C001479C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C00148D4 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C00149A0 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0014B7C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0014E40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C00151C4 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C0015570 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0015960 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0015B70 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0016838 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0017638 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0017A98 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0017B44 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0017C98 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0017D78 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0017FE8 (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0018358 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0018C40 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C00193A0 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00195E0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0019990 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0019C40 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C001BA08 (Interrupter_Initialize.c)
 *     Interrupter_InitializeForOffload @ 0x1C001BAB4 (Interrupter_InitializeForOffload.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C001ED30 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C001FF90 (RootHub_UcxEvtGet20PortInfo.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C00201B0 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C0020400 (RootHub_UcxEvtGetHubStatus.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C00205A0 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0020710 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0020A50 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C00213C0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C0021740 (RootHub_UcxEvtSetHubFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 *     TR_AcquireSecureSegments @ 0x1C0023730 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C0023FEC (TR_CreateSecureObject.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C00242E0 (TR_EnableForwardProgress_Internal.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0024884 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferRing @ 0x1C0024B98 (TR_InitializeTransferRing.c)
 *     TR_InitializeTransferSegment @ 0x1C0024C0C (TR_InitializeTransferSegment.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     TR_SendCompleteStageRequest @ 0x1C00250A4 (TR_SendCompleteStageRequest.c)
 *     Control_TransferData_Initialize @ 0x1C00269CC (Control_TransferData_Initialize.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0027E70 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C0028010 (Control_WdfEvtIoDefault.c)
 *     Isoch_Stage_Initialize @ 0x1C002C44C (Isoch_Stage_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C002CF44 (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002DAE0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_Stage_Initialize @ 0x1C0031F1C (Bulk_Stage_Initialize.c)
 *     Bulk_TransferData_Initialize @ 0x1C0032B34 (Bulk_TransferData_Initialize.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00344E8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003462C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0034714 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     UsbDevice_DisableCompletion @ 0x1C0034D40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0035050 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00362EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C00366DC (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0036B00 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00370F0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00372B0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0037520 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00376E0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0037830 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0037920 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0037C00 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0037F20 (UsbDevice_UpdateCompletion.c)
 *     Etw_EndpointListRundown @ 0x1C0039640 (Etw_EndpointListRundown.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0039E98 (Wmi_CreateControllerCapabilities.c)
 *     Crashdump_Initialize @ 0x1C003A7E0 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C003AB10 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C003B6E0 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C003CCA8 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C003CF24 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C003D5FC (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C003DFDC (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C003E3B0 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003E6FC (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C003E890 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C003EB88 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C003F0DC (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C0041044 (DmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C00411B8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C00412D0 (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C0041358 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C00413C8 (SecureDmaEnabler_Unmap.c)
 *     DynamicLock_Create @ 0x1C00417E0 (DynamicLock_Create.c)
 *     XilCoreCommand_Initialize @ 0x1C0041BD8 (XilCoreCommand_Initialize.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0041F80 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00429E0 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0042E20 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     TelemetryData_CreateReport @ 0x1C00431A4 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C004393C (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C004410C (WerpAllocateAndInitializeSid.c)
 *     Command_Create @ 0x1C0057170 (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00572FC (Command_CreateCommandWatchdogTimer.c)
 *     Command_PrepareHardware @ 0x1C0057408 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0057658 (CommonBuffer_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0057888 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 *     Controller_CreateSecureObject @ 0x1C0058738 (Controller_CreateSecureObject.c)
 *     Controller_CreateWdfDevice @ 0x1C00587E0 (Controller_CreateWdfDevice.c)
 *     Controller_DestroySecureObject @ 0x1C0058FB4 (Controller_DestroySecureObject.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C005903C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_ExecuteDSM @ 0x1C0059160 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C005A660 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C005A88C (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C005AAC8 (Controller_RetrieveUrsData.c)
 *     Controller_SetDeviceDescription @ 0x1C005AD68 (Controller_SetDeviceDescription.c)
 *     Controller_UpdateIdleTimeout @ 0x1C005BA90 (Controller_UpdateIdleTimeout.c)
 *     DeviceSlot_Create @ 0x1C005C904 (DeviceSlot_Create.c)
 *     DriverEntry @ 0x1C005CAF8 (DriverEntry.c)
 *     WppTraceCallback @ 0x1C005D130 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C005D370 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005DA40 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C005DCA0 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C005E028 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C005EA88 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 *     IoControl_Create @ 0x1C005F514 (IoControl_Create.c)
 *     Register_Create @ 0x1C005F678 (Register_Create.c)
 *     Register_CreateSecureObject @ 0x1C005F7C8 (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C005F8C8 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C0060404 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C0060650 (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C00606CC (Register_WriteSecureMmio.c)
 *     RootHub_Create @ 0x1C0060810 (RootHub_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 *     TR_Create @ 0x1C0061390 (TR_Create.c)
 *     Control_Initialize @ 0x1C00618C0 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C0061AC0 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0061CF0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_Create @ 0x1C0061FD0 (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0062130 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C00621C4 (IntelPptFilter_Create.c)
 *     Counter_Register @ 0x1C0062668 (Counter_Register.c)
 *     DmaEnabler_Create @ 0x1C00627D8 (DmaEnabler_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C00629C8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C0062BC4 (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0062D1C (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0062E40 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C0063038 (SecureChannel_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C0063720 (TelemetryData_pInitWerContext.c)
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
