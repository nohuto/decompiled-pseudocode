/*
 * XREFs of imp_WdfCmResourceListAppendDescriptor @ 0x1C005E970
 * Callers:
 *     <none>
 * Callees:
 *     FxCmResourceListInsertDescriptor @ 0x1C005E690 (FxCmResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfCmResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  return FxCmResourceListInsertDescriptor(DriverGlobals, List, Descriptor, 0xFFFFFFFF);
}
