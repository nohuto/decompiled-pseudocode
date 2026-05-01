/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18002E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180011598 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002B12C (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18002E830 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18002E8A0 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006A290 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x1801522AC (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  const WCHAR *v4; // r14
  int *v5; // rdi
  __int64 v6; // rdi
  int Error; // edi
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  int v12; // r11d
  __int128 v13; // xmm3
  __int128 v14; // xmm2
  __int64 v15; // xmm1_8
  int v16; // eax
  volatile signed __int32 *v17; // rdx
  const GUID *v19; // rax
  char v20; // bl
  int v21; // eax
  __int64 v22; // rdx
  void *v23; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v25; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v28; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v31; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v33; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v34; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h]
  PSRWLOCK SRWLock; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  struct tagRECT v44; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v45; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT rc; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v48[4]; // [rsp+100h] [rbp+0h] BYREF
  void **v49; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v50[3]; // [rsp+118h] [rbp+18h] BYREF
  int v51; // [rsp+130h] [rbp+30h]
  int *v52; // [rsp+138h] [rbp+38h]
  int *v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h] BYREF
  char v55; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v56[32]; // [rsp+150h] [rbp+50h] BYREF
  int v57; // [rsp+170h] [rbp+70h] BYREF
  const char *v58; // [rsp+178h] [rbp+78h]
  LPVOID v59; // [rsp+180h] [rbp+80h]
  char v60; // [rsp+188h] [rbp+88h]
  __int64 v61; // [rsp+190h] [rbp+90h]
  _BYTE v62[144]; // [rsp+198h] [rbp+98h] BYREF
  LPVOID lpMem; // [rsp+228h] [rbp+128h]
  __int64 v64; // [rsp+230h] [rbp+130h]
  __int64 v65; // [rsp+238h] [rbp+138h]
  void *v66; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+250h] [rbp+150h] BYREF
  void *v68; // [rsp+260h] [rbp+160h]
  int v69; // [rsp+268h] [rbp+168h]
  int v70; // [rsp+26Ch] [rbp+16Ch]
  void *v71; // [rsp+270h] [rbp+170h]
  __int64 v72; // [rsp+278h] [rbp+178h]
  DWORD *p_CurrentThreadId; // [rsp+280h] [rbp+180h]
  __int64 v74; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+290h] [rbp+190h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v42 = -2LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  v50[0] = 0LL;
  v50[1] = &v49;
  v50[2] = 0LL;
  v51 = 0;
  v52 = &v57;
  v53 = &v54;
  v54 = 0;
  v55 = 0;
  v60 = 0;
  v57 = 0;
  v58 = "ReconcileApplicationViewState";
  v59 = 0LL;
  v61 = 1LL;
  lpMem = 0LL;
  memset_0(v62, 0, sizeof(v62));
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v49 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v4 = (const WCHAR *)*((_QWORD *)this + 83);
  v43 = 0LL;
  v5 = v53;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180599AE8;
    qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
    qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    EventActivityIdControl(3u, (LPGUID)(v5 + 2));
  }
  else
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
  }
  *v5 = 1;
  v33 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, &v33) && v28 )
  {
    v33 = &qword_180599AE8;
    qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
    qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
  }
  v6 = *((_QWORD *)v33 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v71 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v72 = 8LL;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v74 = 4LL;
    TlgCreateWsz(&pDesc, v4);
    v19 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v49);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v68 = &unk_1804BA7E1;
    v69 = 80;
    v70 = 1;
    v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, (LPCGUID)(v53 + 2), v19, 5u, &UserData);
  }
  if ( !v51 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v50);
  SetRectEmpty(&rc);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    Error = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      UserDataCount);
    goto LABEL_23;
  }
  if ( GetClientRect(*((HWND *)this + 16), &Rect) )
  {
    Error = 0;
LABEL_16:
    if ( *((_BYTE *)this + 53) )
    {
      v44 = Rect;
      Rect = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(this, &v45, &v44);
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 15) + 120LL))(*((_QWORD *)this + 15), v48);
    Rect.left += v48[0];
    Rect.top += v48[1];
    Rect.right -= v48[2];
    Rect.bottom -= v48[3];
    rc = Rect;
    goto LABEL_19;
  }
  Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    goto LABEL_16;
LABEL_19:
  if ( Error >= 0 )
  {
    Error = CFrameApplicationPresentation::_ComputeApplicationViewData(this, &rc, (struct APPLICATION_VIEW_DATA *)&v38);
    if ( Error >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 168),
              (const struct APPLICATION_VIEW_DATA *)&v38,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 36) - *((_DWORD *)this + 34)))
        && v10 == v9
        && v12 == v11 )
      {
        *((_DWORD *)a2 + 11) |= 1u;
      }
      v13 = v38;
      *(_OWORD *)v8 = v38;
      v14 = v39;
      *(_OWORD *)(v8 + 16) = v39;
      v15 = v40;
      *(_QWORD *)(v8 + 32) = v40;
      v16 = v41;
      *(_DWORD *)(v8 + 40) = v41;
      *(struct tagRECT *)((char *)this + 136) = rc;
      *(_OWORD *)a2 = v13;
      *((_OWORD *)a2 + 1) = v14;
      *((_QWORD *)a2 + 4) = v15;
      *((_DWORD *)a2 + 10) = v16;
    }
  }
LABEL_23:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v49, (unsigned int)Error);
  v49 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v17 = (volatile signed __int32 *)v66;
  if ( !v66 )
    goto LABEL_24;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v49,
    &SRWLock);
  v17 = (volatile signed __int32 *)v66;
  if ( v66 && *(_DWORD *)v66 == 1 )
  {
    v20 = 1;
  }
  else
  {
    v20 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v66);
    v17 = (volatile signed __int32 *)v66;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v17 = (volatile signed __int32 *)v66;
  }
  if ( v20 )
  {
LABEL_24:
    if ( *v53 == 1 )
    {
      v21 = v53[21];
      v30 = v21;
      v22 = 2147942974LL;
      if ( v21 < 0 )
        v22 = (unsigned int)v21;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v53,
        v22,
        &v30);
      ((void (__fastcall *)(void ***))v49[1])(&v49);
      v17 = (volatile signed __int32 *)v66;
    }
  }
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
    {
      v23 = v66;
      if ( v66 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v66 + 2);
        operator delete(v23, (const struct std::nothrow_t *)0x100);
      }
    }
    v66 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v64 = 0LL;
  }
  if ( v60 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v59);
    v60 = 0;
  }
  v59 = 0LL;
  if ( v54 == 1 )
  {
    v54 = 2;
    v34 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v31, &v34) && v31 )
    {
      v34 = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v34 + 1), v56);
  }
  v54 = 3;
  if ( v51 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v50);
  return (unsigned int)Error;
}
