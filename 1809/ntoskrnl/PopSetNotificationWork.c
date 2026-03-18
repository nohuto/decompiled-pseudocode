/*
 * XREFs of PopSetNotificationWork @ 0x1400041F0
 * Callers:
 *     PopUserPresentSet @ 0x1401777D8 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x14017DD9C (PopInitilizeAcDcSettings.c)
 *     PoRegisterPowerSettingCallback @ 0x140589EE0 (PoRegisterPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14058E66C (PopGetSettingNotificationName.c)
 *     PopExecutePowerAction @ 0x1406DE110 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14071F120 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x1407476D4 (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x140010620 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
