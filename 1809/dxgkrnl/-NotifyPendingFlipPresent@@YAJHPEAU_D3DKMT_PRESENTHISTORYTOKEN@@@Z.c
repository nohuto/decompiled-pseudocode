/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008074
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D594 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C0008CA0 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x1C0008D2C (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000D7CC (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DF10 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0054A78 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rbx
  char v5; // r8
  int SessionTokenManager; // edi
  _QWORD *v7; // r15
  __int64 v8; // r14
  CCompositionSurface *v9; // rbx
  UINT64 CompositionBindingId; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  int v13; // eax
  HWND v14; // r14
  int v15; // ebx
  struct DXGGLOBAL *v16; // rax
  struct DXGGLOBAL *v17; // rax
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rbx
  struct DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *v22; // rax
  UINT v23; // eax
  CCompositionSurface *v24; // [rsp+40h] [rbp-10h] BYREF
  HWND v25; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF
  int v27; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+58h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = CompositionSurfaceObject::ResolveHandle(
                          hLogicalSurface,
                          2u,
                          v5,
                          (struct CompositionSurfaceObject **)&Object);
  if ( SessionTokenManager >= 0 )
  {
    v7 = Object;
    v24 = 0LL;
    v8 = 0LL;
    v25 = 0LL;
    v28 = 0LL;
    SessionTokenManager = CompositionSurfaceObject::LockForWrite(Object, &v24);
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = DxgkGetSessionTokenManager(&v28);
      if ( SessionTokenManager < 0 )
        goto LABEL_37;
      v9 = v24;
      if ( CCompositionSurface::CheckBinding(
             v24,
             a2->CompositionBindingId,
             (enum CompositionBufferType *)&v27,
             &v25,
             (bool *)&Object) )
      {
        if ( v27 != 2 )
          SessionTokenManager = -1073741811;
        if ( SessionTokenManager >= 0 )
        {
          CompositionBindingId = a2->CompositionBindingId;
          LOBYTE(Object) = 0;
          LOBYTE(v27) = 0;
          SessionTokenManager = CCompositionSurface::NotifyPendingFlipPresent(
                                  v9,
                                  CompositionBindingId,
                                  &a2->Token.Flip,
                                  (bool *)&Object,
                                  (bool *)&v27);
          if ( SessionTokenManager >= 0 )
          {
            if ( (_BYTE)Object )
            {
              v23 = a2->Token.Flip.Flags.Value | 0x200000;
              a2->Token.Flip.Flags.Value = v23;
              if ( (_BYTE)v27 )
                a2->Token.Flip.Flags.Value = v23 | 0x400000;
            }
          }
        }
      }
      else
      {
        SessionTokenManager = -1071775728;
      }
      CCompositionSurface::UnlockAndRelease(v9);
      if ( SessionTokenManager < 0 )
        goto LABEL_37;
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
      {
        Global = DXGGLOBAL::GetGlobal();
        (*(void (**)(void))(*((_QWORD *)Global + 2541) + 168LL))();
        v12 = DXGGLOBAL::GetGlobal();
        v13 = (*(__int64 (**)(void))(*((_QWORD *)v12 + 2541) + 200LL))();
        v14 = v25;
        v15 = v13;
        if ( v25 )
        {
          LODWORD(Object) = 0;
          v22 = DXGGLOBAL::GetGlobal();
          if ( (*(unsigned int (__fastcall **)(HWND, PVOID *))(*((_QWORD *)v22 + 2541) + 208LL))(v14, &Object) )
          {
            if ( !a1 || v15 || !(unsigned int)IsTokenManagerReady() || !(_DWORD)Object )
              SessionTokenManager = -1071775733;
          }
          else
          {
            SessionTokenManager = -1071775729;
          }
        }
        else if ( !a1
               || v13
               || !(unsigned int)IsTokenManagerReady()
               || (v16 = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v16 + 2541) + 184LL))()) )
        {
          SessionTokenManager = -1071775730;
        }
        v17 = DXGGLOBAL::GetGlobal();
        (*(void (**)(void))(*((_QWORD *)v17 + 2541) + 216LL))();
      }
      if ( SessionTokenManager < 0 )
      {
LABEL_37:
        v8 = v28;
      }
      else
      {
        v8 = v28;
        SessionTokenManager = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 96LL))(v28, v7);
        if ( SessionTokenManager >= 0 )
        {
          Object = 0LL;
          SessionTokenManager = DxgkCompositionObject::OpenDwmHandle(v7, &Object);
          if ( SessionTokenManager >= 0 )
          {
            a2->Token.Flip.hCompSurf = (LONG64)Object;
            *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v7[3];
            v18 = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, _QWORD))(*((_QWORD *)v18 + 2541) + 32LL))(
              &a2->Token,
              0LL);
            v19 = *((_QWORD *)&a2->Token.SurfaceComplete + 7);
            v20 = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, __int64, UINT64))(*((_QWORD *)v20 + 2541) + 64LL))(
              a2,
              v7,
              a2->Token.Flip.SwapChainIndex,
              a2->Token.Flip.PresentCount,
              v19,
              a2->CompositionBindingId);
          }
        }
      }
    }
    ObfDereferenceObject(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( SessionTokenManager == -1071775730 )
  {
    SessionTokenManager = NotifySurfaceOfSkippedToken(a2);
    if ( SessionTokenManager >= 0 )
      SessionTokenManager = -1071775730;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
