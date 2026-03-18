/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C013BA34
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A2E4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00CED08 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01392AC (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  DXGADAPTER **v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v9 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v9 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = *((_QWORD *)SessionDataForSpecifiedSession + 2328);
  if ( v6 != PsGetCurrentProcess(v2, v1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 472LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v8 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2319);
  while ( v8 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18552) )
  {
    v11 = (DXGADAPTER **)(v8 - 4);
    v12 = v8;
    v8 = (_QWORD *)*v8;
    SESSION_ADAPTER::Cleanup(v11);
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( v11 )
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v11);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2329) = 0LL;
}
