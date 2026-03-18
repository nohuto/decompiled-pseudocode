/*
 * XREFs of PopSetNotificationWork @ 0x1400F0C44
 * Callers:
 *     PopUserPresentSet @ 0x1401819F8 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x14018C46C (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1406A0AF0 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x140749E10 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x14075B258 (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
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
