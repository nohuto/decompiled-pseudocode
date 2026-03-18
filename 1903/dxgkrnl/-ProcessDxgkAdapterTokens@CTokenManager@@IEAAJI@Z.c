/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AB10
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000A8E0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000A40C (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000F98C (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0012EB0 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C0018190 (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BFD8 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C001C5C0 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C750 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C91C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001CB44 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0059DC0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00FEDD0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // di
  unsigned int v3; // r14d
  char *v4; // rax
  unsigned int v5; // r15d
  int v7; // r13d
  int v8; // ebx
  bool v9; // zf
  __int64 v10; // rdi
  int PresentHistoryInternal; // eax
  char v12; // r8
  unsigned int v13; // r14d
  unsigned int *v14; // rdi
  int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  void *v20; // rcx
  _QWORD *v22; // rcx
  CTokenManager *v23; // rax
  __int64 v24; // rdx
  void *v25; // rcx
  unsigned int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // r13
  PVOID v29; // rax
  char v30; // r8
  int v31; // r9d
  struct CToken *v32; // rax
  int v33; // r13d
  struct CToken *v34; // r13
  _QWORD *v35; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  CTokenManager **v38; // rdx
  CTokenManager *v39; // r8
  __int64 v40; // r13
  unsigned __int8 (**v41)(void); // rax
  __int64 v42; // r8
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  void *v47; // rax
  __int64 v48; // r13
  int v49; // eax
  __int64 v50; // rcx
  CTokenManager **v51; // rdx
  CTokenManager *v52; // rcx
  __int64 v53; // r13
  _QWORD *v54; // rcx
  CTokenManager ***v55; // rax
  __int64 v56; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v58; // rax
  struct DXGGLOBAL *v59; // rax
  _QWORD *v60; // rdx
  void *v61; // rcx
  __int64 v62; // rax
  char v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+34h] [rbp-CCh]
  NTSTATUS v65; // [rsp+34h] [rbp-CCh]
  int v66; // [rsp+34h] [rbp-CCh]
  char v67; // [rsp+38h] [rbp-C8h]
  char v68; // [rsp+38h] [rbp-C8h]
  bool v69; // [rsp+39h] [rbp-C7h] BYREF
  char v70; // [rsp+3Ah] [rbp-C6h]
  int v71; // [rsp+3Ch] [rbp-C4h]
  unsigned __int8 NewElement[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v73; // [rsp+44h] [rbp-BCh]
  LONG PreviousState[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v75; // [rsp+50h] [rbp-B0h]
  unsigned int v76; // [rsp+54h] [rbp-ACh]
  PVOID inserted; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v78; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  LONG v80; // [rsp+70h] [rbp-90h] BYREF
  void *v81; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  _DWORD v83[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v84; // [rsp+90h] [rbp-70h]
  _BYTE *v85; // [rsp+98h] [rbp-68h]
  __int64 v86; // [rsp+A0h] [rbp-60h]
  PVOID v87; // [rsp+A8h] [rbp-58h] BYREF
  struct CToken *v88; // [rsp+B0h] [rbp-50h]
  struct CToken *v89; // [rsp+B8h] [rbp-48h]
  struct CTokenQueue *v90; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD Buffer[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE Src[2048]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = 1;
  v76 = a2;
  v3 = 640;
  v63 = 1;
  v75 = 640;
  v4 = (char *)this + 88;
  v5 = a2;
  v7 = 0;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v8 = 0;
    v9 = *((_QWORD *)this + 23) == 0LL;
    *((_QWORD *)this + 12) = KeGetCurrentThread();
    if ( !v9 )
      goto LABEL_3;
    v22 = (_QWORD *)((char *)this + 160);
    v23 = (CTokenManager *)*((_QWORD *)this + 20);
    if ( v23 != (CTokenManager *)((char *)this + 160) )
    {
      if ( *((_QWORD **)v23 + 1) != v22 || (v24 = *(_QWORD *)v23, *(CTokenManager **)(*(_QWORD *)v23 + 8LL) != v23) )
LABEL_147:
        __fastfail(3u);
      *v22 = v24;
      *(_QWORD *)(v24 + 8) = v22;
      --*((_DWORD *)this + 44);
      *((_QWORD *)this + 23) = v23;
LABEL_4:
      v10 = *((_QWORD *)this + 23);
      v8 = 0;
      if ( v3 > *(_DWORD *)(v10 + 2104) )
        v8 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 23));
      v81 = *(void **)(v10 + 2096);
      if ( v8 >= 0 )
      {
        v83[1] = *(_DWORD *)(v10 + 2104);
        v84 = 0LL;
        v85 = Src;
        v86 = 0LL;
        v83[0] = v5;
        PresentHistoryInternal = DxgkGetPresentHistoryInternal(v83, 0LL);
        v8 = PresentHistoryInternal;
        if ( PresentHistoryInternal )
        {
          if ( PresentHistoryInternal != 261 )
          {
            if ( PresentHistoryInternal != -1073741789 )
            {
              v2 = 0;
              v63 = 0;
              goto LABEL_20;
            }
            v3 = 640;
            v8 = 0;
            if ( (unsigned int)v84 > 0x280 )
              v3 = v84;
            v75 = v3;
            goto LABEL_19;
          }
        }
        else
        {
          v63 = 0;
        }
        v13 = 0;
        v73 = 0;
        v14 = (unsigned int *)Src;
        v15 = 0;
        v16 = 0;
        v71 = 0;
        while ( v13 < (unsigned int)v86 )
        {
          v17 = *v14;
          if ( *v14 == 7 )
          {
            v47 = (void *)*((_QWORD *)v14 + 2);
            v78 = v47;
            if ( v47 )
            {
              v48 = 0LL;
              v65 = ObReferenceObjectByHandle(v47, 2u, g_pDxgkCompositionObjectType, 1, &v87, 0LL);
              *(_QWORD *)PreviousState = v87;
              if ( v65 >= 0 )
              {
                if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))v87 + 2))(*((_QWORD *)v87 + 2)) )
                {
                  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)PreviousState + 16LL) + 16LL))(*(_QWORD *)(*(_QWORD *)PreviousState + 16LL)) == 2 )
                  {
                    v48 = *(_QWORD *)PreviousState;
                    goto LABEL_80;
                  }
                  v65 = -1073741788;
                }
                else
                {
                  v65 = -1073741816;
                }
                ObfDereferenceObject(*(PVOID *)PreviousState);
