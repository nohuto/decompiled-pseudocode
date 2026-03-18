/*
 * XREFs of imp_VfWdfFileObjectGetFlags @ 0x1C00BCBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfFileObjectGetFlags(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfFileObjectGetFlags)(
           DriverGlobals,
           FileObject);
}
