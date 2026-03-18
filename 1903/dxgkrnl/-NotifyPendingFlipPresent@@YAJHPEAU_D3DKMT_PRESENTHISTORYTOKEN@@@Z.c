/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007E60
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007D94 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0001008 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B850 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rbx
  char v5; // r8
  NTSTATUS v6; // ebx
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  void (__fastcall ***v9)(_QWORD); // r15
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v11)(_QWORD); // r14
  __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD **v14; // rdi
  _QWORD *v15; // r14
  int v16; // ebx
  bool v17; // zf
  UINT64 CompositionBindingId; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rcx
  int v22; // edi
  struct DXGSESSIONDATA *v23; // rax
  __int64 v24; // r14
  int v25; // edi
  char v26; // r14
  struct _KPROCESS *v27; // rbp
  __int64 v28; // rbp
  struct DXGGLOBAL *Global; // rax
  UINT v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+50h] [rbp-88h] BYREF
  char v47[7]; // [rsp+51h] [rbp-87h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  int v49; // [rsp+60h] [rbp-78h] BYREF
  void *Handle; // [rsp+68h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-68h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  Object = 0LL;
  KeEnterCriticalRegion();
  v6 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v5, (struct CompositionSurfaceObject **)&Object);
  if ( v6 < 0 )
    goto LABEL_76;
  v7 = 0LL;
  v8 = Object;
  v9 = 0LL;
  v6 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v6 >= 0 )
  {
    v6 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v8[6])(v8 + 6) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8 + 7, 0LL);
      v8[8] = KeGetCurrentThread();
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v8[6])(v8 + 6) )
      {
        v8 = Object;
        goto LABEL_6;
      }
      CPushLock::ReleaseLock((CPushLock *)(v8 + 6));
      v8 = Object;
    }
    v6 = -1073741816;
