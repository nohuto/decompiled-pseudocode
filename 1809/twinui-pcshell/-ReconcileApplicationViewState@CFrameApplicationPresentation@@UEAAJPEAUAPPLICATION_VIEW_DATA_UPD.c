/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800159D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180015C08 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180015C70 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003EAE4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4E0 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Start@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@ReconcileApplicationViewState@CFramePresentationTelemetry@@SA?AV01@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008B044 (--$Start@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Reconcile.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x180128B7C (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int Error; // edi
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  __int128 v10; // xmm3
  __int128 v11; // xmm2
  __int64 v12; // xmm1_8
  int v13; // eax
  volatile signed __int32 *v14; // rdx
  char v16; // bl
  int v17; // eax
  __int64 v18; // rdx
  void *v19; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v21; // rax
  WINBOOL fPending[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-D8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  _QWORD v29[3]; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v30; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT Rect; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT rc; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v33[4]; // [rsp+B8h] [rbp-50h] BYREF
  void **v34; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v35[24]; // [rsp+D0h] [rbp-38h] BYREF
  int v36; // [rsp+E8h] [rbp-20h]
  _DWORD *v37; // [rsp+F8h] [rbp-10h]
  int v38; // [rsp+100h] [rbp-8h]
  _BYTE v39[48]; // [rsp+108h] [rbp+0h] BYREF
  LPVOID v40; // [rsp+138h] [rbp+30h]
  char v41; // [rsp+140h] [rbp+38h]
  LPVOID lpMem; // [rsp+1E0h] [rbp+D8h]
  __int64 v43; // [rsp+1E8h] [rbp+E0h]
  void *v44; // [rsp+1F8h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v29[0] = -2LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  CFramePresentationTelemetry::ReconcileApplicationViewState::Start<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &>((CFramePresentationTelemetry::ReconcileApplicationViewState *)&v34);
  SetRectEmpty(&rc);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    Error = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      fPending[0]);
    goto LABEL_11;
  }
  if ( GetClientRect(*((HWND *)this + 16), &Rect) )
  {
    Error = 0;
LABEL_4:
    if ( *((_BYTE *)this + 53) )
    {
      *(struct tagRECT *)&v29[1] = Rect;
      Rect = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(this, &v30, (struct tagRECT *)&v29[1]);
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 15) + 120LL))(*((_QWORD *)this + 15), v33);
    Rect.left += v33[0];
    Rect.top += v33[1];
    Rect.right -= v33[2];
    Rect.bottom -= v33[3];
    rc = Rect;
    goto LABEL_7;
  }
  Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    goto LABEL_4;
LABEL_7:
  if ( Error >= 0 )
  {
    Error = CFrameApplicationPresentation::_ComputeApplicationViewData(
              this,
              &rc,
              (struct APPLICATION_VIEW_DATA *)SRWLock_8);
    if ( Error >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 168),
              (const struct APPLICATION_VIEW_DATA *)SRWLock_8,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 36) - *((_DWORD *)this + 34)))
        && v7 == v6
        && v9 == v8 )
      {
        *((_DWORD *)a2 + 11) |= 1u;
      }
      v10 = *(_OWORD *)SRWLock_8;
      *(_OWORD *)v5 = *(_OWORD *)SRWLock_8;
      v11 = v26;
      *(_OWORD *)(v5 + 16) = v26;
      v12 = v27;
      *(_QWORD *)(v5 + 32) = v27;
      v13 = v28;
      *(_DWORD *)(v5 + 40) = v28;
      *(struct tagRECT *)((char *)this + 136) = rc;
      *(_OWORD *)a2 = v10;
      *((_OWORD *)a2 + 1) = v11;
      *((_QWORD *)a2 + 4) = v12;
      *((_DWORD *)a2 + 10) = v13;
    }
  }
LABEL_11:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v34, (unsigned int)Error);
  v34 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v14 = (volatile signed __int32 *)v44;
  if ( !v44 )
    goto LABEL_12;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v34,
    &SRWLock);
  v14 = (volatile signed __int32 *)v44;
  if ( v44 && *(_DWORD *)v44 == 1 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v44);
    v14 = (volatile signed __int32 *)v44;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v14 = (volatile signed __int32 *)v44;
  }
  if ( v16 )
  {
LABEL_12:
    if ( *v37 == 1 )
    {
      v17 = v37[21];
      fPending[0] = v17;
      v18 = 2147942974LL;
      if ( v17 < 0 )
        v18 = (unsigned int)v17;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v37,
        v18,
        fPending);
      ((void (__fastcall *)(void ***))v34[1])(&v34);
      v14 = (volatile signed __int32 *)v44;
    }
  }
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
    {
      v19 = v44;
      if ( v44 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v44 + 8);
        operator delete(v19, (const struct std::nothrow_t *)0x100);
      }
    }
    v44 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v43 = 0LL;
  }
  if ( v41 )
  {
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v40);
    v41 = 0;
  }
  v40 = 0LL;
  if ( v38 == 1 )
  {
    v38 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending[1], &Context)
      && fPending[1] )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v39);
  }
  v38 = 3;
  if ( v36 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v35);
  return (unsigned int)Error;
}
