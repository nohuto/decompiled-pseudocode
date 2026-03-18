/*
 * XREFs of GET_FDO_POWER_STATE @ 0x1C00055FC
 * Callers:
 *     UsbhPdoSetDx @ 0x1C000138C (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002B50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005480 (UsbhFdoWakePoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return *(unsigned int *)(FdoExt(*(_QWORD *)(a1 + 8)) + 4172);
}
