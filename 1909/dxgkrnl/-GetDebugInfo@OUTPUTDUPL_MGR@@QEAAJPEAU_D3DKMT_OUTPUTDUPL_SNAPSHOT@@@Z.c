/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0272A64
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C0276778 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C02712DC (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0273300 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z @ 0x1C027920C (-GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  __int64 NumOutputDuplContexts; // rdx
  unsigned __int64 v6; // rcx
  UINT v7; // esi
  __int64 v8; // rbx
  OUTPUTDUPL_CONTEXT **v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  __int64 v15; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v18; // rax
  struct DXGFASTMUTEX *const *v19; // rcx
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  NumOutputDuplContexts = this[13];
  v6 = 56 * (unsigned int)NumOutputDuplContexts * this[2] + 24LL;
  if ( a2->Size < v6 )
  {
    a2->Size = 56 * NumOutputDuplContexts * this[2] + 24;
    return 1075707914LL;
  }
  v7 = 0;
  a2->NumVidPnSources = NumOutputDuplContexts;
  for ( a2->NumOutputDuplContexts = this[2]; v7 < a2->NumVidPnSources; ++v7 )
  {
    v8 = *((_QWORD *)this + 2) + 32LL * v7;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, *(struct DXGFASTMUTEX *const *)v8, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v9 = *(OUTPUTDUPL_CONTEXT ***)(v8 + 8);
    v10 = 0;
    NumOutputDuplContexts = a2->NumOutputDuplContexts;
    if ( (_DWORD)NumOutputDuplContexts )
    {
      do
      {
        v11 = v10 + (_DWORD)NumOutputDuplContexts * v7;
        if ( *v9 )
          OUTPUTDUPL_CONTEXT::GetDebugInfo(*v9, &a2->OutputDuplDebugInfos[v11]);
        else
          memset(&a2->OutputDuplDebugInfos[v11], 0, sizeof(a2->OutputDuplDebugInfos[v11]));
        NumOutputDuplContexts = a2->NumOutputDuplContexts;
        ++v10;
        ++v9;
      }
      while ( v10 < (unsigned int)NumOutputDuplContexts );
    }
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, NumOutputDuplContexts) + 74);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v18 = WdLogNewEntry5_WdError(v13, v12, v15);
    *(_QWORD *)(v18 + 24) = 2227LL;
LABEL_19:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v19 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v19 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, v12, v15);
    *(_QWORD *)(v18 + 24) = 2234LL;
    goto LABEL_19;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v19, a2);
  return 0LL;
}
