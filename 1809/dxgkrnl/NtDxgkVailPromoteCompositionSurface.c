/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C025E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002195C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003699C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005570C (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0055998 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0231160 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  struct DXGPROCESS *Current; // rbx
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _KPROCESS *v10; // rsi
  DXGSESSIONMGR *v11; // rbx
  __int64 v12; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int8 v20; // r12
  CPushLock *v21; // r15
  struct IPairedSurfaceObject *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  DxgkCompositionObject *v32; // [rsp+20h] [rbp-98h] BYREF
  struct IPairedSurfaceObject *v33; // [rsp+28h] [rbp-90h] BYREF
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  void *v35; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF
  char v38; // [rsp+80h] [rbp-38h]

  v2 = a2;
  v32 = 0LL;
  v35 = 0LL;
  if ( a1 && a2 && (Current = DXGPROCESS::GetCurrent()) != 0LL )
  {
    KeEnterCriticalRegion();
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v36, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    v5 = *((_BYTE *)Current + 322);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 79) && (v5 || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      LODWORD(v9) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v7, &v32);
      if ( (int)v9 >= 0 )
      {
        v33 = 0LL;
        v10 = 0LL;
        Object = 0LL;
        v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 77);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
        {
          LODWORD(v9) = DXGSESSIONDATA::ReferenceDwmProcess(
                          SessionDataForSpecifiedSession,
                          (struct _EPROCESS **)&Object);
          v10 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v9) = -1073741790;
          v16 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v16 + 24) = -1073741790LL;
          WdLogEvent5_WdError(v16);
        }
        if ( (int)v9 >= 0 )
        {
          v38 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v10);
          v17 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(&v33, &v35);
          v9 = v17;
          if ( v17 >= 0 )
          {
            v20 = 0;
            v21 = (DxgkCompositionObject *)((char *)v32 + 48);
            v22 = v33;
            do
            {
              v25 = CPushLock::AcquireLockExclusive(v21);
              if ( v25 >= 0 )
              {
                v25 = CCompositionSurface::Pair((DxgkCompositionObject *)((char *)v32 + 40), v22);
                CPushLock::ReleaseLock(v21);
              }
              LODWORD(v9) = v25;
              if ( v25 == -1073740528 )
              {
                if ( v20 )
                {
                  LODWORD(v9) = -1073741823;
                  v28 = WdLogNewEntry5_WdWarning(v24, v23, v26);
                  *(_QWORD *)(v28 + 24) = -1073741823LL;
                  WdLogEvent5_WdWarning(v28);
                }
                else
                {
                  v27 = WdLogNewEntry5_WdWarning(v24, v23, v26);
                  *(_QWORD *)(v27 + 24) = 1440LL;
                  WdLogEvent5_WdWarning(v27);
                  if ( (int)CPushLock::AcquireLockExclusive(v21) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v32 + 40));
                    CPushLock::ReleaseLock(v21);
                  }
                  v20 = 1;
                }
              }
              else if ( v25 < 0 )
              {
                v29 = WdLogNewEntry5_WdError(v24);
                *(_QWORD *)(v29 + 24) = v25;
                *(_QWORD *)(v29 + 32) = v20;
                WdLogEvent5_WdError(v29);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v22 + 8LL))(v22);
              }
            }
            while ( (_DWORD)v9 == -1073740528 );
            v33 = 0LL;
          }
          else
          {
            v19 = WdLogNewEntry5_WdError(v18);
            *(_QWORD *)(v19 + 24) = v9;
            WdLogEvent5_WdError(v19);
          }
          if ( v38 )
          {
            KeUnstackDetachProcess(&ApcState);
            v38 = 0;
          }
        }
        if ( v10 )
        {
          ObfDereferenceObject(v10);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v32);
        v32 = 0LL;
      }
    }
    else
    {
      LODWORD(v9) = -1073741790;
    }
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (_QWORD *)MmUserProbeAddress;
    *v2 = v35;
    KeLeaveCriticalRegion();
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(a1);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
  }
  return (unsigned int)v9;
}
