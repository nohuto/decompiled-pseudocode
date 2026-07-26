/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x1C00F21E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(__int64 a1, struct _IRP *a2)
{
  return ndisDeviceControlHandler(*(_QWORD *)(a1 + 3856), (struct _NDIS_MINIPORT_BLOCK *)a1, a2);
}
