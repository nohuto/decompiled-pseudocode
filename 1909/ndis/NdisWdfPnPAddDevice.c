/*
 * XREFs of NdisWdfPnPAddDevice @ 0x1C009F050
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 */

__int64 __fastcall NdisWdfPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  return ndisPnPAddDevice(a1, a2, a4);
}
