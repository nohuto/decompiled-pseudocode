/*
 * XREFs of IoStartTimer @ 0x140283D40
 * Callers:
 *     <none>
 * Callees:
 *     IopEnableTimer @ 0x14027EECC (IopEnableTimer.c)
 */

void __stdcall IoStartTimer(PDEVICE_OBJECT DeviceObject)
{
  if ( (DeviceObject->DeviceObjectExtension->ExtensionFlags & 0xF) == 0 )
    IopEnableTimer((__int64)DeviceObject->Timer);
}
