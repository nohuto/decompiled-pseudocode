/*
 * XREFs of IoStopTimer @ 0x14019D200
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x14019D218 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
