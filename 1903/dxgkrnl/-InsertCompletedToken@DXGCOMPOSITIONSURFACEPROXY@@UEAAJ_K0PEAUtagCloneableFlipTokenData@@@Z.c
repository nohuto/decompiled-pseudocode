/*
 * XREFs of ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0265D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0292FE0 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::InsertCompletedToken(
        DXGCOMPOSITIONSURFACEPROXY *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGSESSIONMGR *v21; // rdi
  __int64 v22; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXGSESSIONMGR *v30; // rdi
  unsigned int v31; // eax
  DXGSESSIONDATA *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  _QWORD *v35; // r8
  __int64 v36; // rcx
  _BYTE v37[40]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v8) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( *((_DWORD *)Current + 92) && (*((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 424) )
    {
      v8 = -2147483611LL;
      goto LABEL_9;
    }
    v21 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 74);
    if ( v21 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v21, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      if ( !*((_DWORD *)this + 5) || !*((_BYTE *)this + 24) || !*((_BYTE *)this + 25) )
      {
        v18 = WdLogNewEntry5_WdWarning(v20, v19, v22);
        v34 = 0LL;
        *(_QWORD *)(v18 + 24) = *((unsigned int *)this + 5);
        v35 = (_QWORD *)(v18 + 32);
        do
        {
          v36 = *((unsigned __int8 *)this + v34++ + 24);
          *v35++ = v36;
        }
        while ( v34 < 2 );
        goto LABEL_25;
      }
      v30 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 74);
      if ( v30 )
      {
        v31 = PsGetCurrentProcessSessionId(v29, v28);
        v32 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v30, v31);
      }
      else
      {
        v32 = 0LL;
      }
      v33 = DXGSESSIONDATA::VailSendEnqueueFlipExToken(v32, *((_DWORD *)this + 5), a2, a3, a4);
      v8 = v33;
      if ( v33 >= 0 )
        goto LABEL_26;
LABEL_9:
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = v8;
LABEL_25:
      WdLogEvent5_WdWarning(v18);
      goto LABEL_26;
    }
    LODWORD(v8) = -1073741811;
    v25 = WdLogNewEntry5_WdError(v20, v19, v22);
    *(_QWORD *)(v25 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27, v26);
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
  }
LABEL_26:
  KeLeaveCriticalRegion();
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  return (unsigned int)v8;
}
