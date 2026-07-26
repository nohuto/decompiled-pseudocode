/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00F2F8C
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00F45E0 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00F2EF4 (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x51u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x52u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
}
