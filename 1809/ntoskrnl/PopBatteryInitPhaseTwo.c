/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x1409DBE54
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x140190DA8 (PopReadUlongPowerKey.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 */

NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax

  PopReadUlongPowerKey(L"ChargerWeakDetectionThresholdPercent", &WeakChargerChargeDropMilliPercent);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(L"BatteryChargeTrajectoryThresholdPercent", &BatteryChargeTrajectoryThresholdMilliPercent);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
    PopBatteryEtwRegistered = 1;
  return result;
}
