/*
 * XREFs of imp_VfWdfWaitLockAcquire @ 0x1C00C3810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock, __int64 *Timeout)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWAITLOCK__ *, __int64 *))WdfVersion.Functions.pfnWdfWaitLockAcquire)(
           DriverGlobals,
           Lock,
           Timeout);
}
