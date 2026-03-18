/*
 * XREFs of imp_VfWdfFileObjectGetFileName @ 0x1C00C0BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNICODE_STRING *__fastcall imp_VfWdfFileObjectGetFileName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetFileName(DriverGlobals, FileObject);
}
