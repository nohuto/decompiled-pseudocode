/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1C0105134
 * Callers:
 *     PowerOffMonitor @ 0x1C00B0FB0 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B13C0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     <none>
 */

void SetProximityBlocking(void)
{
  if ( !HIDWORD(qword_1C02127DC) )
  {
    gProximityLastPowerPressTime = -1LL;
    ++gProximityScenarioCount;
    HIDWORD(qword_1C02127DC) = 1;
  }
}
