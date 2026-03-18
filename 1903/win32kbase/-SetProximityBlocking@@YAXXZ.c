/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1C0107AA4
 * Callers:
 *     PowerOffMonitor @ 0x1C00B8460 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B8870 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     <none>
 */

void SetProximityBlocking(void)
{
  if ( !HIDWORD(qword_1C02157DC) )
  {
    gProximityLastPowerPressTime = -1LL;
    ++gProximityScenarioCount;
    HIDWORD(qword_1C02157DC) = 1;
  }
}
