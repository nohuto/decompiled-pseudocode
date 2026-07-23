/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x14058C7CC
 * Callers:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x14017DEFC (PopInitilizeAcDcSettings.c)
 *     PopGetSettingValue @ 0x14058A744 (PopGetSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14058F66C (PopGetSettingNotificationName.c)
 *     PopQueryPowerSettingUlong @ 0x1406E326C (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x14058C854 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x14058C8C8 (PopStateIsSessionSpecific.c)
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
