/*
 * XREFs of PopEsWorkItemSchedule @ 0x14071B780
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14071B760 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407648E0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140878BF0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x1409DFCD8 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
