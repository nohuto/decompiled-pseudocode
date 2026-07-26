/*
 * XREFs of ndisLogMiniportEvent @ 0x1C0016888
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C00114C0 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0011600 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00650EC (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00690CC (ndisMReenumerateFailedAdapterInternal.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C0073C90 (NdisMIdleNotificationCompleteEx.c)
 *     NdisMIdleNotificationConfirm @ 0x1C0073DB0 (NdisMIdleNotificationConfirm.c)
 *     ndisCancelIdleRequest @ 0x1C007469C (ndisCancelIdleRequest.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0074E30 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0076040 (ndisSetPowerResumeComplete.c)
 *     ndisSubmitIdleRequest @ 0x1C0076428 (ndisSubmitIdleRequest.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B8D00 (ndisRequestDeviceLowPower.c)
 *     ndisInitializeAdapter @ 0x1C00BC300 (ndisInitializeAdapter.c)
 *     ndisPnPIrpStartDevice @ 0x1C00CA074 (ndisPnPIrpStartDevice.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00F4500 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00F45E0 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00F4780 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00F4860 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00F52B0 (ndisWdfPreReleaseHardware.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C010C328 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisRecordEvent @ 0x1C00168E8 (ndisRecordEvent.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     McTemplateK0jqxzq @ 0x1C0069608 (McTemplateK0jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_dq(151LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a2, a1);
  if ( (unsigned __int16)(a2 - 70) <= 6u )
  {
    if ( (byte_1C00A2085 & 8) != 0 )
      McTemplateK0jqxzq(
        a2,
        &MiniportFatalError,
        a1 + 4040,
        a1 + 4040,
        *(_DWORD *)(a1 + 4088),
        *(_QWORD *)(a1 + 4056),
        *(_QWORD *)(*(_QWORD *)(a1 + 3888) + 8LL),
        a2);
  }
  else if ( (byte_1C00A2085 & 4) != 0 )
  {
    McTemplateK0jqxzq(
      *(_QWORD *)(a1 + 3888),
      &MiniportEvent,
      a1 + 4040,
      a1 + 4040,
      *(_DWORD *)(a1 + 4088),
      *(_QWORD *)(a1 + 4056),
      *(_QWORD *)(*(_QWORD *)(a1 + 3888) + 8LL),
      a2);
  }
  return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4512));
}
