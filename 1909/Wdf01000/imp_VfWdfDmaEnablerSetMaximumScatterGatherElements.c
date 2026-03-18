/*
 * XREFs of imp_VfWdfDmaEnablerSetMaximumScatterGatherElements @ 0x1C00C0340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 MaximumFragments)
{
  WdfVersion.Functions.pfnWdfDmaEnablerSetMaximumScatterGatherElements(DriverGlobals, DmaEnabler, MaximumFragments);
}
