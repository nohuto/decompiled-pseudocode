/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C015008C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A8A4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00CFD0C (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01481E0 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  DXGADAPTER **v15; // rbp
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v13 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v13 + 24) = 481LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = *((_QWORD *)SessionDataForSpecifiedSession + 2328);
  if ( v7 != PsGetCurrentProcess(v3, v2) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v14 + 24) = 482LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v12 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2319);
  while ( v12 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18552) )
  {
    v15 = (DXGADAPTER **)(v12 - 4);
    v16 = v12;
    v12 = (_QWORD *)*v12;
    SESSION_ADAPTER::Cleanup(v15, v10, v11);
    v17 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( v15 )
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v15);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2329) = 0LL;
}
