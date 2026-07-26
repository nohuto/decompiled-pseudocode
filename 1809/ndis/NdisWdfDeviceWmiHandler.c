/*
 * XREFs of NdisWdfDeviceWmiHandler @ 0x1C00F2210
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 */

NTSTATUS __fastcall NdisWdfDeviceWmiHandler(__int64 a1, _IRP *a2)
{
  return ndisWMIDispatch(*(_QWORD *)(a1 + 3856), (struct _NDIS_MINIPORT_BLOCK *)a1, a2);
}
