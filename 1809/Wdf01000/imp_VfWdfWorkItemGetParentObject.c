/*
 * XREFs of imp_VfWdfWorkItemGetParentObject @ 0x1C00BFA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfWorkItemGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  return WdfVersion.Functions.pfnWdfWorkItemGetParentObject(DriverGlobals, WorkItem);
}
