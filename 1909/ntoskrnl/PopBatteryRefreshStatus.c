/*
 * XREFs of PopBatteryRefreshStatus @ 0x140182780
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopBatteryQueueWork @ 0x140171F50 (PopBatteryQueueWork.c)
 */

void PopBatteryRefreshStatus()
{
  PopBatteryQueueWork(1u);
}
