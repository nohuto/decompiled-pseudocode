/*
 * XREFs of NdisIMInitializeDeviceInstance @ 0x1C007F9C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007F9E0 (NdisIMInitializeDeviceInstanceEx.c)
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}
