/*
 * XREFs of IoStopTimer @ 0x14019D980
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x14019D998 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
