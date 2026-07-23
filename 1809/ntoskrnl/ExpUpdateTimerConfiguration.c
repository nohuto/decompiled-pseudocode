/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x1400E2088
 * Callers:
 *     ExpUpdateTimerResolution @ 0x1400E1F48 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(
        struct _SINGLE_LIST_ENTRY *a1,
        struct _SINGLE_LIST_ENTRY *a2,
        struct _SINGLE_LIST_ENTRY *a3)
{
  _SINGLE_LIST_ENTRY v7[3]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-E0h]
  _DWORD v9[44]; // [rsp+40h] [rbp-D8h] BYREF

  v9[0] = 1310721;
  memset(&v9[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v9, KiClockTimerOwner);
  v7[0].Next = a1;
  v7[1].Next = a2;
  v7[2].Next = a3;
  KeGenericProcessorCallback(
    (unsigned __int16 *)v9,
    (void (__fastcall *)(struct _KPRCB *, _SINGLE_LIST_ENTRY *))ExpUpdateTimerConfigurationWorker,
    v7,
    1uLL);
  return v8;
}
