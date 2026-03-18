/*
 * XREFs of imp_VfWdfIoTargetGetState @ 0x1C00C1940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoTargetGetState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfIoTargetGetState)(
           DriverGlobals,
           IoTarget);
}
