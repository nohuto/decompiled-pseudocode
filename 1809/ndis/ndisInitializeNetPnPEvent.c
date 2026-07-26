/*
 * XREFs of ndisInitializeNetPnPEvent @ 0x1C00C342C
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003DA98 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003E02C (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B8484 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B8630 (ndisFNetPnPEventInternal.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00BADF4 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ndisNotifyBindFailure @ 0x1C00BE2E0 (ndisNotifyBindFailure.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00BE9D0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C34A0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00EB3C8 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00F2EF4 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00F30DC (ndisPnPQueryRemoveDevice.c)
 *     NdisIMNotifyPnPEvent @ 0x1C00F4110 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00F4190 (NdisMNetPnPEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C011525C (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

void __fastcall ndisInitializeNetPnPEvent(_QWORD *a1, struct _KEVENT *a2)
{
  memset(a1, 0, 0xB0uLL);
  *a1 = 11272832LL;
  *(_QWORD *)((char *)a1 + 164) = 0LL;
  *((_DWORD *)a1 + 40) = 0;
  *((_DWORD *)a1 + 2) = 23;
  a1[2] = 0LL;
  *((_DWORD *)a1 + 6) = 0;
  if ( a2 )
  {
    KeInitializeEvent(a2, NotificationEvent, 0);
    a1[4] = a2;
  }
}
