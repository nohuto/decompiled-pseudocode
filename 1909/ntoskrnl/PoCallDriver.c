/*
 * XREFs of PoCallDriver @ 0x140177620
 * Callers:
 *     IoCancelFileOpen @ 0x140855520 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140982DD0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
