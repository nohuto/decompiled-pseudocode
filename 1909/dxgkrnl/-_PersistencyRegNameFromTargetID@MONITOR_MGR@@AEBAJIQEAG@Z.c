/*
 * XREFs of ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02C8B0C
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178E88 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C77C4 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7C5C (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_PersistencyRegNameFromTargetID(
        MONITOR_MGR *this,
        __int64 a2,
        unsigned __int16 *const a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  *a3 = 0;
  *(_QWORD *)&String.Length = 4063232LL;
  String.Buffer = a3;
  v7 = RtlIntegerToUnicodeString(v3, 0x10u, &String);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v3;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    a3[String.Length] = 0;
  }
  return (unsigned int)v11;
}
