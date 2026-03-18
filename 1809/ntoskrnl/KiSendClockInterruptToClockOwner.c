/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x1400FD148
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140060910 (KeResumeClockTimerFromIdle.c)
 *     KiTimer2Expiration @ 0x1400FB3D0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14012E9F0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14016FE14 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140299568 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A40 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
