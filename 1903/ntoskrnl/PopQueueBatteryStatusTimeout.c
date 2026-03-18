/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x140747E88
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PoEnableCriticalShutdown @ 0x140769D00 (PoEnableCriticalShutdown.c)
 * Callees:
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140443308);
  _InterlockedExchange(&dword_140443280, 1);
  return KiSetTimerEx((__int64)&stru_140443288, -300000000LL, 0, 0, (__int64)&dword_1404432C8);
}
