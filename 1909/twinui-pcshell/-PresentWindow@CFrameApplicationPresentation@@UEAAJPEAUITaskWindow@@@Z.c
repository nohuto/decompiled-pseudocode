/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180033C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180012B74 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800134F4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800162D0 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___ @ 0x1800342D4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055C68 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180137504 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_qd @ 0x1801403C4 (WPP_SF_qd.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18014D494 (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
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
  __int64 v14; // rcx
  __int64 *Local; // rcx
  int *v16; // rax
  int *v17; // rsi
  int *v18; // r14
  char v19; // bl
  volatile signed __int32 *v20; // rdx
  const GUID *v21; // rax
  int v22; // esi
  __int64 v23; // rax
  void *v24; // r13
  void *v25; // rsi
  void *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  void *v29; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v31; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v33; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v37; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v41; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  PSRWLOCK v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v49[2]; // [rsp+B0h] [rbp-50h] BYREF
  void **v50; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v51[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h]
  DWORD v53; // [rsp+E0h] [rbp-20h]
  _DWORD *v54; // [rsp+E8h] [rbp-18h]
  int *v55; // [rsp+F0h] [rbp-10h]
  int v56; // [rsp+F8h] [rbp-8h] BYREF
  char v57; // [rsp+FCh] [rbp-4h]
  int v58; // [rsp+120h] [rbp+20h]
  __int128 v59; // [rsp+128h] [rbp+28h]
  char v60; // [rsp+138h] [rbp+38h]
  __int64 v61; // [rsp+140h] [rbp+40h]
  char v62[144]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  __int64 v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  void *v66[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  void **v67; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v68[3]; // [rsp+208h] [rbp+108h] BYREF
  int v69; // [rsp+220h] [rbp+120h]
  int *v70; // [rsp+228h] [rbp+128h]
  int *v71; // [rsp+230h] [rbp+130h]
  int v72; // [rsp+238h] [rbp+138h] BYREF
  char v73; // [rsp+23Ch] [rbp+13Ch]
  char v74[32]; // [rsp+240h] [rbp+140h] BYREF
  int v75; // [rsp+260h] [rbp+160h] BYREF
  const char *v76; // [rsp+268h] [rbp+168h]
  LPVOID v77; // [rsp+270h] [rbp+170h]
  char v78; // [rsp+278h] [rbp+178h]
  __int64 v79; // [rsp+280h] [rbp+180h]
  char v80[144]; // [rsp+288h] [rbp+188h] BYREF
  LPVOID lpMem; // [rsp+318h] [rbp+218h]
  __int64 v82; // [rsp+320h] [rbp+220h]
  __int64 v83; // [rsp+328h] [rbp+228h]
  void *v84; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+340h] [rbp+240h] BYREF
  void *v86; // [rsp+350h] [rbp+250h]
  int v87; // [rsp+358h] [rbp+258h]
  int v88; // [rsp+35Ch] [rbp+25Ch]
  void *v89; // [rsp+360h] [rbp+260h]
  __int64 v90; // [rsp+368h] [rbp+268h]
  DWORD *p_CurrentThreadId; // [rsp+370h] [rbp+270h]
  __int64 v92; // [rsp+378h] [rbp+278h]
  int *v93; // [rsp+380h] [rbp+280h]
  __int64 v94; // [rsp+388h] [rbp+288h]
  __int64 *v95; // [rsp+390h] [rbp+290h]
  __int64 v96; // [rsp+398h] [rbp+298h]
  __int64 *v97; // [rsp+3A0h] [rbp+2A0h]
  __int64 v98; // [rsp+3A8h] [rbp+2A8h]

  v66[1] = (void *)-2LL;
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
    v39 = 0LL;
    v38 = 0LL;
    if ( (**(int (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))a2)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v39) >= 0 )
    {
      v22 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))v4)(
              v4,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v38);
      if ( v22 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v22 >= 0 && v39 == v38 )
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
      v23 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_94922da7bd9137d502a338501bb650ae_Traceguids, v23);
      v8 = (__int64 *)*((_QWORD *)this + 14);
    }
    v68[0] = 0LL;
    v68[1] = &v67;
    v68[2] = 0LL;
    v69 = 0;
    v70 = &v75;
    v71 = &v72;
    v72 = 0;
    v73 = 0;
    v78 = 0;
    v75 = 0;
    v76 = "PresentWindow";
    v77 = 0LL;
    v79 = 1LL;
    lpMem = 0LL;
    memset_0(v80, 0, sizeof(v80));
    v82 = 0LL;
    v83 = 0LL;
    v84 = 0LL;
    v67 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v10 = *v8;
    v35 = *((_DWORD *)this + 12);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v67,
      &v44);
    v11 = v71;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
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
    if ( v44 )
      ReleaseSRWLockExclusive(v44);
    v41 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v33, &v41) && v33 )
    {
      v41 = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    v12 = *((_QWORD *)v41 + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      v89 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v90 = 8LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v92 = 4LL;
      v93 = &v35;
      v94 = 4LL;
      v45 = v10;
      v95 = &v45;
      v96 = 8LL;
      v46 = v7;
      v97 = &v46;
      v98 = 8LL;
      v21 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v67);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v12 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v86 = &unk_1804DFF0F;
      v87 = 94;
      v88 = 1;
      v43 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v12 + 32), &EventDescriptor, (LPCGUID)(v71 + 2), v21, 7u, &UserData);
    }
    if ( !v69 )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v68);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 86) + 536LL))(*((_QWORD *)this + 86));
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 208LL))(
      a2,
      *((_QWORD *)this + 16),
      3LL);
    v13 = **((_QWORD **)this + 13);
    if ( v13 && !v5 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 208LL))(v13, *((_QWORD *)this + 16), 1LL);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v49[0] = a2;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v49[1] = this;
    v50 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v51[0] = 0LL;
    v51[1] = &v50;
    v52 = 0LL;
    v53 = 0;
    v54 = 0LL;
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (__int64 *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                           v14,
                           1);
    else
      Local = 0LL;
    v51[0] = Local;
    if ( Local )
    {
      v52 = *Local;
      *Local = (__int64)v51;
      v53 = GetCurrentThreadId();
    }
    v55 = &v56;
    v56 = 0;
    v57 = 0;
    v60 = 0;
    v58 = 0;
    v59 = 0LL;
    v61 = 1LL;
    v63 = 0LL;
    memset_0(v62, 0, sizeof(v62));
    v64 = 0LL;
    v65 = 0LL;
    v66[0] = 0LL;
    if ( v53 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v51);
    if ( v84 )
    {
      v55 = v71;
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        v66,
        &v84);
    }
    else
    {
      v16 = (int *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = v16;
      if ( v16 )
      {
        *v16 = 1;
        v18 = v16 + 2;
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)(v16 + 2),
          (__int64)&v72);
        if ( v66[0] )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v66[0], 0xFFFFFFFF) == 1 )
          {
            v24 = v66[0];
            if ( v66[0] )
            {
              wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v66[0] + 8);
              operator delete(v24, (const struct std::nothrow_t *)0x100);
            }
          }
        }
        v66[0] = v17;
        v55 = v18;
        if ( v84 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v84, 0xFFFFFFFF) == 1 )
          {
            v25 = v84;
            if ( v84 )
            {
              wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v84 + 8);
              operator delete(v25, (const struct std::nothrow_t *)0x100);
            }
          }
          v17 = (int *)v66[0];
        }
        v84 = v17;
        if ( v17 )
          _InterlockedIncrement(v17);
        v71 = v55;
        v70 = v55 + 10;
      }
    }
    v54 = v55 + 10;
    v50 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___(this, v49);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    v67 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v19 = 1;
    v20 = (volatile signed __int32 *)v84;
    if ( !v84 )
      goto LABEL_77;
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v67,
      &SRWLock);
    v20 = (volatile signed __int32 *)v84;
    if ( !v84 || *(_DWORD *)v84 != 1 )
    {
      v19 = 0;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v84, 0xFFFFFFFF) == 1 )
        {
          v26 = v84;
          if ( v84 )
          {
            wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v84 + 8);
            operator delete(v26, (const struct std::nothrow_t *)0x100);
          }
        }
        v20 = 0LL;
        v84 = 0LL;
      }
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v20 = (volatile signed __int32 *)v84;
    }
    if ( v19 )
    {
LABEL_77:
      if ( *v71 == 1 )
      {
        v27 = v71[21];
        v36 = v27;
        v28 = 2147942974LL;
        if ( v27 < 0 )
          v28 = (unsigned int)v27;
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
          v71,
          v28,
          &v36);
        ((void (__fastcall *)(void ***))v67[1])(&v67);
        v20 = (volatile signed __int32 *)v84;
      }
    }
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20, 0xFFFFFFFF) == 1 )
      {
        v29 = v84;
        if ( v84 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v84 + 8);
          operator delete(v29, (const struct std::nothrow_t *)0x100);
        }
      }
      v84 = 0LL;
    }
    if ( lpMem )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
      lpMem = 0LL;
      v82 = 0LL;
    }
    if ( v78 )
    {
      v31 = GetProcessHeap();
      HeapFree(v31, 0, v77);
      v78 = 0;
    }
    v77 = 0LL;
    if ( v72 == 1 )
    {
      v72 = 2;
      v42 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v37, &v42) && v37 )
      {
        v42 = &qword_1805C1F08;
        qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
        qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v42 + 1), v74);
    }
    v72 = 3;
    if ( v69 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v68);
  }
  return 0LL;
}
