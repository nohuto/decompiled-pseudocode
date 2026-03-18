/*
 * XREFs of DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C011F1C4 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C011FE60 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0139320 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyCddDeviceAndContextForCurrentSession(struct _LUID *a1, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v9);
    v10 = (_QWORD *)v8;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
  if ( !SessionAdapterFromLuid )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14[3] = a1->HighPart;
    v14[4] = a1->LowPart;
    v10 = v14;
    v14[5] = -1073741811LL;
    goto LABEL_6;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(SessionAdapterFromLuid, a2);
  return 0LL;
}
