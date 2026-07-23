/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14071B760
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140764780 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140878B60 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14071B780 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
