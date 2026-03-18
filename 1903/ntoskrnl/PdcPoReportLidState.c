/*
 * XREFs of PdcPoReportLidState @ 0x1408AB960
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408B3074 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  int v2; // ebx
  bool v3; // zf
  int v5; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  v2 = 0;
  if ( PopErrataReportingIncorrectLidState || PopLidOpened == a1 )
  {
LABEL_7:
    v3 = a1 == 0;
    goto LABEL_8;
  }
  PopLidOpened = a1;
  v3 = a1 == 0;
  if ( !a1 )
  {
    if ( PopPlatformAoAc && !PopConsoleDisplayState )
      PopTriggerMonitorPowerEvent(0LL, 15LL);
    goto LABEL_7;
  }
LABEL_8:
  LOBYTE(v2) = !v3;
  v5 = v2;
  PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_CHANGE, 4LL, &v5);
  return PopReleasePolicyLock();
}
