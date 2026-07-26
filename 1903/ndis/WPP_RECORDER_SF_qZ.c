/*
 * XREFs of WPP_RECORDER_SF_qZ @ 0x1C0019620
 * Callers:
 *     ?ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C001879C (-ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLO.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C001E30C (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ndisPnPStartDevice @ 0x1C002D22C (ndisPnPStartDevice.c)
 *     ndisPnPIrpStartDevice @ 0x1C002F538 (ndisPnPIrpStartDevice.c)
 *     NdisFRegisterFilterDriver @ 0x1C00373A0 (NdisFRegisterFilterDriver.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C003C7CC (ndisUpdatePMCurrentCapabilities.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0073534 (ndisMUpdateNameOnPMWakePacket.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C007F840 (NdisIMCancelInitializeDeviceInstance.c)
 *     ndisIMCheckDeviceInstance @ 0x1C007FF38 (ndisIMCheckDeviceInstance.c)
 *     NdisDeregisterProtocolDriver @ 0x1C00928F0 (NdisDeregisterProtocolDriver.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3B6C (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3C6C (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3E2C (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3F30 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4DBC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A4F64 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisIdleWaitWakeCallback @ 0x1C00B8380 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00B8690 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9B80 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BAF9C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BC49C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00BC930 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     NdisDeregisterProtocol @ 0x1C0138860 (NdisDeregisterProtocol.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013B1C4 (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rsi
  unsigned __int64 v11; // rdi
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v17; // rdx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rax
  int v20; // [rsp+20h] [rbp-68h]

  v7 = a7;
  v8 = L"NULL";
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= 4u )
  {
    if ( a7 )
      v17 = *a7;
    else
      v17 = 8LL;
    if ( a7 && *a7 )
      v18 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v18 = L"NULL";
    v19 = a7;
    if ( !a7 )
      v19 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, v19, 2LL, v18, v17, 0LL);
  }
  if ( v7 )
    v14 = *v7;
  else
    v14 = 8LL;
  v15 = v7 == 0LL;
  if ( v7 )
  {
    if ( *v7 )
      v8 = (const wchar_t *)*((_QWORD *)v7 + 1);
    v15 = v7 == 0LL;
  }
  if ( v15 )
    v7 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v20, &a6, 8LL, v7, 2LL, v8, v14, 0LL);
}
