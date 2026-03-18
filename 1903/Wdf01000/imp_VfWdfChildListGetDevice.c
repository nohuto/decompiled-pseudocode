/*
 * XREFs of imp_VfWdfChildListGetDevice @ 0x1C00BF0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfChildListGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  return WdfVersion.Functions.pfnWdfChildListGetDevice(DriverGlobals, ChildList);
}
