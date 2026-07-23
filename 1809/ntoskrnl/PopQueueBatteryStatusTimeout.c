/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x1407202CC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140418AA8);
  _InterlockedExchange(&dword_140418A20, 1);
  return KiSetTimerEx((__int64)&stru_140418A28, -300000000LL, 0, 0, (__int64)&dword_140418A68);
}
