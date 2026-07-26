/*
 * XREFs of ndisFilterIndicatePMOffloadReject @ 0x1C0072F5C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C0022CDC (ndisDeletePatternEntry.c)
 */

char __fastcall ndisFilterIndicatePMOffloadReject(__int64 a1, __int64 a2)
{
  char v3; // di

  v3 = 1;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    if ( *(_DWORD *)(a2 + 96) )
    {
      if ( ndisDeletePatternEntry((void **)(a1 + 728), **(_DWORD **)(a2 + 48)) )
        --*(_DWORD *)(a2 + 96);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
