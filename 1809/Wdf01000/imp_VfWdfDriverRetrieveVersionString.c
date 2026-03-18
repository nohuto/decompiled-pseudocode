/*
 * XREFs of imp_VfWdfDriverRetrieveVersionString @ 0x1C00BC8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfDriverRetrieveVersionString)(
           DriverGlobals,
           Driver,
           String);
}
