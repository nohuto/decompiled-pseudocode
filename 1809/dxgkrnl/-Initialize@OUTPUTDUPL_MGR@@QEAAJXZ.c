/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0153FB8
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0153EE4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0154078 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 16LL;
LABEL_15:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
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
    v10 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v10 + 24) = 905LL;
    goto LABEL_15;
  }
  v6 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = 912LL;
    goto LABEL_15;
  }
  *((_DWORD *)this + 2) = *v6;
  v7 = operator new(0x18uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = 0LL;
    *((_DWORD *)v7 + 4) = 50;
  }
  *((_QWORD *)this + 3) = v7;
  if ( v7 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result < 0 )
      *((_DWORD *)this + 13) = 0;
    else
      return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v11 + 24) = 922LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  return result;
}
