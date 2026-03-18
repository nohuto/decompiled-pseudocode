/*
 * XREFs of GET_FDO_POWER_STATE @ 0x1C0002A14
 * Callers:
 *     UsbhPdoSetDx @ 0x1C00012DC (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002A50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005110 (UsbhFdoWakePoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return *(unsigned int *)(FdoExt(*(_QWORD *)(a1 + 8)) + 4172);
}
