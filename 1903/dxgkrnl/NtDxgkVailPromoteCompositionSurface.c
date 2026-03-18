/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C0294570
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024458 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003CD84 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005C58C (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C005C818 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0265670 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  struct DXGPROCESS *Current; // rbx
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct _KPROCESS *v13; // rsi
  DXGSESSIONMGR *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int8 v28; // r12
  CPushLock *v29; // r15
  struct IPairedSurfaceObject *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  DxgkCompositionObject *v40; // [rsp+20h] [rbp-98h] BYREF
  struct IPairedSurfaceObject *v41; // [rsp+28h] [rbp-90h] BYREF
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  void *v43; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF
  char v46; // [rsp+80h] [rbp-38h]

  v3 = (_QWORD *)a2;
  v40 = 0LL;
  v43 = 0LL;
  if ( a1 && a2 && (Current = DXGPROCESS::GetCurrent((__int64)a1, a2)) != 0LL )
  {
    KeEnterCriticalRegion();
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    v6 = *((_BYTE *)Current + 298);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 76) && (v6 || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      LODWORD(v12) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v9, &v40);
      if ( (int)v12 >= 0 )
      {
        v41 = 0LL;
        v13 = 0LL;
        Object = 0LL;
        v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 74);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
        {
          LODWORD(v12) = DXGSESSIONDATA::ReferenceDwmProcess(
                           SessionDataForSpecifiedSession,
                           (struct _EPROCESS **)&Object);
          v13 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v12) = -1073741790;
          v22 = WdLogNewEntry5_WdError(v20, v19, v21);
          *(_QWORD *)(v22 + 24) = -1073741790LL;
          WdLogEvent5_WdError(v22);
        }
        if ( (int)v12 >= 0 )
        {
          v46 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v13);
          v23 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(&v41, &v43);
          v12 = v23;
          if ( v23 >= 0 )
          {
            v28 = 0;
            v29 = (DxgkCompositionObject *)((char *)v40 + 48);
            v30 = v41;
            do
            {
              v33 = CPushLock::AcquireLockExclusive(v29);
              if ( v33 >= 0 )
              {
                v33 = CCompositionSurface::Pair((DxgkCompositionObject *)((char *)v40 + 40), v30);
                CPushLock::ReleaseLock(v29);
              }
              LODWORD(v12) = v33;
              if ( v33 == -1073740528 )
              {
                if ( v28 )
                {
                  LODWORD(v12) = -1073741823;
                  v36 = WdLogNewEntry5_WdWarning(v32, v31, v34);
                  *(_QWORD *)(v36 + 24) = -1073741823LL;
                  WdLogEvent5_WdWarning(v36);
                }
                else
                {
                  v35 = WdLogNewEntry5_WdWarning(v32, v31, v34);
                  *(_QWORD *)(v35 + 24) = 1440LL;
                  WdLogEvent5_WdWarning(v35);
                  if ( (int)CPushLock::AcquireLockExclusive(v29) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v40 + 40));
                    CPushLock::ReleaseLock(v29);
                  }
                  v28 = 1;
                }
              }
              else if ( v33 < 0 )
              {
                v37 = WdLogNewEntry5_WdError(v32, v31, v34);
                *(_QWORD *)(v37 + 24) = v33;
                *(_QWORD *)(v37 + 32) = v28;
                WdLogEvent5_WdError(v37);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v30 + 8LL))(v30);
              }
            }
            while ( (_DWORD)v12 == -1073740528 );
            v41 = 0LL;
          }
          else
          {
            v27 = WdLogNewEntry5_WdError(v25, v24, v26);
            *(_QWORD *)(v27 + 24) = v12;
            WdLogEvent5_WdError(v27);
          }
          if ( v46 )
          {
            KeUnstackDetachProcess(&ApcState);
            v46 = 0;
          }
        }
        if ( v13 )
        {
          ObfDereferenceObject(v13);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v40);
        v40 = 0LL;
      }
    }
    else
    {
      LODWORD(v12) = -1073741790;
    }
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = v43;
    KeLeaveCriticalRegion();
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(a1, a2, a3);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
  }
  return (unsigned int)v12;
}
