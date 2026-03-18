/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C02663E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C0293628 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(DXGCOMPOSITIONSURFACEPROXY *this, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rbx
  __int64 v18; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // r8
  __int64 v28; // rcx
  _BYTE v29[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  LODWORD(v4) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v8);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  if ( *((_DWORD *)Current + 92) && (*((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 424) )
    {
      v4 = -2147483611LL;
      goto LABEL_9;
    }
    v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12, v11) + 74);
    if ( v17 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v24 = *((unsigned int *)this + 5);
      if ( !(_DWORD)v24 || !*((_BYTE *)this + 25) )
      {
        v14 = WdLogNewEntry5_WdWarning(v16, v24, v18);
        v26 = 0LL;
        *(_QWORD *)(v14 + 24) = *((unsigned int *)this + 5);
        v27 = (_QWORD *)(v14 + 32);
        do
        {
          v28 = *((unsigned __int8 *)this + v26++ + 24);
          *v27++ = v28;
        }
        while ( v26 < 2 );
        goto LABEL_21;
      }
      v25 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, v24, v2);
      v4 = v25;
      if ( v25 < 0 )
      {
LABEL_9:
        v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v14 + 24) = v4;
LABEL_21:
        WdLogEvent5_WdWarning(v14);
        goto LABEL_22;
      }
      *((_BYTE *)this + 25) = 0;
    }
    else
    {
      LODWORD(v4) = -1073741811;
      v21 = WdLogNewEntry5_WdError(v16, v15, v18);
      *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22);
      *(_QWORD *)(v21 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v21);
    }
  }
LABEL_22:
  KeLeaveCriticalRegion();
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  return (unsigned int)v4;
}
