/*
 * XREFs of ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02652B0
 * Callers:
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C02673D0 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C029397C (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::CloseSelfHandle(DXGCOMPOSITIONSURFACEPROXY *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  __int64 v16; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
  if ( !*((_DWORD *)this + 4) )
    return (unsigned int)v2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( *((_DWORD *)Current + 92) && (*((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 424) )
    {
      v2 = -2147483611LL;
LABEL_16:
      v23 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v23 + 24) = v2;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_17;
    }
    v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 74);
    if ( v15 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      LODWORD(v2) = -1073741811;
      v19 = WdLogNewEntry5_WdError(v14, v13, v16);
      *(_QWORD *)(v19 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v21, v20);
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v19);
      goto LABEL_17;
    }
    v22 = DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
    v2 = v22;
    if ( v22 < 0 )
      goto LABEL_16;
  }
LABEL_17:
  KeLeaveCriticalRegion();
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return (unsigned int)v2;
}
