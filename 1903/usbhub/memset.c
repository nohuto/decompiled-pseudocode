/*
 * XREFs of memset @ 0x1C002CA00
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C00031F0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhAcquirePowerContext @ 0x1C00063C0 (UsbhAcquirePowerContext.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000688C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000848C (UsbhCheckHubPowerStatus.c)
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     UsbhDmTimerDpc @ 0x1C000DB30 (UsbhDmTimerDpc.c)
 *     UsbhCreateDevice @ 0x1C000E4F8 (UsbhCreateDevice.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000EDB8 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     UsbhPostInterrupt @ 0x1C0010330 (UsbhPostInterrupt.c)
 *     UsbhAllocWorkItem @ 0x1C00109E0 (UsbhAllocWorkItem.c)
 *     UsbhQueryBusRelations @ 0x1C0010C30 (UsbhQueryBusRelations.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 *     UsbhHubProcessIsr @ 0x1C0011C70 (UsbhHubProcessIsr.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012960 (UsbhSyncSendCommandToDevice.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001BB80 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001D710 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001E004 (UsbhGetHubClassDescriptor.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001E580 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001EA88 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhQueryParentHubConfig @ 0x1C001F44C (UsbhQueryParentHubConfig.c)
 *     UsbhPdoPnp_QueryId @ 0x1C001FEC0 (UsbhPdoPnp_QueryId.c)
 *     UsbhGetExtendedHubInformation @ 0x1C0020500 (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0020660 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogHubInformation @ 0x1C0020788 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C00208A0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0020D30 (UsbhGetAcpiPortAttributes.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0021C54 (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0021DFC (UsbhBuildCompatibleID.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C00224E0 (UsbhReadPdoRegistryKeys.c)
 *     UsbhGetD3Policy @ 0x1C002278C (UsbhGetD3Policy.c)
 *     UsbhGetLocationIdString @ 0x1C00228A4 (UsbhGetLocationIdString.c)
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 *     UsbhBuildContainerID @ 0x1C0023854 (UsbhBuildContainerID.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0023EA8 (UsbhBuildClassCompatibleID.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00243E0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C00246C0 (UsbhGetRegUsbHubFlags.c)
 *     UsbhBuildDeviceID @ 0x1C0024990 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0024C14 (UsbhBuildHardwareID.c)
 *     UsbhMakeId @ 0x1C0025250 (UsbhMakeId.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C00254D8 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C00257FC (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0025AF4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0025EE0 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025F5C (UsbhGetHubDeviceInformation.c)
 *     UsbhGetDeviceInformation @ 0x1C00262B8 (UsbhGetDeviceInformation.c)
 *     UsbhRegDriverEntry @ 0x1C0026920 (UsbhRegDriverEntry.c)
 *     UsbhGetBusInterface @ 0x1C0026F40 (UsbhGetBusInterface.c)
 *     UsbhBusPnpStart @ 0x1C00283B0 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C0028B60 (UsbhAllocateTimerObject.c)
 *     UsbhLogAlloc @ 0x1C0029624 (UsbhLogAlloc.c)
 *     RtlStringCchPrintfExW @ 0x1C00297D0 (RtlStringCchPrintfExW.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C0029A00 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0029DAC (UsbhQueryD3ColdSupport.c)
 *     DriverEntry @ 0x1C0029F14 (DriverEntry.c)
 *     USBHUB_InitBugCheck @ 0x1C002A134 (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x1C002A2AC (UsbhInitGlobal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C002A5E4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C002A784 (UsbhCopyPnpString.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C002A990 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C002B690 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C002BA48 (UsbhBuildDeviceCompatibleID.c)
 *     UsbhWmiDriverEntry @ 0x1C002BF90 (UsbhWmiDriverEntry.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C003F390 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003F688 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003F7C0 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetControllerName @ 0x1C00401BC (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C0040354 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C00407B0 (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C0040A14 (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C0040DA4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C0043580 (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C0044440 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C0044848 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0044EB0 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0045010 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0045510 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0048CD0 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0048E50 (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformationEx @ 0x1C004D580 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C004D700 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004E9FC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004ECCC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004EF5C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004F744 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004FA58 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004FD40 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0050028 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C0050BB4 (UsbhVerifyCallerIsAdmin.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0052A40 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C005476C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0054A08 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C0054C78 (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C00569D0 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhBuildUnknownIds @ 0x1C0058BF0 (UsbhBuildUnknownIds.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0059D4C (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0059FE0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C005A340 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C005A894 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C005B198 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C005BFC8 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C005C1BC (UsbhPublishBillboardDetails.c)
 *     UsbhBuildUxdPnpId @ 0x1C005DEEC (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005E2E0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005E7AC (UsbhGetUxdLoadKeySettings.c)
 *     UsbhOpenRegistryKey @ 0x1C005E99C (UsbhOpenRegistryKey.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005EA28 (UsbhOpenUxdPortHandle.c)
 *     UsbhQueryUxdDevice @ 0x1C005EC30 (UsbhQueryUxdDevice.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005F174 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005F3C8 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005F4FC (UsbhEtwLogHubPastExceptions.c)
 *     MyRegOpenKeyForRead @ 0x1C006061C (MyRegOpenKeyForRead.c)
 *     UsbhUpdateSqmFlags @ 0x1C0078008 (UsbhUpdateSqmFlags.c)
 *     WppTraceCallback @ 0x1C00784F0 (WppTraceCallback.c)
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
