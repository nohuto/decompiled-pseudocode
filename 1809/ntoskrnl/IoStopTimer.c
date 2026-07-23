/*
 * XREFs of IoStopTimer @ 0x140283D70
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x14027EC04 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
