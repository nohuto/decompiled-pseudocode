/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0231160
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C025E3F0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02315A8 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0232518 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C025C8D0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(struct IPairedSurfaceObject **a1, void **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  void *v30; // rax
  _BYTE v31[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+70h] [rbp+18h] BYREF
  void *v33; // [rsp+78h] [rbp+20h] BYREF

  v32 = 0;
  v33 = 0LL;
  v6 = operator new(0x20uLL, 0x4B677844u, 1, PagedPool);
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    *((_WORD *)v6 + 6) = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_WORD *)v6 + 12) = 0;
    v6[7] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -1073741801LL;
LABEL_7:
    v10 = WdLogNewEntry5_WdWarning(v5, v4, v7);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdWarning(v10);
    goto LABEL_8;
  }
  v9 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v6);
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_7;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      if ( !*((_BYTE *)Current + 448) )
      {
        LODWORD(v8) = -2147483611;
        v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v18 + 24) = -2147483611LL;
        WdLogEvent5_WdWarning(v18);
      }
      if ( (int)v8 >= 0 )
      {
        v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16) + 77);
        if ( v20 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v20,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( !SessionDataForSpecifiedSession )
        {
          LODWORD(v8) = -1073741811;
          v23 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v23 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v24);
          *(_QWORD *)(v23 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v23);
        }
        if ( (int)v8 >= 0 )
        {
          v25 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v32, &v33);
          v8 = v25;
          if ( v25 < 0 )
          {
            v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            *(_QWORD *)(v29 + 24) = v8;
            WdLogEvent5_WdWarning(v29);
          }
        }
      }
    }
    KeLeaveCriticalRegion();
    if ( v31[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    if ( (int)v8 >= 0 )
    {
      v6[5] = v32;
      v30 = v33;
      *a1 = (struct IPairedSurfaceObject *)v6;
      *a2 = v30;
      return (unsigned int)v8;
    }
LABEL_8:
    *a2 = 0LL;
    if ( v6 )
      DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v6);
    return (unsigned int)v8;
  }
  v14 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v14 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v14);
  return 3221225485LL;
}
