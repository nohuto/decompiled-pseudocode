/*
 * XREFs of PopEsWorkItemSchedule @ 0x14073AB88
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14073AB68 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x14078C550 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408B4330 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A07294 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
