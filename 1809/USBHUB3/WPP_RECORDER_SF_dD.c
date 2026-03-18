/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0001F18
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002BE0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002EE0 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C00034C0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003660 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004C20 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0005DE0 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C00064B0 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0006AE0 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C0010380 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C00104B0 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x1C0012EF0 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C001302C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00131A8 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C00134D0 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00136AC (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0013A00 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0013C30 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x1C001BC70 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001C9A0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001E250 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00201A0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0021638 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0023AB0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0025260 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0025854 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0025D78 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0026370 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C002669C (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C0026DA4 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0026EA8 (HUBDTX_LogAlternateMode.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002ED14 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C002EF38 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002F4DC (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C0030434 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C0030D2C (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C0031048 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0032908 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C0032BCC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003334C (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0033818 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C0034078 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0034394 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C00347B4 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0034E38 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C0035308 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C0036558 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C0071AD8 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0078D48 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va);
}
