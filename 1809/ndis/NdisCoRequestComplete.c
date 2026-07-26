/*
 * XREFs of NdisCoRequestComplete @ 0x1C011D8E0
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00531B0 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C011C030 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequest @ 0x1C011D580 (NdisCoRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0052B90 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoOidRequestComplete @ 0x1C011D4C0 (NdisCoOidRequestComplete.c)
 *     ndisDereferenceAf @ 0x1C011E818 (ndisDereferenceAf.c)
 */

void __fastcall NdisCoRequestComplete(
        __int64 Status,
        PVOID P,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Pa)
{
  struct _NDIS_OID_REQUEST *v8; // r9

  if ( *((_DWORD *)Pa + 10) == -33554422 && *((_DWORD *)Pa + 8) == 1 )
  {
    if ( *((_DWORD *)P + 98) < 6u )
    {
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, PVOID))Pa + 9))(
        Status,
        *((_QWORD *)Pa + 11),
        *((_QWORD *)Pa + 10),
        *((_QWORD *)Pa + 12),
        Pa);
      ndisDereferenceAf(P);
    }
    else
    {
      NdisClNotifyCloseAddressFamilyComplete(P, Status);
    }
  }
  else
  {
    v8 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)Pa + 1);
    v8->DATA.QUERY_INFORMATION.BytesWritten = *((_DWORD *)Pa + 15);
    v8->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Pa + 16);
    NdisCoOidRequestComplete(P, NdisVcHandle, NdisPartyHandle, v8, Status);
    ExFreePoolWithTag(Pa, 0);
  }
}
