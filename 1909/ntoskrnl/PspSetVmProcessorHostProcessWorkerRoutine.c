/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C8900
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     KeAndAffinityEx @ 0x14009E1A0 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x14009E350 (KeComplementAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x1400FCA70 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
