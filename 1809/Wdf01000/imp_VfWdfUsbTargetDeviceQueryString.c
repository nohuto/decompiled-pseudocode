/*
 * XREFs of imp_VfWdfUsbTargetDeviceQueryString @ 0x1C00BF360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        wchar_t *String,
        wchar_t *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, wchar_t *, wchar_t *, unsigned __int8, unsigned __int16))WdfVersion.Functions.pfnWdfUsbTargetDeviceQueryString)(
           DriverGlobals,
           UsbDevice,
           Request,
           RequestOptions,
           String,
           NumCharacters,
           StringIndex,
           LangID);
}
