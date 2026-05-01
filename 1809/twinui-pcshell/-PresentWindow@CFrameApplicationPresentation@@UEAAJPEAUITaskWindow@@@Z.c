/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18003DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18003CB8C (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___ @ 0x18003E6CC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003EAE4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4E0 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     WPP_SF_qd @ 0x1800FAFA4 (WPP_SF_qd.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180107F90 (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsP_ea_180107F90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct ITaskWindow *a2)
{
  struct ITaskWindow *v4; // rdi
  char v5; // r12
  char v6; // di
  __int64 v7; // r15
  __int64 *v8; // r14
  __int64 v10; // r14
  int *v11; // rdi
  __int64 v12; // rdi
  const GUID *v13; // rax
  __int64 v14; // rcx
  char *v15; // rax
  void *v16; // r14
  char *v17; // r15
  char v18; // bl
  volatile signed __int32 *v19; // rdx
  int v20; // edi
  __int64 v21; // rax
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  void *v27; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v29; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v31; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v35; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v39; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v40; // [rsp+70h] [rbp-90h] BYREF
  PSRWLOCK v41; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h]
  _QWORD v47[2]; // [rsp+B8h] [rbp-48h] BYREF
  void **v48; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v49[3]; // [rsp+D0h] [rbp-30h] BYREF
  int v50; // [rsp+E8h] [rbp-18h]
  _DWORD *v51; // [rsp+F0h] [rbp-10h]
  int *v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+100h] [rbp+0h] BYREF
  char v54; // [rsp+104h] [rbp+4h]
  int v55; // [rsp+128h] [rbp+28h]
  __int128 v56; // [rsp+130h] [rbp+30h]
  char v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  char v59[144]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v60; // [rsp+1E0h] [rbp+E0h]
  __int64 v61; // [rsp+1E8h] [rbp+E8h]
  __int64 v62; // [rsp+1F0h] [rbp+F0h]
  void *v63; // [rsp+1F8h] [rbp+F8h] BYREF
  void **v64; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v65[3]; // [rsp+208h] [rbp+108h] BYREF
  int v66; // [rsp+220h] [rbp+120h]
  int *v67; // [rsp+228h] [rbp+128h]
  int *v68; // [rsp+230h] [rbp+130h]
  int v69; // [rsp+238h] [rbp+138h] BYREF
  char v70; // [rsp+23Ch] [rbp+13Ch]
  _OWORD v71[2]; // [rsp+240h] [rbp+140h] BYREF
  int v72; // [rsp+260h] [rbp+160h] BYREF
  const char *v73; // [rsp+268h] [rbp+168h]
  LPVOID v74; // [rsp+270h] [rbp+170h]
  char v75; // [rsp+278h] [rbp+178h]
  __int64 v76; // [rsp+280h] [rbp+180h]
  _BYTE v77[144]; // [rsp+288h] [rbp+188h] BYREF
  LPVOID lpMem; // [rsp+318h] [rbp+218h]
  __int64 v79; // [rsp+320h] [rbp+220h]
  __int64 v80; // [rsp+328h] [rbp+228h]
  void *v81; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+340h] [rbp+240h] BYREF
  void *v83; // [rsp+350h] [rbp+250h]
  int v84; // [rsp+358h] [rbp+258h]
  int v85; // [rsp+35Ch] [rbp+25Ch]
  DWORD *p_CurrentThreadId; // [rsp+360h] [rbp+260h]
  __int64 v87; // [rsp+368h] [rbp+268h]
  int *v88; // [rsp+370h] [rbp+270h]
  __int64 v89; // [rsp+378h] [rbp+278h]
  __int64 *v90; // [rsp+380h] [rbp+280h]
  __int64 v91; // [rsp+388h] [rbp+288h]
  __int64 *v92; // [rsp+390h] [rbp+290h]
  __int64 v93; // [rsp+398h] [rbp+298h]

  v46 = -2LL;
  v4 = (struct ITaskWindow *)**((_QWORD **)this + 13);
  if ( !a2 || !v4 )
  {
LABEL_51:
    v6 = 0;
    v5 = 0;
    goto LABEL_5;
  }
  if ( a2 != v4 )
  {
    v37 = 0LL;
    v36 = 0LL;
    if ( (**(int (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))a2)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v37) >= 0 )
    {
      v20 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))v4)(
              v4,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v36);
      if ( v20 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      if ( v20 >= 0 && v37 == v36 )
      {
        v5 = 1;
        v6 = 1;
        goto LABEL_5;
      }
    }
    goto LABEL_51;
  }
  v5 = 1;
  v6 = 1;
