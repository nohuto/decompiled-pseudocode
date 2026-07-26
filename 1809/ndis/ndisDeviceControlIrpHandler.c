/*
 * XREFs of ndisDeviceControlIrpHandler @ 0x1C00B57E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 */

__int64 __fastcall ndisDeviceControlIrpHandler(__int64 a1, __int64 a2)
{
  return ndisDeviceControlHandler(a1, *(_QWORD *)(a1 + 64), a2);
}
