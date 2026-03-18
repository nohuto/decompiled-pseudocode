/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14071A4E0
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1407635B0 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140877920 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14071A500 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
