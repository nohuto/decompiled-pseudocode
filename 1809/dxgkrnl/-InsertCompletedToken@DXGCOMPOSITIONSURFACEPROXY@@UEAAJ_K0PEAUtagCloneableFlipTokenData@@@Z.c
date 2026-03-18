/*
 * XREFs of ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0231830
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C025CE3C (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::InsertCompletedToken(
        DXGCOMPOSITIONSURFACEPROXY *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rdi
  __int64 v20; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  DXGSESSIONMGR *v26; // rdi
  unsigned int v27; // eax
  DXGSESSIONDATA *v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  _QWORD *v31; // r8
  __int64 v32; // rcx
  _BYTE v33[40]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v8) = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 448) )
    {
      v8 = -2147483611LL;
      goto LABEL_9;
    }
    v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 77);
    if ( v19 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      if ( !*((_DWORD *)this + 5) || !*((_BYTE *)this + 24) || !*((_BYTE *)this + 25) )
      {
        v16 = WdLogNewEntry5_WdWarning(v18, v17, v20);
        v30 = 0LL;
        *(_QWORD *)(v16 + 24) = *((unsigned int *)this + 5);
        v31 = (_QWORD *)(v16 + 32);
        do
        {
          v32 = *((unsigned __int8 *)this + v30++ + 24);
          *v31++ = v32;
        }
        while ( v30 < 2 );
        goto LABEL_25;
      }
      v26 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 77);
      if ( v26 )
      {
        v27 = PsGetCurrentProcessSessionId(v25);
        v28 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v26, v27);
      }
      else
      {
        v28 = 0LL;
      }
      v29 = DXGSESSIONDATA::VailSendEnqueueFlipExToken(v28, *((_DWORD *)this + 5), a2, a3, a4);
      v8 = v29;
      if ( v29 >= 0 )
        goto LABEL_26;
LABEL_9:
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v16 + 24) = v8;
LABEL_25:
      WdLogEvent5_WdWarning(v16);
      goto LABEL_26;
    }
    LODWORD(v8) = -1073741811;
    v23 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v23 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v24);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
  }
LABEL_26:
  KeLeaveCriticalRegion();
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  return (unsigned int)v8;
}
