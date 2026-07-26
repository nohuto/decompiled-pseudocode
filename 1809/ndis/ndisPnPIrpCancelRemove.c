/*
 * XREFs of ndisPnPIrpCancelRemove @ 0x1C00F4500
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisPowerSaveClearStop @ 0x1C00B8300 (ndisPowerSaveClearStop.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00F2EF4 (ndisPnPCancelRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpCancelRemove(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v8; // rax
  int v9; // esi

  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x22u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  ndisLogMiniportEvent(a2, 0x22u);
  v8 = *(_QWORD *)(a3 + 184);
  *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
  *(_OWORD *)(v8 - 56) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v8 - 40) = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v8 - 24) = *(_QWORD *)(v8 + 48);
  *(_BYTE *)(v8 - 69) = 0;
  v9 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3872), a3);
  if ( v9 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 1520) == 4 )
      *(_DWORD *)(a2 + 1520) = *(_DWORD *)(a2 + 1524);
    ndisPnPCancelRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)a2);
    ndisPowerSaveClearStop((struct _NDIS_MINIPORT_BLOCK *)a2, 1);
  }
  *a4 = 1;
  *a5 = 0;
  return (unsigned int)v9;
}
