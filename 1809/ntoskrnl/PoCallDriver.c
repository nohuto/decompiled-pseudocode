/*
 * XREFs of PoCallDriver @ 0x140176410
 * Callers:
 *     IoCancelFileOpen @ 0x14081CFC0 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140944420 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
