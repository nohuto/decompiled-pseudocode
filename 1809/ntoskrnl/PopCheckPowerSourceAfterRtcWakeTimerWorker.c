/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057DA10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013BA40 (PopOkayToQueueNextWorkItem.c)
 *     NtInitiatePowerAction @ 0x1406DDED0 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x1406E1FCC (PopQueryPowerSettingUlong.c)
 *     PopCurrentPowerStatePrecise @ 0x14071C190 (PopCurrentPowerStatePrecise.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  _BYTE v1[40]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  char v3; // [rsp+60h] [rbp+18h] BYREF

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
  PopOkayToQueueNextWorkItem((__int64)&unk_1404169E8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
