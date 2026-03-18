/*
 * XREFs of imp_VfWdfStringCreate @ 0x1C00C2F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, const _UNICODE_STRING *, _WDF_OBJECT_ATTRIBUTES *, WDFSTRING__ **))WdfVersion.Functions.pfnWdfStringCreate)(
           DriverGlobals,
           UnicodeString,
           StringAttributes,
           String);
}
