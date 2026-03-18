/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x140111DF8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033DF0 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x14009FD10 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140111D10 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x140179D34 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
