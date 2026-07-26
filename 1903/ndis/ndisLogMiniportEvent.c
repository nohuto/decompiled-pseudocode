/*
 * XREFs of ndisLogMiniportEvent @ 0x1C0019E70
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C0012B40 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012C40 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     ndisRequestDeviceLowPower @ 0x1C001483C (ndisRequestDeviceLowPower.c)
 *     ndisInitializeAdapter @ 0x1C002CA48 (ndisInitializeAdapter.c)
 *     ndisPnPIrpStartDevice @ 0x1C002F538 (ndisPnPIrpStartDevice.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DBC0 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisMRemoveMiniportInternal @ 0x1C009E8AC (NdisMRemoveMiniportInternal.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A37F0 (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3B6C (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3C6C (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3E2C (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3F30 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4DBC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A4F64 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C00A5F68 (ndisWdfMiniportUpdatePowerState.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6CC0 (NdisMIdleNotificationCompleteEx.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6E00 (NdisMIdleNotificationConfirm.c)
 *     ndisCancelIdleRequest @ 0x1C00B7E8C (ndisCancelIdleRequest.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00B8690 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C00B9A00 (ndisSetPowerResumeComplete.c)
 *     ndisSubmitIdleRequest @ 0x1C00B9E74 (ndisSubmitIdleRequest.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C0119350 (ndisWdfPreReleaseHardware.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01300A0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisRecordEvent @ 0x1C001A168 (ndisRecordEvent.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqxzq @ 0x1C00A62C0 (McTemplateK0jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  int v4; // esi
  void *v6; // rdx

  v2 = a2;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      159,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v2,
      a1);
  }
  if ( (unsigned __int16)(v2 - 70) <= 6u )
  {
    if ( (byte_1C00E8045 & 8) == 0 )
      return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4472));
    v6 = &MiniportFatalError;
LABEL_9:
    McTemplateK0jqxzq(
      a1,
      v6,
      a1 + 4008,
      a1 + 4008,
      *(_DWORD *)(a1 + 4056),
      *(_QWORD *)(a1 + 4024),
      *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 8LL),
      v4);
    return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4472));
  }
  if ( (byte_1C00E8045 & 4) != 0 )
  {
    v6 = &MiniportEvent;
    goto LABEL_9;
  }
  return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4472));
}
