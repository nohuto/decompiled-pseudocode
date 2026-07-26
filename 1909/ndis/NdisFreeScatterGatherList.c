/*
 * XREFs of NdisFreeScatterGatherList @ 0x1C0078E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeScatterGatherList(
        NDIS_HANDLE NdisHandle,
        PSCATTER_GATHER_LIST ScatterGatherListBuffer,
        BOOLEAN WriteToDevice)
{
  __int64 v3; // rcx

  if ( NdisHandle )
  {
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( *(_BYTE *)NdisHandle != 17 )
    {
      return;
    }
    v3 = *((_QWORD *)NdisHandle + 63);
    if ( v3 )
      (*(void (__fastcall **)(_QWORD, PSCATTER_GATHER_LIST, BOOLEAN))(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 96LL))(
        *(_QWORD *)(v3 + 24),
        ScatterGatherListBuffer,
        WriteToDevice);
  }
}
