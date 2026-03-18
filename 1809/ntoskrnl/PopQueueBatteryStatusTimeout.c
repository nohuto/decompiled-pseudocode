/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14071F04C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     CmCompleteRegistryInitialization @ 0x1407455D4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140417928);
  _InterlockedExchange(&dword_1404178A0, 1);
  return KiSetTimerEx((__int64)&stru_1404178A8, -300000000LL, 0, 0, (__int64)&dword_1404178E8);
}
