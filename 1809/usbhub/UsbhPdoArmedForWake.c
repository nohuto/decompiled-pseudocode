/*
 * XREFs of UsbhPdoArmedForWake @ 0x1C0002178
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return *(_DWORD *)(PdoExt(a1) + 2352) >= 0;
}
