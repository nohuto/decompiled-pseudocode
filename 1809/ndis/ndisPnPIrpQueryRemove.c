/*
 * XREFs of ndisPnPIrpQueryRemove @ 0x1C00F4780
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00F30DC (ndisPnPQueryRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpQueryRemove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, bool *a5)
{
  int v7; // edi

  v7 = -1073741823;
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x21u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  ndisLogMiniportEvent(a2, 0x21u);
  if ( !*(_DWORD *)(a2 + 3480) )
  {
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 1);
    KeWaitForSingleObject((PVOID)(a2 + 4256), Executive, 0, 0, 0LL);
    if ( (*(_DWORD *)(a2 + 124) & 0x100) != 0 )
      v7 = -1073740537;
    else
      v7 = ndisPnPQueryRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a2 + 1524) = *(_DWORD *)(a2 + 1520);
      *(_DWORD *)(a2 + 1520) = 4;
    }
  }
  *(_DWORD *)(a3 + 48) = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
