/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0002028
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002CF0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003048 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003670 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003840 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004FE0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0006360 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0006AD0 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007180 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C0011530 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C0011690 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x1C00140D4 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0014244 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014404 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C0014780 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C001497C (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0014D24 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0014F88 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x1C001D570 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001E4E0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0022060 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0023634 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0025CF0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0027724 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0027D84 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0028314 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C0028FEC (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0029100 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_CheckIfSerialNumberIsIdentical @ 0x1C002F974 (HUBMISC_CheckIfSerialNumberIsIdentical.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C00319C8 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C0031C4C (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0032264 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C00333C8 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C0033E50 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C00341F8 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0035E18 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003613C (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C00369AC (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0036F54 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C00378E4 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C0038130 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_ValidateMSOSContainerIDDescriptorHeader @ 0x1C00388A0 (HUBDESC_ValidateMSOSContainerIDDescriptorHeader.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0038A60 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x1C0038C24 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C003922C (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003A804 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C00788F4 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00806B0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
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
