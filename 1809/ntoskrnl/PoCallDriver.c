/*
 * XREFs of PoCallDriver @ 0x140176310
 * Callers:
 *     IoCancelFileOpen @ 0x14081BDC0 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140943420 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1400B8DF0 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
