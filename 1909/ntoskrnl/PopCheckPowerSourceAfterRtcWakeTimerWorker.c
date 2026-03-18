/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD890
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013DC1C (PopOkayToQueueNextWorkItem.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     NtInitiatePowerAction @ 0x1407272E0 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x14072A99C (PopQueryPowerSettingUlong.c)
 *     PopCurrentPowerStatePrecise @ 0x140749860 (PopCurrentPowerStatePrecise.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  _BYTE v1[40]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  char v3; // [rsp+60h] [rbp+18h] BYREF

  memset(v1, 0, 0x20uLL);
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(v1, 0LL);
    if ( !v1[0] )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(SystemAction, MinSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140442328);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
