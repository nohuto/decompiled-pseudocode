/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C0149330
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00F3C78 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0122734 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C013D52C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGSESSIONMGR *v21; // rbx
  __int64 v22; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v25; // rax
  OUTPUTDUPL_SESSION_MGR *v26; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _BYTE v28[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v29[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v30[72]; // [rsp+68h] [rbp-60h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 3036LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( DXGPROCESS::GetCurrent(a1, (__int64)a2) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v28,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v28, 0xFFFFFFFFLL, 0LL) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 2552),
          lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_,
          0LL);
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v10, v9);
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
      v16[3] = v3;
      v16[4] = a2;
      v16[5] = a3;
    }
    v21 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 74);
    if ( v21 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v21, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v26 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v26 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v20, v19);
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v26, CurrentProcess);
        goto LABEL_10;
      }
      v25 = WdLogNewEntry5_WdError(v20, v19, v22);
      *(_QWORD *)(v25 + 24) = 3096LL;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v20, v19, v22);
      *(_QWORD *)(v25 + 24) = 3089LL;
    }
    WdLogEvent5_WdError(v25);
LABEL_10:
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    return;
  }
  v12 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  *(_QWORD *)(v12 + 24) = 3042LL;
  WdLogEvent5_WdWarning(v12);
}
