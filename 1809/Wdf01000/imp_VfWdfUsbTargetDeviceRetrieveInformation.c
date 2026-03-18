/*
 * XREFs of imp_VfWdfUsbTargetDeviceRetrieveInformation @ 0x1C00BF450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceRetrieveInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_USB_DEVICE_INFORMATION *Information)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, _WDF_USB_DEVICE_INFORMATION *))WdfVersion.Functions.pfnWdfUsbTargetDeviceRetrieveInformation)(
           DriverGlobals,
           UsbDevice,
           Information);
}
