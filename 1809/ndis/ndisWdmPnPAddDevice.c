/*
 * XREFs of ndisWdmPnPAddDevice @ 0x1C00D2080
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 */

__int64 __fastcall ndisWdmPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2)
{
  return ndisPnPAddDevice(a1, a2, 0LL, 0LL);
}
