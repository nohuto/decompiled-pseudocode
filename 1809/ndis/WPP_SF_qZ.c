/*
 * XREFs of WPP_SF_qZ @ 0x1C0049D60
 * Callers:
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001554C (ndisUpdatePMCurrentCapabilities.c)
 *     NdisFRegisterFilterDriver @ 0x1C00220A0 (NdisFRegisterFilterDriver.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A7B0 (ndisMUpdateNameOnPMWakePacket.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0074B70 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0074E30 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0076180 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0077340 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C007865C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0078A90 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisQueryGuidDataSize @ 0x1C00B5114 (ndisQueryGuidDataSize.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B5580 (ndisWmiQuerySingleInstance.c)
 *     ndisPnPStartDevice @ 0x1C00BC164 (ndisPnPStartDevice.c)
 *     ndisPnPIrpStartDevice @ 0x1C00CA074 (ndisPnPIrpStartDevice.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00EAFD0 (NdisIMCancelInitializeDeviceInstance.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00EB3C8 (ndisIMCheckDeviceInstance.c)
 *     NdisDeregisterProtocolDriver @ 0x1C00ED9D0 (NdisDeregisterProtocolDriver.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00F4500 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00F45E0 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00F4780 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00F4860 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWmiFindInstanceName @ 0x1C00F62C0 (ndisWmiFindInstanceName.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C010C328 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 *     NdisDeregisterProtocol @ 0x1C0117730 (NdisDeregisterProtocol.c)
 *     ndisMShutdownMiniport @ 0x1C0119B2C (ndisMShutdownMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZ(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // r8
  const wchar_t *v5; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  if ( a4 )
    v4 = *a4;
  else
    v4 = 8LL;
  if ( a4 && *a4 )
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v5 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(a2, a1, &v6, 8LL, a4, 2LL, v5, v4, 0LL);
}
