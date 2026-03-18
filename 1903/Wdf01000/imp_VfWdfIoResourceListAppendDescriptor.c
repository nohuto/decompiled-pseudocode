/*
 * XREFs of imp_VfWdfIoResourceListAppendDescriptor @ 0x1C00C1510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *, _IO_RESOURCE_DESCRIPTOR *))WdfVersion.Functions.pfnWdfIoResourceListAppendDescriptor)(
           DriverGlobals,
           ResourceList,
           Descriptor);
}
