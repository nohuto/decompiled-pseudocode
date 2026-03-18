/*
 * XREFs of imp_VfWdfSpinLockAcquire @ 0x1C00C2EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFSPINLOCK__ *SpinLock)
{
  WdfVersion.Functions.pfnWdfSpinLockAcquire(DriverGlobals, SpinLock);
}
