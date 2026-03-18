/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14073AB68
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x14078C3F0 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsHostStateChange @ 0x1408B41F4 (PopEsHostStateChange.c)
 *     PopEsInStandbyEvaluate @ 0x1408B4260 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14073AB88 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
