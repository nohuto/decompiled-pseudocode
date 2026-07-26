/*
 * XREFs of ndisInitializeNetPnPEvent @ 0x1C001BF38
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ndisNotifyBindFailure @ 0x1C003A814 (ndisNotifyBindFailure.c)
 *     ndisPnPPortActivation @ 0x1C0062064 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C006272C (ndisPnPPortDeactivation.c)
 *     ndisIMCheckDeviceInstance @ 0x1C007FF38 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C009F8D8 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C009FA60 (ndisPnPQueryRemoveDevice.c)
 *     NdisIMNotifyPnPEvent @ 0x1C00A4280 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00A4310 (NdisMNetPnPEvent.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01051A4 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01052A0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C011DB0C (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisInitializeNetPnPEvent(_DWORD *a1, struct _KEVENT *a2)
{
  memset(a1, 0, 0xB0uLL);
  *a1 = 11272832;
  a1[2] = 23;
  if ( a2 )
  {
    KeInitializeEvent(a2, NotificationEvent, 0);
    *((_QWORD *)a1 + 4) = a2;
  }
}
