/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x140112808
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033A00 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140112720 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x140179644 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B065C (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
