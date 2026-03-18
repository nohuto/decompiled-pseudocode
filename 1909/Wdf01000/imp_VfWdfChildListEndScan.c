/*
 * XREFs of imp_VfWdfChildListEndScan @ 0x1C00BF0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfChildListEndScan(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListEndScan(DriverGlobals, ChildList);
}
