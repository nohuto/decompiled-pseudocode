/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C004D590
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C027DD48 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C00BAF08 (MonitorGetNumConnectedMonitor.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v3);
    v2 = *((_QWORD *)this + 1);
  }
  if ( (int)MonitorGetNumConnectedMonitor(*(DXGADAPTER **)(v2 + 16)) < 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  return 1LL;
}
