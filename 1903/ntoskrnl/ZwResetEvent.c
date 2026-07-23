/*
 * XREFs of ZwResetEvent @ 0x1401C2F10
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x140626660 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A1D08 (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
