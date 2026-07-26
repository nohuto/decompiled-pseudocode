/*
 * XREFs of ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C003F640
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 */

__int64 __fastcall ndisWdmPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2)
{
  return ndisPnPAddDevice(a1, a2, 0LL);
}
