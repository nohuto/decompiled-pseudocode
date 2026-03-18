/*
 * XREFs of PoCallDriver @ 0x1401762F0
 * Callers:
 *     IoCancelFileOpen @ 0x14081BDE0 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140943420 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1400B8DD0 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
