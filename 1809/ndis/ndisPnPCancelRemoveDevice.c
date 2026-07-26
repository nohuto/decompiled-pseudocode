/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00F2EF4
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00F2F8C (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00F4500 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+20h] [rbp-C8h] BYREF
  int v3; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x57u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x58u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1);
}
