/*
 * XREFs of PopBackgroundActivityPolicyCallback @ 0x1402D6DC0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopTraceBackgroundActivityPolicyUpdate @ 0x140876318 (PopTraceBackgroundActivityPolicyUpdate.c)
 */

__int64 __fastcall PopBackgroundActivityPolicyCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int PowerSettingValue; // edi
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // ebp
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-18h] BYREF
  WNF_CHANGE_STAMP v18[5]; // [rsp+44h] [rbp-14h] BYREF

  PowerSettingValue = 0;
  PopAcquirePolicyLock(SettingGuid);
  v9 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v9 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v9 && ValueLength == 4 && Value )
  {
    v10 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, v8, 3u, &v17, v16, v18);
    if ( PowerSettingValue < 0 )
      goto LABEL_23;
    v10 = v17;
  }
  v11 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v11 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v11 && ValueLength == 4 && Value )
  {
    v12 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v11, 3u, &v17, v16, v18);
    if ( PowerSettingValue < 0 )
      goto LABEL_23;
    v12 = v17;
  }
  if ( !v12 || (v13 = 1, v10 != 1) || (PopAggressiveStandbyAppliedActions & 1) != 0 )
    v13 = 0;
  v14 = PopBackgroundActivityPolicy;
  if ( PopBackgroundActivityPolicy != v13 )
  {
    PopBackgroundActivityPolicy = v13;
    ZwUpdateWnfStateData(&WNF_PO_BACKGROUND_ACTIVITY_POLICY, &PopBackgroundActivityPolicy, 4u, 0LL, 0LL, 0, 0);
    PopTraceBackgroundActivityPolicyUpdate(v14);
  }
LABEL_23:
  PopReleasePolicyLock();
  return (unsigned int)PowerSettingValue;
}
