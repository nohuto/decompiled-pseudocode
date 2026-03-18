/*
 * XREFs of imp_VfWdfPdoInitAddDeviceText @ 0x1C00BDFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _UNICODE_STRING *, const _UNICODE_STRING *, unsigned int))WdfVersion.Functions.pfnWdfPdoInitAddDeviceText)(
           DriverGlobals,
           DeviceInit,
           DeviceDescription,
           DeviceLocation,
           LocaleId);
}
