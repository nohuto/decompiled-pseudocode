/*
 * XREFs of ZwResetEvent @ 0x1401BB110
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x14065DEA0 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140866A5C (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
