/*
 * XREFs of ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C0232C4C
 * Callers:
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C0232F30 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C025D058 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::SendUnPairAndRelease(DXGCOMPOSITIONSURFACEPROXY *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 448) )
    {
      v2 = -2147483611LL;
LABEL_17:
      v18 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v18 + 24) = v2;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_19;
    }
    v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 77);
    if ( v11 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v16 = *((_DWORD *)this + 5);
      if ( v16 && *((_BYTE *)this + 24) )
      {
        v17 = DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(SessionDataForSpecifiedSession, v16);
        v2 = v17;
        if ( v17 >= 0 )
        {
          *((_BYTE *)this + 24) = 0;
          goto LABEL_19;
        }
        goto LABEL_17;
      }
    }
    else
    {
      LODWORD(v2) = -1073741811;
      v14 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v15);
      *(_QWORD *)(v14 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v14);
    }
  }
LABEL_19:
  KeLeaveCriticalRegion();
  *((_DWORD *)this + 5) = 0;
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  return (unsigned int)v2;
}
