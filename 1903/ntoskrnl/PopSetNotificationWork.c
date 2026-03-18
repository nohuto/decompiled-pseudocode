/*
 * XREFs of PopSetNotificationWork @ 0x1400EE750
 * Callers:
 *     PopUserPresentSet @ 0x140181308 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x14018BADC (PopInitilizeAcDcSettings.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1406A0760 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x140747F10 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x140749BB8 (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x1400EE334 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 */

struct _KTHREAD *__fastcall PopSetNotificationWork(unsigned int a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)(a1 & PopNotifyEvents);
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4);
    return PopCheckForWork();
  }
  return result;
}
