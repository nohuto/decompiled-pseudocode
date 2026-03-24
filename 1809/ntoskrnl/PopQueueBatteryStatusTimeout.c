/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14071F02C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     CmCompleteRegistryInitialization @ 0x1407455B4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140417A08);
  _InterlockedExchange(&dword_140417980, 1);
  return KiSetTimerEx((__int64)&stru_140417988, -300000000LL, 0, 0, (__int64)&dword_1404179C8);
}
