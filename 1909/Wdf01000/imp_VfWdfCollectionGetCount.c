/*
 * XREFs of imp_VfWdfCollectionGetCount @ 0x1C00BF2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *))WdfVersion.Functions.pfnWdfCollectionGetCount)(
           DriverGlobals,
           Collection);
}
