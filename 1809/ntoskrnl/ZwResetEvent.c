/*
 * XREFs of ZwResetEvent @ 0x1401BAF90
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x14065CD00 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckIsSdBus @ 0x14086581C (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, NumberOfWaitingThreads, v2);
}