LABEL_5:
  v7 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v8 = (__int64 *)*((_QWORD *)this + 14);
  if ( !v6 || v7 != *v8 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v21 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_853ba2fb797437ec94ff4aabc4e6fa11_Traceguids,
        v21,
        *((_DWORD *)this + 12));
      v8 = (__int64 *)*((_QWORD *)this + 14);
    }
    v65[0] = 0LL;
    v65[1] = &v64;
    v65[2] = 0LL;
    v66 = 0;
    v67 = &v72;
    v68 = &v69;
    v69 = 0;
    v70 = 0;
    v75 = 0;
    v72 = 0;
    v73 = "PresentWindow";
    v74 = 0LL;
    v76 = 1LL;
    lpMem = 0LL;
    memset_0(v77, 0, sizeof(v77));
    v79 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    v64 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v10 = *v8;
    v33 = *((_DWORD *)this + 12);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      &v64,
      &v41);
    v11 = v68;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    if ( **((_DWORD **)Context + 1) <= 5u )
      *((_QWORD *)v11 + 1) = 0LL;
    else
      EventActivityIdControl(3u, (LPGUID)(v11 + 2));
    *v11 = 1;
    if ( v41 )
      ReleaseSRWLockExclusive(v41);
    v39 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v31, &v39) && v31 )
    {
      v39 = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    v12 = *((_QWORD *)v39 + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v87 = 4LL;
      v88 = &v33;
      v89 = 4LL;
      v42 = v10;
      v90 = &v42;
      v91 = 8LL;
      v43 = v7;
      v92 = &v43;
      v93 = 8LL;
      v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v64);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18044AC94 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v12 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v83 = &unk_18044AC9F;
      v84 = 78;
      v85 = 1;
      EventWriteTransfer(*(_QWORD *)(v12 + 32), &EventDescriptor, (LPCGUID)(v68 + 2), v13, 6u, &UserData);
    }
    if ( !v66 )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v65);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 536LL))(*((_QWORD *)this + 73));
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 208LL))(
      a2,
      *((_QWORD *)this + 16),
      3LL);
    v14 = **((_QWORD **)this + 13);
    if ( v14 && !v5 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v14 + 208LL))(v14, *((_QWORD *)this + 16), 1LL);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v47[0] = a2;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v47[1] = this;
    v48 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v49[0] = 0LL;
    v49[1] = &v48;
    v49[2] = 0LL;
    v50 = 0;
    v51 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v49);
    v52 = &v53;
    v53 = 0;
    v54 = 0;
    v57 = 0;
    v55 = 0;
    v56 = 0LL;
    v58 = 1LL;
    v60 = 0LL;
    memset_0(v59, 0, sizeof(v59));
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    if ( v50 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v49);
    if ( v81 )
    {
      v52 = v68;
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        &v63,
        &v81);
    }
    else
    {
      v15 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        *(_DWORD *)v15 = 1;
        v17 = v15 + 8;
        *((_DWORD *)v15 + 2) = 0;
        v15[12] = 0;
        *((_DWORD *)v15 + 2) = v69;
        v15[12] = v70;
        *((_OWORD *)v15 + 1) = v71[0];
        *((_OWORD *)v15 + 2) = v71[1];
        v69 = 0;
        v70 = 0;
        memset_0(v15 + 48, 0, 0x20uLL);
        *((_DWORD *)v17 + 10) = v72;
        *((_QWORD *)v17 + 6) = v73;
        wil::details::StoredCallContextInfo::~StoredCallContextInfo((LPVOID *)v17 + 5);
        *((_QWORD *)v17 + 7) = v74;
        v74 = 0LL;
        v17[64] = v75;
        v75 = 0;
        *((_QWORD *)v17 + 9) = v76;
        wil::StoredFailureInfo::StoredFailureInfo((__int64)(v17 + 80), (__int64)v77);
        *((_QWORD *)v17 + 30) = 0LL;
        if ( v63 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63, 0xFFFFFFFF) == 1 )
          {
            v22 = v63;
            if ( v63 )
            {
              wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v63 + 8);
              operator delete(v22, (const struct std::nothrow_t *)0x100);
            }
          }
        }
        v63 = v16;
        v52 = (int *)v17;
        if ( v81 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81, 0xFFFFFFFF) == 1 )
          {
            v23 = v81;
            if ( v81 )
            {
              wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v81 + 8);
              operator delete(v23, (const struct std::nothrow_t *)0x100);
            }
          }
          v16 = v63;
        }
        v81 = v16;
        if ( v16 )
          _InterlockedIncrement((volatile signed __int32 *)v16);
        v68 = v52;
        v67 = v52 + 10;
      }
    }
    v51 = v52 + 10;
    v48 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___(this, v47);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    v64 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v18 = 1;
    v19 = (volatile signed __int32 *)v81;
    if ( !v81 )
      goto LABEL_71;
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      &v64,
      &SRWLock);
    v19 = (volatile signed __int32 *)v81;
    if ( !v81 || *(_DWORD *)v81 != 1 )
    {
      v18 = 0;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81, 0xFFFFFFFF) == 1 )
        {
          v24 = v81;
          if ( v81 )
          {
            wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v81 + 8);
            operator delete(v24, (const struct std::nothrow_t *)0x100);
          }
        }
        v19 = 0LL;
        v81 = 0LL;
      }
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v19 = (volatile signed __int32 *)v81;
    }
    if ( v18 )
    {
LABEL_71:
      if ( *v68 == 1 )
      {
        v25 = v68[21];
        v34 = v25;
        v26 = 2147942974LL;
        if ( v25 < 0 )
          v26 = (unsigned int)v25;
        wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
          v68,
          v26,
          &v34);
        ((void (__fastcall *)(void ***))v64[1])(&v64);
        v19 = (volatile signed __int32 *)v81;
      }
    }
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
      {
        v27 = v81;
        if ( v81 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v81 + 8);
          operator delete(v27, (const struct std::nothrow_t *)0x100);
        }
      }
      v81 = 0LL;
    }
    if ( lpMem )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
      lpMem = 0LL;
      v79 = 0LL;
    }
    if ( v75 )
    {
      v29 = GetProcessHeap();
      HeapFree(v29, 0, v74);
      v75 = 0;
    }
    v74 = 0LL;
    if ( v69 == 1 )
    {
      v69 = 2;
      v40 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v35, &v40) && v35 )
      {
        v40 = qword_18050F7D0;
        qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v40 + 1), v71);
    }
    v69 = 3;
    if ( v66 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v65);
  }
  return 0LL;
}
