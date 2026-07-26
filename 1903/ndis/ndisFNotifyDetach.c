/*
 * XREFs of ndisFNotifyDetach @ 0x1C008F250
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00140BC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

char __fastcall ndisFNotifyDetach(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned __int8 MajorNdisVersion; // cl
  _DWORD v5[4]; // [rsp+20h] [rbp-D8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION NetPnPEventNotification; // [rsp+30h] [rbp-C8h] BYREF

  NetPnPEventNotification.PortNumber = 0;
  NetPnPEventNotification.Header = (_NDIS_OBJECT_HEADER)10748288;
  NetPnPEventNotification.NetPnPEvent.NetEvent = NetEventFilterPreDetach;
  memset(&NetPnPEventNotification.NetPnPEvent.NetEvent + 1, 0, 0xA4uLL);
  FilterDriver = a1->FilterDriver;
  MajorNdisVersion = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion;
  if ( (MajorNdisVersion > 6u
     || MajorNdisVersion == 6 && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x1Eu)
    && (a1->Flags & 0x10000) == 0 )
  {
    LOBYTE(FilterDriver) = ndisReferenceRefEx(&a1->PnPRef.SpinLock, 0x15u, v5);
    if ( (_BYTE)FilterDriver )
    {
      ndisFForwardNetPnPEventToFilter(a1, &NetPnPEventNotification);
      LOBYTE(FilterDriver) = ndisDereferenceRef(&a1->PnPRef.SpinLock, 0x15u);
    }
  }
  a1->Flags |= 0x10000u;
  return (char)FilterDriver;
}