LABEL_80:
                if ( v65 >= 0 )
                {
                  v66 = 0;
                  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v48 + 72))(v48 + 72) )
                  {
                    KeEnterCriticalRegion();
                    ExAcquirePushLockSharedEx(v48 + 80, 0LL);
                    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v48 + 72))(v48 + 72) )
                    {
                      v49 = 0;
                      goto LABEL_84;
                    }
                    CPushLock::ReleaseLock((CPushLock *)(v48 + 72));
                  }
                  v49 = -1073741816;
                  v66 = -1073741816;
LABEL_84:
                  if ( v49 < 0 )
                    goto LABEL_124;
                  if ( *(_DWORD *)(v48 + 64) == 1 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v48 + 40) + 24LL))(v48 + 40);
                  else
                    v66 = -1073741823;
                  v50 = v48 + 80;
                  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v48 + 88) )
                  {
                    *(_QWORD *)(v48 + 88) = 0LL;
                    ExReleasePushLockExclusiveEx(v50, 0LL);
                  }
                  else
                  {
                    ExReleasePushLockSharedEx(v50, 0LL);
                  }
                  KeLeaveCriticalRegion();
                  if ( v66 < 0 )
                  {
LABEL_124:
                    ObfDereferenceObject((PVOID)v48);
                  }
                  else
                  {
                    v51 = (CTokenManager **)*((_QWORD *)this + 34);
                    v52 = (CTokenManager *)(v48 + 48);
                    if ( *v51 != (CTokenManager *)((char *)this + 264) )
                      goto LABEL_147;
                    v9 = DXGGLOBAL::m_pGlobal == 0LL;
                    *(_QWORD *)v52 = (char *)this + 264;
                    *(_QWORD *)(v48 + 56) = v51;
                    *v51 = v52;
                    *((_QWORD *)this + 34) = v52;
                    v53 = *(_QWORD *)(v48 + 120);
                    if ( v9 )
                    {
                      v56 = WdLogNewEntry5_WdAssertion(v52, v51);
                      *(_QWORD *)(v56 + 24) = 2200LL;
                      WdLogEvent5_WdAssertion(v56);
                    }
                    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 32LL))(
                      v53,
                      1LL);
                  }
                }
              }
              NtClose(v78);
              v15 = v71;
              v7 = v73;
            }
          }
          else
          {
            switch ( v17 )
            {
              case 8u:
                Global = DXGGLOBAL::GetGlobal();
                (*(void (**)(void))(*((_QWORD *)Global + 38000) + 144LL))();
                v58 = DXGGLOBAL::GetGlobal();
                (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v58 + 38000) + 8LL))(*((_QWORD *)v14 + 2));
                v59 = DXGGLOBAL::GetGlobal();
                (*(void (**)(void))(*((_QWORD *)v59 + 38000) + 184LL))();
                goto LABEL_74;
              case 2u:
                if ( (v14[15] & 0x2000) != 0 && (v14[15] & 0xC000) == 0x4000 )
                {
                  CTokenManager::CompleteIndendentFlipToken(
                    this,
                    *((_QWORD *)v14 + 1),
                    (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v14 + 4),
                    v76);
                  v15 = v71;
                  v73 = ++v7;
                  goto LABEL_15;
                }
                *(_QWORD *)PreviousState = *((_QWORD *)v14 + 1);
                v25 = (void *)*((_QWORD *)v14 + 8);
                v70 = 0;
                Handle = v25;
                v89 = 0LL;
                if ( (int)CompositionSurfaceObject::ResolveHandle(
                            v25,
                            2u,
                            v12,
                            (struct CompositionSurfaceObject **)&Object) >= 0 )
                {
                  v26 = v14[15];
                  v69 = 1;
                  LODWORD(inserted) = v26 & 0x2000;
                  v78 = 0LL;
                  v88 = 0LL;
                  if ( (v26 & 0x42000) == 0x2000 )
                    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(
                      (CompositionSurfaceObject *)Object,
                      *(unsigned __int64 *)PreviousState,
                      &v69);
                  v27 = operator new[](0x248uLL, 0x6F744D54u, PagedPool);
                  v28 = (__int64)v27;
                  if ( v27 )
                  {
                    v27[3] = 6LL;
                    *((_BYTE *)v27 + 48) = 0;
                    *v27 = &CToken::`vftable';
                    v27[5] = *(_QWORD *)PreviousState;
                    v29 = Object;
                    *(_QWORD *)(v28 + 80) = 0LL;
                    *(_DWORD *)(v28 + 52) = 0;
                    *(_QWORD *)(v28 + 32) = v29;
                    ObReferenceObjectByPointer(v29, 3u, g_pDxgkCompositionObjectType, 0);
                    v30 = v69;
                    *(_QWORD *)v28 = &CFlipToken::`vftable';
                    *(_WORD *)(v28 + 88) = 0;
                    *(_QWORD *)(v28 + 96) = 0LL;
                    *(_QWORD *)(v28 + 560) = 0LL;
                    *(_QWORD *)(v28 + 568) = 0LL;
                    *(_QWORD *)(v28 + 148) = 0LL;
                    *(_QWORD *)(v28 + 156) = 0LL;
                    *(_QWORD *)(v28 + 164) = 0LL;
                    *(_QWORD *)(v28 + 172) = 0LL;
                    *(_QWORD *)(v28 + 120) = 0LL;
                    *(_QWORD *)(v28 + 128) = 0LL;
                    *(_DWORD *)(v28 + 556) = 0x1000000;
                    *(_QWORD *)(v28 + 188) = 1065353216LL;
                    *(_DWORD *)(v28 + 196) = 0;
                    *(_QWORD *)(v28 + 200) = 1065353216LL;
                    *(_DWORD *)(v28 + 208) = 0;
                    v64 = CFlipToken::InitializeCompleted(v28, (__int64)(v14 + 4), v30, v31);
                    if ( v64 < 0 )
                    {
                      (**(void (__fastcall ***)(__int64, __int64))v28)(v28, 1LL);
                      v32 = v88;
                    }
                    else
                    {
                      v32 = (struct CToken *)v28;
                    }
                    v33 = v64;
                    if ( v64 >= 0 )
                      goto LABEL_35;
                  }
                  else
                  {
                    v33 = -1073741801;
                    v64 = -1073741801;
                  }
                  CompositionSurfaceObject::SignalGpuFence(
                    (CompositionSurfaceObject *)Object,
                    *(unsigned __int64 *)PreviousState,
                    *((_QWORD *)v14 + 2),
                    1);
                  if ( *((_QWORD *)v14 + 6) )
                    CompositionSurfaceObject::SignalPresentLimitSemaphore(
                      (CompositionSurfaceObject *)Object,
                      *(unsigned __int64 *)PreviousState);
                  v32 = (struct CToken *)v78;
LABEL_35:
                  if ( v33 < 0 )
                    v34 = v89;
                  else
                    v34 = v32;
                  if ( !(_DWORD)inserted )
                    ObCloseHandle(Handle, 1);
                  ObfDereferenceObject(Object);
                  if ( v64 >= 0 )
                  {
                    if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 144LL))(v34)
                      && !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 152LL))(v34) )
                    {
                      v37 = (_DWORD *)((char *)this + 304);
                      v70 = 1;
                      v38 = (CTokenManager **)*((_QWORD *)this + 38);
                      v55 = (CTokenManager ***)((char *)v34 + 8);
                      if ( v38[1] != (CTokenManager *)((char *)this + 304) )
                        goto LABEL_147;
                      *v55 = v38;
                      *((_QWORD *)v34 + 2) = v37;
                      v38[1] = (CTokenManager *)v55;
                      *(_QWORD *)v37 = v55;
LABEL_104:
                      if ( v64 < 0 )
                      {
LABEL_72:
                        if ( v70 )
                        {
                          v15 = v71;
                          v7 = ++v73;
                          goto LABEL_15;
                        }
                        goto LABEL_73;
                      }
LABEL_53:
                      v40 = *((_QWORD *)v34 + 4);
                      if ( v40 )
                      {
                        v41 = *(unsigned __int8 (***)(void))(v40 + 48);
                        Handle = (HANDLE)(v40 + 48);
                        if ( (*v41)() )
                        {
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v40 + 56, 0LL);
                          if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v40 + 48))(v40 + 48) )
                          {
                            if ( !*(_DWORD *)(v40 + 120)
                              || (v43 = *(_QWORD **)(v40 + 104),
                                  v44 = (_QWORD *)(v40 + 104),
                                  v43 == (_QWORD *)(v40 + 104)) )
                            {
LABEL_140:
                              v67 = 0;
                            }
                            else
                            {
                              while ( *(v43 - 1) != *(_QWORD *)PreviousState )
                              {
                                v43 = (_QWORD *)*v43;
                                if ( v43 == v44 )
                                  goto LABEL_140;
                              }
                              v67 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, _QWORD))(*(v43 - 3) + 32LL))(
                                      v43 - 3,
                                      v44,
                                      v42,
                                      *(_QWORD *)PreviousState);
                            }
                            v45 = v40 + 56;
                            if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v40 + 64) )
                            {
                              *(_QWORD *)(v40 + 64) = 0LL;
                              ExReleasePushLockExclusiveEx(v45, 0LL);
                            }
                            else
                            {
                              ExReleasePushLockSharedEx(v45, 0LL);
                            }
                            KeLeaveCriticalRegion();
                            if ( v67 )
                            {
                              v61 = (void *)*((_QWORD *)this + 8);
                              LODWORD(inserted) = 0;
                              ZwSetEvent(v61, (PLONG)&inserted);
                            }
                          }
                          else
                          {
                            CPushLock::ReleaseLock((CPushLock *)(v40 + 48));
                          }
                        }
                        if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v40 + 48))(v40 + 48) )
                        {
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v40 + 56, 0LL);
                          if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v40 + 48))(v40 + 48) )
                          {
                            v46 = v40 + 56;
                            v68 = *(_BYTE *)(v40 + 128);
                            if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v40 + 64) )
                            {
                              *(_QWORD *)(v40 + 64) = 0LL;
                              ExReleasePushLockExclusiveEx(v46, 0LL);
                            }
                            else
                            {
                              ExReleasePushLockSharedEx(v46, 0LL);
                            }
                            KeLeaveCriticalRegion();
                            if ( v68 )
                            {
                              v37 = (_DWORD *)*((_QWORD *)this + 9);
                              v80 = 0;
                              if ( v37 )
                                ZwSetEvent(v37, &v80);
                            }
                          }
                          else
                          {
                            CPushLock::ReleaseLock((CPushLock *)Handle);
                          }
                        }
                      }
                      if ( !DXGGLOBAL::m_pGlobal )
                      {
                        v62 = WdLogNewEntry5_WdAssertion(v37, v38);
                        *(_QWORD *)(v62 + 24) = 2200LL;
                        WdLogEvent5_WdAssertion(v62);
                      }
                      (*(void (__fastcall **)(unsigned int *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 40LL))(
                        v14 + 4,
                        1LL);
                      goto LABEL_72;
                    }
                    v64 = 0;
                    if ( !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 168LL))(v34) )
                    {
                      Buffer[0] = *((_QWORD *)v34 + 4);
                      v64 = 0;
                      Buffer[1] = 0LL;
                      inserted = RtlInsertElementGenericTable(
                                   (PRTL_GENERIC_TABLE)((char *)this + 192),
                                   Buffer,
                                   0x10u,
                                   NewElement);
                      v35 = inserted;
                      if ( inserted )
                      {
                        if ( !NewElement[0] )
                          goto LABEL_44;
                        v36 = CTokenQueue::Create(&v90);
                        v60 = inserted;
                        v64 = v36;
                        if ( v36 < 0 )
                        {
                          RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), inserted);
                          v35 = 0LL;
LABEL_44:
                          v36 = v64;
                        }
                        else
                        {
                          *((_QWORD *)inserted + 1) = v90;
                          v35 = v60;
                        }
                      }
                      else
                      {
                        v36 = -1073741801;
                        v64 = -1073741801;
                      }
                      if ( v36 >= 0 )
                      {
                        v37 = (_DWORD *)v35[1];
                        v38 = (CTokenManager **)((char *)v34 + 8);
                        v78 = v37;
                        v37[6] = 0;
                        v39 = *(CTokenManager **)v37;
                        if ( *(_DWORD **)(*(_QWORD *)v37 + 8LL) != v37 )
                          goto LABEL_147;
                        *v38 = v39;
                        *((_QWORD *)v34 + 2) = v37;
                        *((_QWORD *)v39 + 1) = v38;
                        *(_QWORD *)v37 = v38;
                        if ( *((_DWORD *)v34 + 6) == 2 )
                        {
                          if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 104LL))(v34) )
                            *((_QWORD *)v78 + 2) = v34;
                          if ( !(*(unsigned int (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 120LL))(v34) )
                          {
                            if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 96LL))(v34) )
                            {
                              v54 = (_QWORD *)*((_QWORD *)v34 + 1);
                              if ( v54 == v78
                                || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*(v54 - 1) + 88LL))(v54 - 1) )
                              {
                                (*(void (__fastcall **)(struct CToken *))(*(_QWORD *)v34 + 80LL))(v34);
                              }
                            }
                          }
