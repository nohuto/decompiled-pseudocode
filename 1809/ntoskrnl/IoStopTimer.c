/*
 * XREFs of IoStopTimer @ 0x140283B80
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x14027EA14 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
