/*
 * XREFs of imp_VfWdfObjectReferenceActual @ 0x1C00C1F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfObjectReferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        void *Tag,
        __int64 Line,
        const char *File)
{
  WdfVersion.Functions.pfnWdfObjectReferenceActual(DriverGlobals, Handle, Tag, Line, File);
}
