/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C017FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C00C2FF8 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGGLOBAL *v16; // rcx
  char v18; // [rsp+40h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(SettingGuid, Value);
    *(_QWORD *)(v6 + 24) = 7745LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *Value >= 2u )
  {
    v7 = WdLogNewEntry5_WdAssertion(SettingGuid, Value);
    *(_QWORD *)(v7 + 24) = 7746LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1
    && *(_QWORD *)(SettingGuid + 8) == *(_QWORD *)GUID_ADVANCED_COLOR_QUALITY_BIAS.Data4 )
  {
    v8 = *Value != 0;
    if ( v8 != *((_BYTE *)DXGGLOBAL::GetGlobal(SettingGuid, (__int64)Value) + 304116) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal(v10, v9) + 304116) = v8;
      v18 = 0;
      Global = DXGGLOBAL::GetGlobal(v12, v11);
      if ( (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                           (__int64)Global,
                           (__int64)FindDisplayModeResetNeededDueToHdrPowerPolicy,
                           (__int64)&v18,
                           1) == -2147483622 )
      {
        if ( v18 )
        {
          DXGGLOBAL::GetGlobal(v15, v14);
          DXGGLOBAL::HdrPowerPolicyChangeCallout(v16);
        }
      }
    }
  }
  return 0LL;
}
