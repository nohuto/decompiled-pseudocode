/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18002F940
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800303B0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002B12C (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A64 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_180049A64.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060C18 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800723E8 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_1800723E8.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnEventQueued(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const WCHAR *StringRawBuffer; // r14
  const WCHAR *v5; // r15
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  const WCHAR *v10; // rbx
  const WCHAR *v11; // r14
  const WCHAR *v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rdx
  const GUID *v17; // rax
  TraceLoggingHProvider v18; // r10
  __int64 v19; // rdx
  char v20; // di
  int v21; // eax
  __int64 v22; // rdx
  void *v23; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v25; // rax
  int cData; // [rsp+28h] [rbp-E0h]
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v30; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL v32; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v35; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v36; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v37; // [rsp+78h] [rbp-90h] BYREF
  RTL_SRWLOCK *v38; // [rsp+80h] [rbp-88h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+88h] [rbp-80h] BYREF
  void **v40; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v41[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+B8h] [rbp-50h]
  int *v43; // [rsp+C0h] [rbp-48h]
  int *v44; // [rsp+C8h] [rbp-40h]
  int v45; // [rsp+D0h] [rbp-38h] BYREF
  char v46; // [rsp+D4h] [rbp-34h]
  _BYTE v47[32]; // [rsp+D8h] [rbp-30h] BYREF
  int v48; // [rsp+F8h] [rbp-10h] BYREF
  const char *v49; // [rsp+100h] [rbp-8h]
  LPVOID v50; // [rsp+108h] [rbp+0h]
  char v51; // [rsp+110h] [rbp+8h]
  __int64 v52; // [rsp+118h] [rbp+10h]
  _BYTE v53[144]; // [rsp+120h] [rbp+18h] BYREF
  LPVOID lpMem; // [rsp+1B0h] [rbp+A8h]
  __int64 v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]
  void *v57; // [rsp+1C8h] [rbp+C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D8h] [rbp+D0h] BYREF
  void *v59; // [rsp+1F8h] [rbp+F0h]
  __int64 v60; // [rsp+200h] [rbp+F8h]
  DWORD *p_CurrentThreadId; // [rsp+208h] [rbp+100h]
  __int64 v62; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+228h] [rbp+120h] BYREF
  EVENT_DATA_DESCRIPTOR v65; // [rsp+238h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+258h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+268h] [rbp+160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  v41[0] = 0LL;
  v41[1] = &v40;
  v41[2] = 0LL;
  v42 = 0;
  v43 = &v48;
  v44 = &v45;
  v45 = 0;
  v46 = 0;
  v51 = 0;
  v48 = 0;
  v49 = "OnEventQueued";
  v50 = 0LL;
  v52 = 1LL;
  lpMem = 0LL;
  memset_0(v53, 0, sizeof(v53));
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v40 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v40,
    &v38);
  v6 = v44;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  }
  else
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
  }
  *v6 = 1;
  if ( v38 )
    ReleaseSRWLockExclusive(v38);
  v35 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v30, &v35) && v30 )
  {
    v35 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v35 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v59 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v60 = 8LL;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v62 = 4LL;
    TlgCreateWsz(&pDesc, v5);
    TlgCreateWsz(&v64, StringRawBuffer);
    v17 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v40);
    TlgWrite(v7, &unk_1804E44A3, (LPCGUID)(v44 + 2), v17, 6u, &pData);
  }
  if ( !v42 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v41);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &string);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x276,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8,
      cData);
    goto LABEL_26;
  }
  v10 = WindowsGetStringRawBuffer(string, 0LL);
  v11 = WindowsGetStringRawBuffer(this[2], 0LL);
  v12 = WindowsGetStringRawBuffer(this[1], 0LL);
  v36 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v32, &v36) && v32 )
  {
    v36 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  if ( **((_DWORD **)v36 + 1) > 5u )
  {
    TlgCreateWsz(&v66, v12);
    TlgCreateWsz(&v67, v11);
    TlgCreateWsz(&v68, v10);
    TlgWrite(v18, &unk_1804E3E8B, 0LL, 0LL, 5u, &v65);
  }
  v28 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v28);
  v9 = v13;
  if ( v13 < 0 )
  {
    v19 = 635LL;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING, __int64))(*(_QWORD *)this[11] + 88LL))(
            this[11],
            this,
            string,
            v28);
    v9 = v13;
    if ( v13 >= 0 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v40);
      v9 = 0;
      goto LABEL_24;
    }
    v19 = 636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v13,
    cData);
LABEL_24:
  v14 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_26:
  WindowsDeleteString(string);
  string = 0LL;
  v40 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  v15 = (volatile signed __int32 *)v57;
  if ( !v57 )
    goto LABEL_27;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v40,
    SRWLock);
  v15 = (volatile signed __int32 *)v57;
  if ( v57 && *(_DWORD *)v57 == 1 )
  {
    v20 = 1;
  }
  else
  {
    v20 = 0;
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v57);
    v15 = (volatile signed __int32 *)v57;
  }
  if ( SRWLock[0] )
  {
    ReleaseSRWLockExclusive(SRWLock[0]);
    v15 = (volatile signed __int32 *)v57;
  }
  if ( v20 )
  {
LABEL_27:
    if ( *v44 == 1 )
    {
      v21 = v44[21];
      v33[0] = v21;
      v22 = 2147942974LL;
      if ( v21 < 0 )
        v22 = (unsigned int)v21;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v44,
        v22,
        v33);
      ((void (__fastcall *)(void ***))v40[1])(&v40);
      v15 = (volatile signed __int32 *)v57;
    }
  }
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
    {
      v23 = v57;
      if ( v57 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v57 + 8);
        operator delete(v23, (const struct std::nothrow_t *)0x100);
      }
    }
    v57 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v55 = 0LL;
  }
  if ( v51 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v50);
    v51 = 0;
  }
  v50 = 0LL;
  if ( v45 == 1 )
  {
    v45 = 2;
    v37 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v33[1], &v37) && v33[1] )
    {
      v37 = qword_180599CD0;
      qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v37 + 1), v47);
  }
  v45 = 3;
  if ( v42 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v41);
  return v9;
}
