/*
 * XREFs of ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00140BC
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ndisFNotifyDetach @ 0x1C008F250 (ndisFNotifyDetach.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x1C00141C0 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FC61C (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00FCDB8 (ndisShallowCopyNetPnPEvent.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(
        struct _NDIS_FILTER_BLOCK *a1,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  __int64 v5; // r9
  unsigned __int8 v6; // cl
  USHORT v7; // ax
  int v8; // ebx
  struct NDISWATCHDOG__ *v9; // [rsp+30h] [rbp-79h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v10; // [rsp+40h] [rbp-69h] BYREF

  memset(&v10, 0, sizeof(v10));
  if ( !a1->FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler )
    return NdisFNetPnPEvent(a1, NetPnPEventNotification);
  ndisShallowCopyNetPnPEvent(&v10, NetPnPEventNotification);
  v6 = *(_BYTE *)(v5 + 100);
  if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v5 + 101) >= 0x32u )
  {
    v10.Header.Revision = 2;
    v7 = 172;
  }
  else
  {
    v10.Flags |= 4u;
    v7 = 164;
    v10.Header.Revision = 1;
  }
  v10.Header.Size = v7;
  ndisMakeWatchdog(&v9, a1, 18LL, *(_QWORD *)(v5 + 280), 270000, v10.NetPnPEvent.NetEvent);
  v8 = ndisFInvokeNetPnPEvent(a1, &v10);
  if ( v9 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v9);
  return v8;
}
