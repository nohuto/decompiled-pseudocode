/*
 * XREFs of PopEsWorkItemSchedule @ 0x14071A500
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14071A4E0 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140763710 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408779B0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x1409DECD8 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
