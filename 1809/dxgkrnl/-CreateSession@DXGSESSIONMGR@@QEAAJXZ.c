/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C013BE70
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C013BD50 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C001A758 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C013BFBC (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0241934 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this)
{
  int v2; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v4; // rcx
  DXGSESSIONDATA *v5; // rax
  DXGSESSIONDATA *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v2 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v2 < 0 )
      goto LABEL_10;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v12 + 24) = 3718LL;
      WdLogEvent5_WdAssertion(v12);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId)
    && (v13 = WdLogNewEntry5_WdAssertion(v4),
        *(_QWORD *)(v13 + 24) = 3719LL,
        WdLogEvent5_WdAssertion(v13),
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId)) )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v17);
  }
  else
  {
    v5 = (DXGSESSIONDATA *)operator new(0x4990uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v5 )
      v6 = DXGSESSIONDATA::DXGSESSIONDATA(v5, CurrentProcessSessionId);
    else
      v6 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = v6;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 32) |= 1u;
      v18 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v18 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v18);
      v2 = -1073741801;
    }
  }
  if ( v2 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v6);
    v2 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1316),
           *(struct DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId));
    if ( v2 >= 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
      v10[3] = CurrentProcessSessionId;
      v10[4] = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
      v10[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v10);
    }
  }
LABEL_10:
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v2;
}
