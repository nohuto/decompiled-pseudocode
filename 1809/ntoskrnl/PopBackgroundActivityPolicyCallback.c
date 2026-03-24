/*
 * XREFs of PopBackgroundActivityPolicyCallback @ 0x1402D6BD0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopTraceBackgroundActivityPolicyUpdate @ 0x1408750B8 (PopTraceBackgroundActivityPolicyUpdate.c)
 */

__int64 __fastcall PopBackgroundActivityPolicyCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int PowerSettingValue; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v19[5]; // [rsp+44h] [rbp-14h] BYREF

  PowerSettingValue = 0;
  PopAcquirePolicyLock(SettingGuid);
  v10 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v10 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v10 && ValueLength == 4 && Value )
  {
    v11 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, v8, 3u, &v18, v17, v19);
    if ( PowerSettingValue < 0 )
      goto LABEL_23;
    v11 = v18;
  }
  v12 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v12 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v12 && ValueLength == 4 && Value )
  {
    v14 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v12, 3u, &v18, v17, v19);
    if ( PowerSettingValue < 0 )
      goto LABEL_23;
    v14 = v18;
  }
  if ( !v14 || (v13 = 1LL, v11 != 1) || (PopAggressiveStandbyAppliedActions & 1) != 0 )
    v13 = 0LL;
  v15 = PopBackgroundActivityPolicy;
  if ( PopBackgroundActivityPolicy != (_DWORD)v13 )
  {
    PopBackgroundActivityPolicy = v13;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BACKGROUND_ACTIVITY_POLICY, (__int64)&PopBackgroundActivityPolicy, 4LL);
    PopTraceBackgroundActivityPolicyUpdate(v15);
  }
LABEL_23:
  PopReleasePolicyLock(v13, v12, v9);
  return (unsigned int)PowerSettingValue;
}
