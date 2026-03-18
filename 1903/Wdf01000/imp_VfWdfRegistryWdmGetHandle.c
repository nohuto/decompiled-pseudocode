/*
 * XREFs of imp_VfWdfRegistryWdmGetHandle @ 0x1C00C2500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfRegistryWdmGetHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  return WdfVersion.Functions.pfnWdfRegistryWdmGetHandle(DriverGlobals, Key);
}
