/*
 * XREFs of ndisDeviceControlIrpHandler @ 0x1C0009CC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 */

__int64 __fastcall ndisDeviceControlIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisDeviceControlHandler(a1, *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 64), a2);
}
