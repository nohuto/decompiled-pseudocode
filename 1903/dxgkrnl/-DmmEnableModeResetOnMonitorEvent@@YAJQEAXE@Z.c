/*
 * XREFs of ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02B29E8
 * Callers:
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C00 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0244658 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     MonitorDRTTest @ 0x1C02C8F9C (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmEnableModeResetOnMonitorEvent(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  PERESOURCE v11; // rdi
  _DWORD *Address; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax

  v3 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2, a3);
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = a1[319];
  if ( !v11 )
  {
    v5 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v5 + 24) = a1;
    goto LABEL_3;
  }
  Address = v11->Address;
  if ( Address )
  {
    v14 = Address[120];
    if ( v3 )
    {
      if ( !v14 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v8, v7);
        WdLogEvent5_WdAssertion(v15);
        v14 = Address[120];
      }
      v16 = v14 - 1;
    }
    else
    {
      v16 = v14 + 1;
    }
    Address[120] = v16;
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
