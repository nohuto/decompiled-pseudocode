/*
 * XREFs of PopBatteryRefreshStatus @ 0x140182090
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopBatteryQueueWork @ 0x140176E10 (PopBatteryQueueWork.c)
 */

void PopBatteryRefreshStatus()
{
  PopBatteryQueueWork(1u);
}
