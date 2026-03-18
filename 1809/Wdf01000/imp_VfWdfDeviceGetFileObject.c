/*
 * XREFs of imp_VfWdfDeviceGetFileObject @ 0x1C00BB9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _FILE_OBJECT *FileObject)
{
  return WdfVersion.Functions.pfnWdfDeviceGetFileObject(DriverGlobals, Device, FileObject);
}
