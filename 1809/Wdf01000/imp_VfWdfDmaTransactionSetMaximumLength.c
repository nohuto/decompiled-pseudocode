/*
 * XREFs of imp_VfWdfDmaTransactionSetMaximumLength @ 0x1C00BC660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionSetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 MaximumLength)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetMaximumLength(DriverGlobals, DmaTransaction, MaximumLength);
}
