/*
 * XREFs of DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0278650
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C00C6EF0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00C9990 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CCA90 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01284EC (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00EBF54 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0148254 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyCddDeviceAndContextForCurrentSession(struct _LUID *a1, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  __int64 v7; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 74);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v10 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v12, v11);
    v13 = (_QWORD *)v10;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
  if ( !SessionAdapterFromLuid )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v19[3] = a1->HighPart;
    v19[4] = a1->LowPart;
    v13 = v19;
    v19[5] = -1073741811LL;
    goto LABEL_6;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(SessionAdapterFromLuid, a2);
  return 0LL;
}
