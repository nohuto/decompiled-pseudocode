/*
 * XREFs of NdisCmDropPartyComplete @ 0x1C0083770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceVcPtr @ 0x1C00871C0 (ndisDereferenceVcPtr.c)
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
