/*
 * XREFs of imp_VfWdfUsbTargetPipeWdmGetPipeHandle @ 0x1C00BF750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfUsbTargetPipeWdmGetPipeHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *UsbPipe)
{
  return WdfVersion.Functions.pfnWdfUsbTargetPipeWdmGetPipeHandle(DriverGlobals, UsbPipe);
}
