/*
 * XREFs of imp_VfWdfDmaEnablerGetMaximumLength @ 0x1C00BC300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumLength(DriverGlobals, DmaEnabler);
}
