/*
 * XREFs of USBDeviceSurpriseRemove @ 0x1C0029A00
 * Callers:
 *     <none>
 * Callees:
 *     USBDeviceStop @ 0x1C0029920 (USBDeviceStop.c)
 */

__int64 __fastcall USBDeviceSurpriseRemove(__int64 a1)
{
  return USBDeviceStop(a1);
}