LABEL_6:
    if ( v6 < 0 )
      ObfDereferenceObject(v8);
    else
      v7 = v8 + 5;
  }
  if ( v6 >= 0 )
  {
    v6 = -1073741823;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v32 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v32 + 24) = 2200LL;
      WdLogEvent5_WdAssertion(v32);
    }
    SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v11 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2339);
      if ( v11 )
      {
        (**v11)(*((_QWORD *)SessionData + 2339));
        v6 = 0;
        v9 = v11;
      }
    }
    if ( v6 >= 0 )
    {
      v12 = 0LL;
      if ( !*((_DWORD *)v7 + 20) || (v13 = (_QWORD *)v7[8], v14 = (_QWORD **)(v7 + 8), v13 == v7 + 8) )
      {
LABEL_89:
        v6 = -1071775728;
      }
      else
      {
        while ( 1 )
        {
          v15 = v13 - 3;
          if ( *(v13 - 1) == a2->CompositionBindingId )
            break;
          v13 = (_QWORD *)*v13;
          if ( v13 == v14 )
            goto LABEL_89;
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 8LL))(v13 - 3);
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        if ( v16 != 2 )
          goto LABEL_91;
        v17 = *((_DWORD *)v7 + 20) == 0;
        CompositionBindingId = a2->CompositionBindingId;
        v46 = 0;
        v47[0] = 0;
        if ( v17 )
          goto LABEL_91;
        v19 = *v14;
        if ( *v14 == v14 )
          goto LABEL_91;
        while ( 1 )
        {
          v20 = v19 - 3;
          if ( *(v19 - 1) == CompositionBindingId )
            break;
          v19 = (_QWORD *)*v19;
          if ( v19 == v14 )
            goto LABEL_91;
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v20 + 8LL))(v19 - 3) != 2 )
        {
LABEL_91:
          v6 = -1073741811;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, char *, char *))(*v20 + 64LL))(
            v20,
            &a2->Token,
            &v46,
            v47);
          v6 = 0;
          if ( v46 )
          {
            v31 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v31;
            if ( v47[0] )
              a2->Token.Flip.Flags.Value = v31 | 0x400000;
          }
        }
      }
      v21 = v7 + 2;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v7[3] )
      {
        v7[3] = 0LL;
        ExReleasePushLockExclusiveEx(v21, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v21, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v7 - 5);
      if ( v6 < 0 )
        goto LABEL_96;
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
      {
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v33 = WdLogNewEntry5_WdAssertion();
          *(_QWORD *)(v33 + 24) = 2200LL;
          WdLogEvent5_WdAssertion(v33);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 208LL))();
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v34 = WdLogNewEntry5_WdAssertion();
          *(_QWORD *)(v34 + 24) = 2200LL;
          WdLogEvent5_WdAssertion(v34);
        }
        v22 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 240LL))();
        if ( v12 )
        {
          v49 = 0;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v35 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v35 + 24) = 2200LL;
            WdLogEvent5_WdAssertion(v35);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, int *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 248LL))(
                 v12,
                 &v49) )
          {
            if ( !a1 || v22 )
              goto LABEL_94;
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v36 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v36 + 24) = 2200LL;
              WdLogEvent5_WdAssertion(v36);
            }
            v23 = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
            if ( !v23
              || (v24 = *((_QWORD *)v23 + 2339)) == 0
              || ((**(void (__fastcall ***)(_QWORD))v24)(*((_QWORD *)v23 + 2339)),
                  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 176LL))(v24),
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24),
                  !v25)
              || !v49 )
            {
LABEL_94:
              v6 = -1071775733;
            }
          }
          else
          {
            v6 = -1071775729;
          }
        }
        else if ( !a1
               || v22
               || !(unsigned int)IsTokenManagerReady()
               || (Global = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38000) + 224LL))()) )
        {
          v6 = -1071775730;
        }
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v37 = WdLogNewEntry5_WdAssertion();
          *(_QWORD *)(v37 + 24) = 2200LL;
          WdLogEvent5_WdAssertion(v37);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 256LL))();
      }
      if ( v6 < 0 )
      {
LABEL_96:
        v8 = Object;
      }
      else
      {
        v8 = Object;
        v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), PVOID))(*v9)[12])(v9, Object);
        if ( v6 >= 0 )
        {
          v26 = 0;
          Handle = (void *)-1LL;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v38 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v38 + 24) = 2200LL;
            WdLogEvent5_WdAssertion(v38);
          }
          if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 232LL))() )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v39 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v39 + 24) = 2200LL;
              WdLogEvent5_WdAssertion(v39);
            }
            if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 136LL))() )
            {
              if ( !DXGGLOBAL::m_pGlobal )
              {
                v40 = WdLogNewEntry5_WdAssertion();
                *(_QWORD *)(v40 + 24) = 2200LL;
                WdLogEvent5_WdAssertion(v40);
              }
              (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 144LL))();
              v26 = 1;
            }
          }
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v41 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v41 + 24) = 2200LL;
            WdLogEvent5_WdAssertion(v41);
          }
          v27 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 272LL))();
          if ( v27 )
          {
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(v27, &ApcState);
            v6 = ObOpenObjectByPointer(v8, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
            KeUnstackDetachProcess(&ApcState);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v42 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v42 + 24) = 2200LL;
              WdLogEvent5_WdAssertion(v42);
            }
            (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 200LL))(v27);
          }
          else
          {
            v6 = -1073741823;
          }
          if ( v26 )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v43 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v43 + 24) = 2200LL;
              WdLogEvent5_WdAssertion(v43);
            }
            (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 184LL))();
          }
          if ( v6 >= 0 )
          {
            v17 = DXGGLOBAL::m_pGlobal == 0LL;
            a2->Token.Flip.hCompSurf = (LONG64)Handle;
            *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v8[3];
            if ( v17 )
            {
              v44 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v44 + 24) = 2200LL;
              WdLogEvent5_WdAssertion(v44);
            }
            (*(void (__fastcall **)(union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 40LL))(
              &a2->Token,
              0LL);
            v28 = *((_QWORD *)&a2->Token.SurfaceComplete + 7);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v45 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v45 + 24) = 2200LL;
              WdLogEvent5_WdAssertion(v45);
            }
            (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, __int64, UINT64, LONG, UINT, UINT))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 104LL))(
              a2,
              v8,
              a2->Token.Flip.SwapChainIndex,
              a2->Token.Flip.PresentCount,
              v28,
              a2->CompositionBindingId,
              a2->Token.Blt.DirtyRegions.Rects[0].bottom,
              a2->Token.Flip.DestWidth,
              a2->Token.Flip.DestHeight);
          }
        }
      }
    }
  }
  ObfDereferenceObject(v8);
  if ( v9 )
    (*v9)[1](v9);
LABEL_76:
  if ( v6 == -1071775730 )
  {
    v6 = NotifySurfaceOfSkippedToken(a2);
    if ( v6 >= 0 )
      v6 = -1071775730;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
