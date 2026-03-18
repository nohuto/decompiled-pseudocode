/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C016DB10
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C016DA3C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C016DBD0 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  __int64 v7; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v17 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v17 + 24) = 16LL;
LABEL_15:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 74);
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
    v17 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v17 + 24) = 905LL;
    goto LABEL_15;
  }
  v10 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, v4, v7);
    *(_QWORD *)(v17 + 24) = 912LL;
    goto LABEL_15;
  }
  *((_DWORD *)this + 2) = *v10;
  v11 = operator new[](0x18uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 4) = 50;
  }
  *((_QWORD *)this + 3) = v11;
  if ( v11 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result < 0 )
      *((_DWORD *)this + 13) = 0;
    else
      return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = 922LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
  return result;
}
