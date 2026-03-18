/*
 * XREFs of PnpQueryDeviceRelations @ 0x14070434C
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140697168 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x1407313CC (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x14073922C (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x140876DE8 (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1400ED8EC (PnpSendIrp.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
