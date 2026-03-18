/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x140749D88
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PoEnableCriticalShutdown @ 0x1407596CC (PoEnableCriticalShutdown.c)
 * Callees:
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140443288);
  _InterlockedExchange(&dword_140443200, 1);
  return KiSetTimerEx((__int64)&stru_140443208, -300000000LL, 0, 0, (__int64)&dword_140443248);
}
