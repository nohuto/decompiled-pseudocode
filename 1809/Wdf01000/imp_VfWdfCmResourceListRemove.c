/*
 * XREFs of imp_VfWdfCmResourceListRemove @ 0x1C00BB260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCmResourceListRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List, __int64 Index)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemove(DriverGlobals, List, Index);
}
