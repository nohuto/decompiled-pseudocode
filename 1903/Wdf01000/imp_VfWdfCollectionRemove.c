/*
 * XREFs of imp_VfWdfCollectionRemove @ 0x1C00BF360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCollectionRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection, void *Item)
{
  WdfVersion.Functions.pfnWdfCollectionRemove(DriverGlobals, Collection, Item);
}
