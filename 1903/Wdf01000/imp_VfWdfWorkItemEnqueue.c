/*
 * XREFs of imp_VfWdfWorkItemEnqueue @ 0x1C00C3A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfWorkItemEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  WdfVersion.Functions.pfnWdfWorkItemEnqueue(DriverGlobals, WorkItem);
}
