/*
 * XREFs of imp_VfWdfObjectDereferenceActual @ 0x1C00C1EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        void *Tag,
        __int64 Line,
        const char *File)
{
  WdfVersion.Functions.pfnWdfObjectDereferenceActual(DriverGlobals, Handle, Tag, Line, File);
}
