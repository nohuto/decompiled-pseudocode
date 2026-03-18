/*
 * XREFs of PopEsQueueStateEvaluation @ 0x140738908
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140789F90 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsHostStateChange @ 0x1408B4924 (PopEsHostStateChange.c)
 *     PopEsInStandbyEvaluate @ 0x1408B4990 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140738928 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
