/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140A22344
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x1401811D4 (PopReadUlongPowerKey.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 */

NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax

  PopReadUlongPowerKey(
    L"ChargerWeakDetectionThresholdPercent",
    (unsigned int *)&WeakChargerChargeDropMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(
    L"BatteryChargeTrajectoryThresholdPercent",
    (unsigned int *)&BatteryChargeTrajectoryThresholdMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
    PopBatteryEtwRegistered = 1;
  return result;
}
