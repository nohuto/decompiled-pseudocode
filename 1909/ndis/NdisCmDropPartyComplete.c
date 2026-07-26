/*
 * XREFs of NdisCmDropPartyComplete @ 0x1C0083940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmDropPartyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisPartyHandle)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD))NdisPartyHandle + 4))(Status, *((_QWORD *)NdisPartyHandle + 2));
  if ( !Status )
  {
    ndisDereferenceVcPtr(*(_QWORD *)NdisPartyHandle);
    ExFreePoolWithTag(NdisPartyHandle, 0);
  }
}
