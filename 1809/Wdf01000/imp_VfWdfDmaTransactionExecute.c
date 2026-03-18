/*
 * XREFs of imp_VfWdfDmaTransactionExecute @ 0x1C00BC450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        void *Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, void *))WdfVersion.Functions.pfnWdfDmaTransactionExecute)(
           DriverGlobals,
           DmaTransaction,
           Context);
}
