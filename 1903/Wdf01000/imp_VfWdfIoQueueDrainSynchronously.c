/*
 * XREFs of imp_VfWdfIoQueueDrainSynchronously @ 0x1C00C0F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueDrainSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueDrainSynchronously(DriverGlobals, Queue);
}
