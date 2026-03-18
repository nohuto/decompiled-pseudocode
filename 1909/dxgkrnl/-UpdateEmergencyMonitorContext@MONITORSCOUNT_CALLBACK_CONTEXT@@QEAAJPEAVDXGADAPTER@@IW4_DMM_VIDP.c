/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C014D7C4
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DED30 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C027057C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 2301LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 20) = a3;
  *(_BYTE *)(a1 + 29) = *(_DWORD *)(a2 + 2184) >= 0x2000;
  return 0LL;
}
