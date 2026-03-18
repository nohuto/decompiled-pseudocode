/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C015E660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C00ACF28 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DXGGLOBAL::AdvancedColorPowerSettingsCallback(
        __int64 SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  DXGGLOBAL *v13; // rcx
  char v15; // [rsp+40h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(SettingGuid);
    *(_QWORD *)(v6 + 24) = 6917LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *Value >= 2u )
  {
    v7 = WdLogNewEntry5_WdAssertion(SettingGuid);
    *(_QWORD *)(v7 + 24) = 6918LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1
    && *(_QWORD *)(SettingGuid + 8) == *(_QWORD *)GUID_ADVANCED_COLOR_QUALITY_BIAS.Data4 )
  {
    v8 = *Value != 0;
    if ( v8 != *((_BYTE *)DXGGLOBAL::GetGlobal(SettingGuid) + 20444) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal(v9) + 20444) = v8;
      v15 = 0;
      Global = DXGGLOBAL::GetGlobal(v10);
      if ( (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                           (__int64)Global,
                           (__int64 (__fastcall *)(_QWORD *, __int64))FindDisplayModeResetNeededDueToHdrPowerPolicy,
                           (__int64)&v15,
                           1) == -2147483622 )
      {
        if ( v15 )
        {
          DXGGLOBAL::GetGlobal(v12);
          DXGGLOBAL::HdrPowerPolicyChangeCallout(v13);
        }
      }
    }
  }
  return 0LL;
}
