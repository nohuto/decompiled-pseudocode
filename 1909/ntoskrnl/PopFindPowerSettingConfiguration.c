/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x14069E2BC
 * Callers:
 *     PopGetPowerSettingValue @ 0x1400F0C8C (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x14018C46C (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1406A0AF0 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingValue @ 0x1406A0DB8 (PopGetSettingValue.c)
 *     PopQueryPowerSettingUlong @ 0x14072A99C (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x14069E344 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x14069E3B8 (PopStateIsSessionSpecific.c)
 */

__int64 *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  __int64 **ListHead; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx

  ListHead = (__int64 **)PopGetListHead(a1);
  v5 = *ListHead;
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != (__int64 *)ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    while ( v5 != (__int64 *)ListHead )
    {
      v6 = v5[4] - *a1;
      if ( !v6 )
        v6 = v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  return 0LL;
}
