/*
 * XREFs of UsbhPdoArmedForWake @ 0x1C000228C
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C000207C (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return *(_DWORD *)(PdoExt(a1) + 2352) >= 0;
}
