/*
 * XREFs of USBDeviceSurpriseRemove @ 0x1C0029A20
 * Callers:
 *     <none>
 * Callees:
 *     USBDeviceStop @ 0x1C0029940 (USBDeviceStop.c)
 */

__int64 __fastcall USBDeviceSurpriseRemove(__int64 a1)
{
  return USBDeviceStop(a1);
}
