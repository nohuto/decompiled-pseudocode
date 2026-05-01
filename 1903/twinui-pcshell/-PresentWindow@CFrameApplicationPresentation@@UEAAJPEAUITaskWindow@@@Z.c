/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18002A680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180011598 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___ @ 0x18002AD34 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002B12C (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18002C6BC (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18004A070 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_qd @ 0x180120F24 (WPP_SF_qd.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18012DF54 (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct ITaskWindow *a2)
{
  struct ITaskWindow *v4; // rsi
  char v5; // r12
  char v6; // si
  __int64 v7; // r15
  __int64 *v8; // r14
  __int64 v10; // r14
  int *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *Local; // rcx
  int *v17; // rax
  int *v18; // rsi
  int *v19; // r14
  char v20; // bl
  volatile signed __int32 *v21; // rdx
  const GUID *v22; // rax
  int v23; // esi
  __int64 v24; // rax
  void *v25; // r13
  void *v26; // rsi
  void *v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  void *v30; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v32; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v34; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v38; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v42; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v43; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v44; // [rsp+78h] [rbp-88h]
  PSRWLOCK v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v50[2]; // [rsp+B0h] [rbp-50h] BYREF
  void **v51; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v52[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-28h]
  DWORD v54; // [rsp+E0h] [rbp-20h]
  _DWORD *v55; // [rsp+E8h] [rbp-18h]
  int *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h] BYREF
  char v58; // [rsp+FCh] [rbp-4h]
  int v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+128h] [rbp+28h]
  char v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  char v63[144]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  __int64 v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  void *v67[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  void **v68; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v69[3]; // [rsp+208h] [rbp+108h] BYREF
  int v70; // [rsp+220h] [rbp+120h]
  int *v71; // [rsp+228h] [rbp+128h]
  int *v72; // [rsp+230h] [rbp+130h]
  int v73; // [rsp+238h] [rbp+138h] BYREF
  char v74; // [rsp+23Ch] [rbp+13Ch]
  char v75[32]; // [rsp+240h] [rbp+140h] BYREF
  int v76; // [rsp+260h] [rbp+160h] BYREF
  const char *v77; // [rsp+268h] [rbp+168h]
  LPVOID v78; // [rsp+270h] [rbp+170h]
  char v79; // [rsp+278h] [rbp+178h]
  __int64 v80; // [rsp+280h] [rbp+180h]
  char v81[144]; // [rsp+288h] [rbp+188h] BYREF
  LPVOID lpMem; // [rsp+318h] [rbp+218h]
  __int64 v83; // [rsp+320h] [rbp+220h]
  __int64 v84; // [rsp+328h] [rbp+228h]
  void *v85; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+340h] [rbp+240h] BYREF
  void *v87; // [rsp+350h] [rbp+250h]
  int v88; // [rsp+358h] [rbp+258h]
  int v89; // [rsp+35Ch] [rbp+25Ch]
  void *v90; // [rsp+360h] [rbp+260h]
  __int64 v91; // [rsp+368h] [rbp+268h]
  DWORD *p_CurrentThreadId; // [rsp+370h] [rbp+270h]
  __int64 v93; // [rsp+378h] [rbp+278h]
  int *v94; // [rsp+380h] [rbp+280h]
  __int64 v95; // [rsp+388h] [rbp+288h]
  __int64 *v96; // [rsp+390h] [rbp+290h]
  __int64 v97; // [rsp+398h] [rbp+298h]
  __int64 *v98; // [rsp+3A0h] [rbp+2A0h]
  __int64 v99; // [rsp+3A8h] [rbp+2A8h]

  v67[1] = (void *)-2LL;
  v4 = (struct ITaskWindow *)**((_QWORD **)this + 13);
  if ( !a2 || !v4 )
  {
LABEL_55:
    v6 = 0;
    v5 = 0;
    goto LABEL_5;
  }
  if ( a2 != v4 )
  {
    v40 = 0LL;
    v39 = 0LL;
    if ( (**(int (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))a2)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v40) >= 0 )
    {
      v23 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))v4)(
              v4,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v39);
      if ( v23 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      if ( v23 >= 0 && v40 == v39 )
      {
        v5 = 1;
        v6 = 1;
        goto LABEL_5;
      }
    }
    goto LABEL_55;
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
      v24 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_94922da7bd9137d502a338501bb650ae_Traceguids,
        v24,
        *((_DWORD *)this + 12));
      v8 = (__int64 *)*((_QWORD *)this + 14);
    }
    v69[0] = 0LL;
    v69[1] = &v68;
    v69[2] = 0LL;
    v70 = 0;
    v71 = &v76;
    v72 = &v73;
    v73 = 0;
    v74 = 0;
    v79 = 0;
    v76 = 0;
    v77 = "PresentWindow";
    v78 = 0LL;
    v80 = 1LL;
    lpMem = 0LL;
    memset_0(v81, 0, sizeof(v81));
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    v68 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v10 = *v8;
    v36 = *((_DWORD *)this + 12);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      &v68,
      &v45);
    v11 = v72;
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
      EventActivityIdControl(3u, (LPGUID)(v11 + 2));
    }
    else
    {
      *((_QWORD *)v11 + 1) = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
    }
    *v11 = 1;
    if ( v45 )
      ReleaseSRWLockExclusive(v45);
    v42 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v34, &v42) && v34 )
    {
      v42 = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    v12 = *((_QWORD *)v42 + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      v90 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v91 = 8LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v93 = 4LL;
      v94 = &v36;
      v95 = 4LL;
      v46 = v10;
      v96 = &v46;
      v97 = 8LL;
      v47 = v7;
      v98 = &v47;
      v99 = 8LL;
      v22 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v68);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v12 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v87 = &unk_1804BA90F;
      v88 = 94;
      v89 = 1;
      v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v12 + 32), &EventDescriptor, (LPCGUID)(v72 + 2), v22, 7u, &UserData);
    }
    if ( !v70 )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v69);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 86) + 536LL))(*((_QWORD *)this + 86));
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 208LL))(
      a2,
      *((_QWORD *)this + 16),
      3LL);
    v13 = **((_QWORD **)this + 13);
    if ( v13 && !v5 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 208LL))(v13, *((_QWORD *)this + 16), 1LL);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v50[0] = a2;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v50[1] = this;
    v51 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v52[0] = 0LL;
    v52[1] = &v51;
    v53 = 0LL;
    v54 = 0;
    v55 = 0LL;
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      LOBYTE(v14) = 1;
      Local = (__int64 *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                           v15,
                           v14);
    }
    else
    {
      Local = 0LL;
    }
    v52[0] = Local;
    if ( Local )
    {
      v53 = *Local;
      *Local = (__int64)v52;
      v54 = GetCurrentThreadId();
    }
    v56 = &v57;
    v57 = 0;
    v58 = 0;
    v61 = 0;
    v59 = 0;
    v60 = 0LL;
    v62 = 1LL;
    v64 = 0LL;
    memset_0(v63, 0, sizeof(v63));
    v65 = 0LL;
    v66 = 0LL;
    v67[0] = 0LL;
    if ( v54 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v52);
    if ( v85 )
    {
      v56 = v72;
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        v67,
        &v85);
    }
    else
    {
      v17 = (int *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      if ( v17 )
      {
        *v17 = 1;
        v19 = v17 + 2;
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
          v17 + 2,
          &v73);
        if ( v67[0] )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v67[0], 0xFFFFFFFF) == 1 )
          {
            v25 = v67[0];
            if ( v67[0] )
            {
              wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v67[0] + 2);
              operator delete(v25, (const struct std::nothrow_t *)0x100);
            }
          }
        }
        v67[0] = v18;
        v56 = v19;
        if ( v85 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v85, 0xFFFFFFFF) == 1 )
          {
            v26 = v85;
            if ( v85 )
            {
              wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v85 + 2);
              operator delete(v26, (const struct std::nothrow_t *)0x100);
            }
          }
          v18 = (int *)v67[0];
        }
        v85 = v18;
        if ( v18 )
          _InterlockedIncrement(v18);
        v72 = v56;
        v71 = v56 + 10;
      }
    }
    v55 = v56 + 10;
    v51 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___(this, v50);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    v68 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v20 = 1;
    v21 = (volatile signed __int32 *)v85;
    if ( !v85 )
      goto LABEL_77;
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      &v68,
      &SRWLock);
    v21 = (volatile signed __int32 *)v85;
    if ( !v85 || *(_DWORD *)v85 != 1 )
    {
      v20 = 0;
      if ( v85 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v85, 0xFFFFFFFF) == 1 )
        {
          v27 = v85;
          if ( v85 )
          {
            wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v85 + 2);
            operator delete(v27, (const struct std::nothrow_t *)0x100);
          }
        }
        v21 = 0LL;
        v85 = 0LL;
      }
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v21 = (volatile signed __int32 *)v85;
    }
    if ( v20 )
    {
LABEL_77:
      if ( *v72 == 1 )
      {
        v28 = v72[21];
        v37 = v28;
        v29 = 2147942974LL;
        if ( v28 < 0 )
          v29 = (unsigned int)v28;
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
          v72,
          v29,
          &v37);
        ((void (__fastcall *)(void ***))v68[1])(&v68);
        v21 = (volatile signed __int32 *)v85;
      }
    }
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21, 0xFFFFFFFF) == 1 )
      {
        v30 = v85;
        if ( v85 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v85 + 2);
          operator delete(v30, (const struct std::nothrow_t *)0x100);
        }
      }
      v85 = 0LL;
    }
    if ( lpMem )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
      lpMem = 0LL;
      v83 = 0LL;
    }
    if ( v79 )
    {
      v32 = GetProcessHeap();
      HeapFree(v32, 0, v78);
      v79 = 0;
    }
    v78 = 0LL;
    if ( v73 == 1 )
    {
      v73 = 2;
      v43 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v38, &v43) && v38 )
      {
        v43 = &qword_180599AE8;
        qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
        qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v43 + 1), v75);
    }
    v73 = 3;
    if ( v70 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v69);
  }
  return 0LL;
}
