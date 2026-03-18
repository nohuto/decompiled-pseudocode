/*
 * XREFs of PopEsWorkItemSchedule @ 0x140738928
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x140738908 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x14078A0F0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408B4A60 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A06D78 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
