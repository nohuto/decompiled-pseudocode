/*
 * XREFs of NdisIMNotifyPnPEvent @ 0x1C00A4450
 * Callers:
 *     <none>
 * Callees:
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     NdisMNetPnPEvent @ 0x1C00A44E0 (NdisMNetPnPEvent.c)
 */

NDIS_STATUS __stdcall NdisIMNotifyPnPEvent(NDIS_HANDLE MiniportHandle, PNET_PNP_EVENT NetPnPEvent)
{
  struct _NET_PNP_EVENT_NOTIFICATION NetPnPEventNotification; // [rsp+20h] [rbp-C8h] BYREF

  memset(&NetPnPEventNotification, 0, sizeof(NetPnPEventNotification));
  ndisInitializeNetPnPEvent(&NetPnPEventNotification, 0LL);
  NetPnPEventNotification.NetPnPEvent.NetEvent = NetPnPEvent->NetEvent;
  NetPnPEventNotification.NetPnPEvent.Buffer = NetPnPEvent->Buffer;
  NetPnPEventNotification.NetPnPEvent.BufferLength = NetPnPEvent->BufferLength;
  return NdisMNetPnPEvent(MiniportHandle, &NetPnPEventNotification);
}
