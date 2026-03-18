/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferLA @ 0x1C003972C
 * Callers:
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00169C4 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x1C0048B14 (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferLA(__int64 a1)
{
  return XilCoreUsbDevice_GetDeviceContextBufferLA(a1 + 608 + (*(_BYTE *)(a1 + 657) != 0 ? 8 : 0));
}
