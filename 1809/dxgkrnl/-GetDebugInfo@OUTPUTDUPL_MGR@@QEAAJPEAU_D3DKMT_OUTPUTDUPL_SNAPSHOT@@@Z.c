/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C023D0C8
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C0240F38 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C023BF6C (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C023D938 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z @ 0x1C0243698 (-GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v5; // edx
  unsigned __int64 v6; // rcx
  UINT v7; // esi
  __int64 v8; // rbx
  OUTPUTDUPL_CONTEXT **v9; // r14
  UINT v10; // ebx
  UINT NumOutputDuplContexts; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rax
  struct DXGFASTMUTEX *const *v18; // rcx
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v5 = this[13];
  v6 = 56 * v5 * this[2] + 24LL;
  if ( a2->Size < v6 )
  {
    a2->Size = 56 * v5 * this[2] + 24;
    return 1075707914LL;
  }
  v7 = 0;
  a2->NumVidPnSources = v5;
  for ( a2->NumOutputDuplContexts = this[2]; v7 < a2->NumVidPnSources; ++v7 )
  {
    v8 = *((_QWORD *)this + 2) + 32LL * v7;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *(struct DXGFASTMUTEX *const *)v8, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v9 = *(OUTPUTDUPL_CONTEXT ***)(v8 + 8);
    v10 = 0;
    NumOutputDuplContexts = a2->NumOutputDuplContexts;
    if ( NumOutputDuplContexts )
    {
      do
      {
        v12 = v10 + NumOutputDuplContexts * v7;
        if ( *v9 )
          OUTPUTDUPL_CONTEXT::GetDebugInfo(*v9, &a2->OutputDuplDebugInfos[v12]);
        else
          memset(&a2->OutputDuplDebugInfos[v12], 0, sizeof(a2->OutputDuplDebugInfos[v12]));
        NumOutputDuplContexts = a2->NumOutputDuplContexts;
        ++v10;
        ++v9;
      }
      while ( v10 < NumOutputDuplContexts );
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 77);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = 2204LL;
LABEL_19:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v18 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v18 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 2211LL;
    goto LABEL_19;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v18, a2);
  return 0LL;
}
