/*
 * XREFs of memset @ 0x1C002B800
 * Callers:
 *     UsbhAcquirePowerContext @ 0x1C0005EE0 (UsbhAcquirePowerContext.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0007F68 (UsbhCheckHubPowerStatus.c)
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     UsbhReferenceListAdd @ 0x1C000E1D0 (UsbhReferenceListAdd.c)
 *     UsbhPostInterrupt @ 0x1C000FCA0 (UsbhPostInterrupt.c)
 *     UsbhQueryBusRelations @ 0x1C0010640 (UsbhQueryBusRelations.c)
 *     UsbhInitializeDevice @ 0x1C0010C7C (UsbhInitializeDevice.c)
 *     UsbhAllocWorkItem @ 0x1C0011370 (UsbhAllocWorkItem.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012320 (UsbhSyncSendCommandToDevice.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncSendCommand @ 0x1C0017B10 (UsbhSyncSendCommand.c)
 *     UsbhHubIsr @ 0x1C001A670 (UsbhHubIsr.c)
 *     UsbhRefPdo @ 0x1C001C4B0 (UsbhRefPdo.c)
 *     UsbhIncPdoIoCount @ 0x1C001C590 (UsbhIncPdoIoCount.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001CD90 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhGetProductIdString @ 0x1C001D030 (UsbhGetProductIdString.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001D990 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001DE58 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001DF7C (UsbhGetHubClassDescriptor.c)
 *     UsbhPdoPnp_QueryId @ 0x1C001F1F0 (UsbhPdoPnp_QueryId.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001F810 (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001FFE0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhGetSerialNumber @ 0x1C00207C4 (UsbhGetSerialNumber.c)
 *     UsbhQueryParentHubConfig @ 0x1C00209A8 (UsbhQueryParentHubConfig.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0020FCC (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0021150 (UsbhBuildCompatibleID.c)
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00216A0 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0021A70 (UsbhReadPdoRegistryKeys.c)
 *     UsbhGetLocationIdString @ 0x1C0021E10 (UsbhGetLocationIdString.c)
 *     UsbhCreatePdo @ 0x1C0022330 (UsbhCreatePdo.c)
 *     UsbhBuildContainerID @ 0x1C0022D30 (UsbhBuildContainerID.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0023360 (UsbhBuildClassCompatibleID.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0023890 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0023B40 (UsbhGetRegUsbHubFlags.c)
 *     UsbhBuildDeviceID @ 0x1C0023DF0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0024050 (UsbhBuildHardwareID.c)
 *     UsbhMakeId @ 0x1C0024610 (UsbhMakeId.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0024898 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0024BB0 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0024FCC (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025048 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetDeviceInformation @ 0x1C0025384 (UsbhGetDeviceInformation.c)
 *     UsbhRegDriverEntry @ 0x1C00259D0 (UsbhRegDriverEntry.c)
 *     UsbhGetBusInterface @ 0x1C0025F70 (UsbhGetBusInterface.c)
 *     UsbhBusPnpStart @ 0x1C0027460 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C0027BE0 (UsbhAllocateTimerObject.c)
 *     UsbhLogAlloc @ 0x1C0028668 (UsbhLogAlloc.c)
 *     RtlStringCchPrintfExW @ 0x1C0028820 (RtlStringCchPrintfExW.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C0028A50 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0028DCC (UsbhQueryD3ColdSupport.c)
 *     USBHUB_InitBugCheck @ 0x1C0029124 (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x1C0029294 (UsbhInitGlobal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0029424 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C00295C0 (UsbhCopyPnpString.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0029FB0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C002A3E0 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C002A898 (UsbhBuildDeviceCompatibleID.c)
 *     UsbhWmiDriverEntry @ 0x1C002AD10 (UsbhWmiDriverEntry.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C003DDF8 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003E0D4 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003E200 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetControllerName @ 0x1C003EBE8 (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003ED80 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C003F184 (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C003F3E8 (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003F764 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C0041F30 (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C0042DB0 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C00431C4 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0043814 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0043974 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0043E2C (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0047418 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0047598 (UsbhGetBillboardInfo.c)
 *     UsbhResetIrqPipe @ 0x1C0048168 (UsbhResetIrqPipe.c)
 *     UsbhGetDeviceInformationEx @ 0x1C004BB4C (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C004BCAC (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004CF1C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004D1BC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004D42C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004DBAC (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004DE94 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004E15C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004E424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C005269C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0052938 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C0052BA8 (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C00547E0 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhBuildUnknownIds @ 0x1C0056860 (UsbhBuildUnknownIds.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00579E8 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0057C60 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0057FC0 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0058514 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C0058E08 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0059BF8 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C0059DEC (UsbhPublishBillboardDetails.c)
 *     UsbhBuildUxdPnpId @ 0x1C005BA30 (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005BDE4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005C248 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryUxdDevice @ 0x1C005C610 (UsbhQueryUxdDevice.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C005D0A8 (UsbhRegisterBootDeviceNotification.c)
 *     WppTraceCallback @ 0x1C00774B0 (WppTraceCallback.c)
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
