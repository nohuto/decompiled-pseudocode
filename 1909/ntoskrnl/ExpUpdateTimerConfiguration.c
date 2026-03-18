/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x1400FBBEC
 * Callers:
 *     ExpUpdateTimerResolution @ 0x1400FB49C (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v8; // [rsp+38h] [rbp-91h]
  _DWORD v9[44]; // [rsp+40h] [rbp-89h] BYREF

  v8 = 0LL;
  v9[0] = 1310721;
  memset(&v9[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v9, KiClockTimerOwner);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  KeGenericProcessorCallback(v9, ExpUpdateTimerConfigurationWorker, v7, 1LL);
  return (unsigned int)v8;
}
