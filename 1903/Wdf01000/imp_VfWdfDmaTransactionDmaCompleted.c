/*
 * XREFs of imp_VfWdfDmaTransactionDmaCompleted @ 0x1C00C03F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDmaTransactionDmaCompleted(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        int *Status)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, int *))WdfVersion.Functions.pfnWdfDmaTransactionDmaCompleted)(
           DriverGlobals,
           DmaTransaction,
           Status);
}
