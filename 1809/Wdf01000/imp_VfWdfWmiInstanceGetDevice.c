/*
 * XREFs of imp_VfWdfWmiInstanceGetDevice @ 0x1C00BF900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfWmiInstanceGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetDevice(DriverGlobals, WmiInstance);
}
