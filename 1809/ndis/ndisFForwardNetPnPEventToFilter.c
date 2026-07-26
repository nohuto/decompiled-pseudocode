/*
 * XREFs of ndisFForwardNetPnPEventToFilter @ 0x1C00B872C
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B8630 (ndisFNetPnPEventInternal.c)
 *     ndisFNotifyDetach @ 0x1C00EC974 (ndisFNotifyDetach.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x1C0010620 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ndisFInvokeNetPnPEvent @ 0x1C00B880C (ndisFInvokeNetPnPEvent.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B8F1C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00C2FC4 (ndisShallowCopyNetPnPEvent.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(_QWORD *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v4; // r9
  unsigned __int8 v5; // cl
  __int16 v6; // ax
  int v7; // ebx
  struct NDISWATCHDOG__ *v8; // [rsp+30h] [rbp-D8h] BYREF
  char v9; // [rsp+40h] [rbp-C8h] BYREF
  char v10; // [rsp+41h] [rbp-C7h]
  __int16 v11; // [rsp+42h] [rbp-C6h]
  int v12; // [rsp+48h] [rbp-C0h]
  int v13; // [rsp+E0h] [rbp-28h]

  if ( !*(_QWORD *)(a1[2] + 280LL) )
    return NdisFNetPnPEvent(a1, a2);
  ndisShallowCopyNetPnPEvent(&v9, a2);
  v5 = *(_BYTE *)(v4 + 100);
  if ( v5 > 6u || v5 == 6 && *(_BYTE *)(v4 + 101) >= 0x32u )
  {
    v10 = 2;
    v6 = 172;
  }
  else
  {
    v13 |= 4u;
    v6 = 164;
    v10 = 1;
  }
  v11 = v6;
  ndisMakeWatchdog(&v8, a1, 18LL, *(_QWORD *)(v4 + 280), 270000, v12);
  v7 = ndisFInvokeNetPnPEvent(a1, &v9);
  if ( v8 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v8);
  return v7;
}
