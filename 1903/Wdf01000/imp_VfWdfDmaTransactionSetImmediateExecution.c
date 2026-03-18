/*
 * XREFs of imp_VfWdfDmaTransactionSetImmediateExecution @ 0x1C00C0640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionSetImmediateExecution(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 UseImmediateExecution)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetImmediateExecution(DriverGlobals, DmaTransaction, UseImmediateExecution);
}
