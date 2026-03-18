/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x1400EBD50
 * Callers:
 *     IoAttachDevice @ 0x140855D20 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400EBD70 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, AttachedToDeviceObject) == 0 ? 0xC000000E : 0;
}
