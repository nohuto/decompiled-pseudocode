/*
 * XREFs of imp_VfWdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1C00C3430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        void *ConfigDescriptor,
        wchar_t *ConfigDescriptorLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, void *, wchar_t *))WdfVersion.Functions.pfnWdfUsbTargetDeviceRetrieveConfigDescriptor)(
           DriverGlobals,
           UsbDevice,
           ConfigDescriptor,
           ConfigDescriptorLength);
}
