/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1C014F980
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CCA90 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CE2F0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C014FA14 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 */

__int64 __fastcall DxgkRemoveSessionViewForCurrentSession(struct _LUID *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  __int64 v9; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = a2;
  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 74);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6);
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2317] != KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v15 + 24) = 708LL;
      WdLogEvent5_WdAssertion(v15);
    }
    return DXGSESSIONDATA::RemoveSourceViewFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a1, v4, a3);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14, v13);
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
