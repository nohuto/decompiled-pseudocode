/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00C61D8
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C00C6070 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0001208 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00C649C (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C02774E0 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this, __int64 a2)
{
  int v3; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGSESSIONDATA *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGSESSIONDATA *v11; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v23[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v3 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v3 < 0 )
      goto LABEL_10;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v15 + 24) = 3838LL;
      WdLogEvent5_WdAssertion(v15);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId)
    && (v16 = WdLogNewEntry5_WdAssertion(v6, v5),
        *(_QWORD *)(v16 + 24) = 3839LL,
        WdLogEvent5_WdAssertion(v16),
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId)) )
  {
    v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v20 + 32) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v20);
  }
  else
  {
    v7 = (DXGSESSIONDATA *)operator new[](0x49C0uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v7 )
      v11 = DXGSESSIONDATA::DXGSESSIONDATA(v7, CurrentProcessSessionId);
    else
      v11 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = v11;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 33) |= 1u;
      v21 = WdLogNewEntry5_WdLowResource(v11, v8, v9, v10);
      *(_QWORD *)(v21 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v21);
      v3 = -1073741801;
    }
  }
  if ( v3 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v11, v8);
    v3 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1284),
           *(struct DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId));
    if ( v3 >= 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v13[3] = CurrentProcessSessionId;
      v13[4] = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
      v13[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v13);
    }
  }
LABEL_10:
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)v3;
}
