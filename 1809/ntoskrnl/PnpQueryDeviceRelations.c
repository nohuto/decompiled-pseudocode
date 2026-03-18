/*
 * XREFs of PnpQueryDeviceRelations @ 0x1406E8040
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x1406E7F30 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x14070B968 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x14083C5AC (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x14000E9CC (PnpSendIrp.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return PnpSendIrp(a1, (__int64)v10, v8, a3, a4);
}
