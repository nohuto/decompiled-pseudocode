/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferLA @ 0x1C00346E4
 * Callers:
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0013E04 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x1C00430D0 (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferLA(__int64 a1)
{
  return XilCoreUsbDevice_GetDeviceContextBufferLA(a1 + 600 + (*(_BYTE *)(a1 + 649) != 0 ? 8 : 0));
}
