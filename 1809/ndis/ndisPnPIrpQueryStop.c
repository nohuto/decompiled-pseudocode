/*
 * XREFs of ndisPnPIrpQueryStop @ 0x1C00F4860
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ndisPnPQueryStopDevice @ 0x1C0118E30 (ndisPnPQueryStopDevice.c)
 */

__int64 __fastcall ndisPnPIrpQueryStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4, bool *a5)
{
  int v7; // edx

  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x28u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  ndisLogMiniportEvent(a2, 0x25u);
  if ( *(_DWORD *)(a2 + 3480) )
  {
    v7 = -1073741823;
  }
  else
  {
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 4);
    *(_DWORD *)(a2 + 1524) = *(_DWORD *)(a2 + 1520);
    *(_DWORD *)(a2 + 1520) = 2;
    v7 = ndisPnPQueryStopDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  *(_DWORD *)(a3 + 48) = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
