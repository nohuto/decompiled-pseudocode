/*
 * XREFs of imp_VfWdfPdoMarkMissing @ 0x1C00C2160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfPdoMarkMissing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfPdoMarkMissing)(
           DriverGlobals,
           Device);
}
