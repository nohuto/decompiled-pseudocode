/*
 * XREFs of ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C023927C
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C003E674 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 */

__int64 __fastcall DetermineDefaultTopology(int a1, char a2)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  unsigned __int16 v9; // [rsp+40h] [rbp+18h] BYREF

  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v9);
  v6 = MultiScreenDefaultShellTopology;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = v9;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdAssertion(v7);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    if ( !a1 )
      return 4LL;
    result = 3LL;
    if ( a2 )
      return 4LL;
  }
  return result;
}