LABEL_51:
                          v36 = v64;
                        }
                        if ( v36 >= 0 )
                          goto LABEL_53;
                      }
                      (**(void (__fastcall ***)(struct CToken *, __int64))v34)(v34, 1LL);
                      goto LABEL_104;
                    }
                    CTokenQueue::AddToken((CTokenManager *)((char *)this + 320), v34);
                    goto LABEL_51;
                  }
                }
LABEL_73:
                v7 = v73;
LABEL_74:
                v15 = v71;
                goto LABEL_15;
              case 9u:
                CTokenManager::CompleteFlipManagerToken(this, *((void **)v14 + 2));
                goto LABEL_74;
            }
            memmove(v81, v14, v14[1]);
            v18 = v14[1];
            v15 = v71 + 1;
            v16 += v18;
            ++v71;
            v81 = (char *)v81 + v18;
          }
LABEL_15:
          ++v13;
          v14 = (unsigned int *)((char *)v14 + v14[1]);
        }
        v19 = *((_QWORD *)this + 23);
        *(_DWORD *)(*(_QWORD *)(v19 + 2088) + 16LL) += v15;
        *(_DWORD *)(*(_QWORD *)(v19 + 2088) + 2068LL) += v16;
        *(_DWORD *)(v19 + 2104) -= v16;
        *(_QWORD *)(v19 + 2096) += v16;
        if ( (_DWORD)v86 == v7 )
        {
          v7 = 0;
        }
        else
        {
          v20 = (void *)*((_QWORD *)this + 7);
          v7 = 0;
          PreviousState[0] = 0;
          ZwSetEvent(v20, PreviousState);
        }
        v5 = v76;
        v3 = v75;
      }
LABEL_19:
      v2 = v63;
      goto LABEL_20;
    }
    v8 = CLegacyTokenBuffer::Create((struct CLegacyTokenBuffer **)this + 23);
LABEL_3:
    if ( v8 >= 0 )
      goto LABEL_4;
LABEL_20:
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
    if ( v8 < 0 || !v2 )
      return (unsigned int)v8;
    v4 = (char *)this + 88;
  }
}
