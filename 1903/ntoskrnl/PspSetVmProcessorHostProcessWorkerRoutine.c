/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C9020
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     KeAndAffinityEx @ 0x1400BE320 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x1400BE4D0 (KeComplementAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x1400F8FD0 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  unsigned __int16 v3[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v3, 0, 0xA8uLL);
  PoCopyDeepIdleMask(v3);
  KeComplementAffinityEx((__int64)v3, v3);
  KeAndAffinityEx(v3, (unsigned __int16 *)KeActiveProcessors, v3);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v3) )
    KeGenericProcessorCallback(v3, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 2);
  return KeSetEvent(Event, 0, 0);
}
