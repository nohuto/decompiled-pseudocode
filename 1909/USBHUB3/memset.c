/*
 * XREFs of memset @ 0x1C0041640
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001130 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003364 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0005D10 (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C0005F14 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0006470 (HUBHTX_ClearTTBuffer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006C58 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007300 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHub @ 0x1C00075F0 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0007860 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007A1C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C00097FC (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000B5A4 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000C4E0 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000C778 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000C8B4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000CFD0 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000D44C (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000D9C4 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000DBC8 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000E04C (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000E098 (HUBMUX_CreatePSM.c)
 *     HUBMUX_CreateChildPSMs @ 0x1C000E61C (HUBMUX_CreateChildPSMs.c)
 *     RtlStringCchPrintfExW @ 0x1C0011EF0 (RtlStringCchPrintfExW.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C00136F4 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C00138D0 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0013A70 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0013D40 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_GetHubName @ 0x1C00140D4 (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014404 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C001497C (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0014F88 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C0015300 (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C00156D0 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0017A20 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C00191B0 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C0019590 (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C0019B90 (HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion.c)
 *     HUBPDO_PoFxDripsWatchdogCallback @ 0x1C0019F30 (HUBPDO_PoFxDripsWatchdogCallback.c)
 *     HUBID_AppendStringToIDString @ 0x1C001A6D8 (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x1C001A870 (HUBID_BuildUxdPnpId.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001C7A0 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001C940 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C001CAF0 (HUBDSM_SettingConfigurationInformationInClientRequest.c)
 *     HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C001CD30 (HUBDSM_SettingInterfaceInformationInClientRequest.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001D650 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C001EC00 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001F810 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C0021ED0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C0022C4C (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0022E24 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C00230A4 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C00231EC (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0023464 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0023634 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0023E94 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0024164 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0024614 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C0024E14 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C00253F4 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C00254B4 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C0025578 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0025CF0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002726C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0027724 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002896C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0028CAC (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C0028FEC (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0029100 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002A9A8 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002AB44 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002B7A8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C002D068 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002F368 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002F820 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 *     HUBMISC_CreateWerReport @ 0x1C002FD68 (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C0030634 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C003085C (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0030984 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C00397E0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C0039AB0 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WER_CreateReport @ 0x1C003BABC (WER_CreateReport.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C003C330 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C003C638 (HUBBOOT_RegisterBootDevice.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x1C003CB50 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     TelemetryData_CreateReport @ 0x1C003D880 (TelemetryData_CreateReport.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C003E2D0 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C003E558 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C003E780 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C003EBC0 (USBD_QueryUsbCapability.c)
 *     MyRegOpenKeyForRead @ 0x1C003FD04 (MyRegOpenKeyForRead.c)
 *     DereferenceDeviceResetInterface @ 0x1C0040010 (DereferenceDeviceResetInterface.c)
 *     WerpCreateRegistryKey @ 0x1C0040078 (WerpCreateRegistryKey.c)
 *     WerpGetRegistryKey @ 0x1C00401C8 (WerpGetRegistryKey.c)
 *     WerpAllocateAndInitializeSid @ 0x1C00402C0 (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C0040ADC (WerKernelSubmitReport.c)
 *     WppTraceCallback @ 0x1C006F150 (WppTraceCallback.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C006F960 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00702C0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00719D4 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0071BAC (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0071D98 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0072110 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0072350 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0072528 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007275C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0072B74 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C007314C (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0073400 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C00737D8 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0074BD0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C0075B08 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C0076434 (HUBPDO_CreatePdoInternal.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C007809C (HUBCONNECTOR_RegisterPort.c)
 *     HUBMISC_InitializeHsm @ 0x1C0079070 (HUBMISC_InitializeHsm.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1C0079760 (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C007D08C (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C007D5F8 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C007DC24 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_ExecuteDSM @ 0x1C007F670 (HUBACPI_ExecuteDSM.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C007F978 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C007FE68 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C00802A0 (HUBACPI_EnumChildren.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00806B0 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_AcquireHubName @ 0x1C0080EF8 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C00811C0 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_GetPropertyString @ 0x1C0081444 (WMI_GetPropertyString.c)
 *     WMI_RegisterHub @ 0x1C00816E4 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C00818E0 (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0081A30 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00821AC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TelemetryData_pCreateDumpFile @ 0x1C0082B40 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C0082D80 (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0082E88 (TelemetryData_pInitWerContext.c)
 *     QueryDeviceResetInterface @ 0x1C0083544 (QueryDeviceResetInterface.c)
 *     EvtResetActionWorkItem @ 0x1C00837D0 (EvtResetActionWorkItem.c)
 *     DriverEntry @ 0x1C0085008 (DriverEntry.c)
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
