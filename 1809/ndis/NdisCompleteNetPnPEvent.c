/*
 * XREFs of NdisCompleteNetPnPEvent @ 0x1C00F4090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteNetPnPEvent(
        NDIS_HANDLE NdisBindingHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification,
        NDIS_STATUS Status)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xAu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)NdisBindingHandle);
  v6 = (struct _KEVENT *)NetPnPEventNotification->NetPnPEvent.NdisReserved[0];
  LODWORD(NetPnPEventNotification->NetPnPEvent.NdisReserved[1]) = Status;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xBu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)NdisBindingHandle);
}
