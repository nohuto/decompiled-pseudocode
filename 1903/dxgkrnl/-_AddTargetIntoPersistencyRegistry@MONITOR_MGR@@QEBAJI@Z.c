/*
 * XREFs of ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7704
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7E90 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02C8708 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C017512C (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02C8A4C (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_AddTargetIntoPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  __int64 v3; // rax
  MONITOR_MGR *v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  int result; // eax
  __int64 v8; // rcx
  const WCHAR *v9; // rdx
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int ValueData; // [rsp+30h] [rbp-9h] BYREF
  PCWSTR Path; // [rsp+38h] [rbp-1h] BYREF
  WCHAR ValueName[32]; // [rsp+40h] [rbp+7h] BYREF

  ValueData = a2;
  v3 = WdLogNewEntry5_WdTrace(this, a2);
  v4 = (MONITOR_MGR *)ValueData;
  *(_QWORD *)(v3 + 24) = ValueData;
  v5 = ValueData;
  if ( ValueData == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, 0xFFFFFFFFLL);
    WdLogEvent5_WdAssertion(v6);
    v5 = -1;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v4, v5, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 131078LL, (void **)&Path);
    if ( result >= 0 )
    {
      v9 = Path;
      if ( !Path )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8, 0LL);
        WdLogEvent5_WdAssertion(v10);
        v9 = Path;
      }
      v11 = RtlWriteRegistryValue(0x40000000u, v9, ValueName, 4u, &ValueData, 4u);
      v15 = v11;
      if ( v11 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v13, v12, v14);
        *(_QWORD *)(v16 + 24) = ValueData;
        *(_QWORD *)(v16 + 32) = v15;
        WdLogEvent5_WdError(v16);
      }
      ZwClose((HANDLE)Path);
      return v15;
    }
  }
  return result;
}
