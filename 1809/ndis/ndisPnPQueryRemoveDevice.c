/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C00F30DC
 * Callers:
 *     ndisPnPIrpQueryRemove @ 0x1C00F4780 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPQueryStopDevice @ 0x1C0118E30 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+20h] [rbp-C8h] BYREF
  int v5; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x55u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1, a1->UserModeOpenReferences);
  if ( (a1->Flags & 0x40000000) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(&v4, 0LL);
    v5 = 2;
    v2 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v4);
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x56u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1, v2);
  return v2;
}
