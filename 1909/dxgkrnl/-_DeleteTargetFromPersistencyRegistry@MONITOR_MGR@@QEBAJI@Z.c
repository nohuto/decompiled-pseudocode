/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7C5C
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02C87C8 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0178F1C (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02C8B0C (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  MONITOR_MGR *v6; // rcx
  __int64 v7; // rax
  int result; // eax
  __int64 v9; // rcx
  const WCHAR *v10; // rdx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  v4 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = (unsigned int)a2;
  if ( v2 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v6, v2, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 983103LL, (void **)&Path);
    if ( result >= 0 )
    {
      v10 = Path;
      if ( !Path )
      {
        v11 = WdLogNewEntry5_WdAssertion(v9, 0LL);
        WdLogEvent5_WdAssertion(v11);
        v10 = Path;
      }
      v12 = RtlDeleteRegistryValue(0x40000000u, v10, ValueName);
      v16 = v12;
      if ( v12 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = v4;
        *(_QWORD *)(v17 + 32) = v16;
        WdLogEvent5_WdError(v17);
      }
      ZwClose((HANDLE)Path);
      return v16;
    }
  }
  return result;
}
