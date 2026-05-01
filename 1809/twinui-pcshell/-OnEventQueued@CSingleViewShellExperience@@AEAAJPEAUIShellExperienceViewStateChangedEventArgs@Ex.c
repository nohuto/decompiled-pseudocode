/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180041FF0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800423F0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003EAE4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800411FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F0EC (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_18006F0EC.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
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
  const GUID *v16; // rax
  TraceLoggingHProvider v17; // r10
  __int64 v18; // rdx
  void *v19; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v21; // rax
  int cData; // [rsp+28h] [rbp-E0h]
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v26; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL v28; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v31; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v32; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v33; // [rsp+78h] [rbp-90h] BYREF
  RTL_SRWLOCK *v34[3]; // [rsp+80h] [rbp-88h] BYREF
  void **v35; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v36[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v37; // [rsp+B8h] [rbp-50h]
  int *v38; // [rsp+C0h] [rbp-48h]
  int *v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+D0h] [rbp-38h] BYREF
  char v41; // [rsp+D4h] [rbp-34h]
  _BYTE v42[32]; // [rsp+D8h] [rbp-30h] BYREF
  int v43; // [rsp+F8h] [rbp-10h] BYREF
  const char *v44; // [rsp+100h] [rbp-8h]
  LPVOID v45; // [rsp+108h] [rbp+0h]
  char v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+118h] [rbp+10h]
  _BYTE v48[144]; // [rsp+120h] [rbp+18h] BYREF
  LPVOID lpMem; // [rsp+1B0h] [rbp+A8h]
  __int64 v50; // [rsp+1B8h] [rbp+B0h]
  __int64 v51; // [rsp+1C0h] [rbp+B8h]
  void *v52; // [rsp+1C8h] [rbp+C0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D8h] [rbp+D0h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+1F8h] [rbp+F0h]
  __int64 v55; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+208h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+218h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR v58; // [rsp+228h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+248h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+258h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+268h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  v34[1] = (RTL_SRWLOCK *)-2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  v36[0] = 0LL;
  v36[1] = &v35;
  v36[2] = 0LL;
  v37 = 0;
  v38 = &v43;
  v39 = &v40;
  v40 = 0;
  v41 = 0;
  v46 = 0;
  v43 = 0;
  v44 = "OnEventQueued";
  v45 = 0LL;
  v47 = 1LL;
  lpMem = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v35 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v35,
    v34);
  v6 = v39;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  else
    *((_QWORD *)v6 + 1) = 0LL;
  *v6 = 1;
  if ( v34[0] )
    ReleaseSRWLockExclusive(v34[0]);
  v31 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v26, &v31) && v26 )
  {
    v31 = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v31 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v55 = 4LL;
    TlgCreateWsz(&pDesc, v5);
    TlgCreateWsz(&v57, StringRawBuffer);
    v16 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v35);
    TlgWrite(v7, &unk_18046A65F, (LPCGUID)(v39 + 2), v16, 5u, &pData);
  }
  if ( !v37 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v36);
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
      (void *)0x269,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8,
      cData);
    goto LABEL_26;
  }
  v10 = WindowsGetStringRawBuffer(string, 0LL);
  v11 = WindowsGetStringRawBuffer(this[2], 0LL);
  v12 = WindowsGetStringRawBuffer(this[1], 0LL);
  v32 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v28, &v32) && v28 )
  {
    v32 = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  if ( **((_DWORD **)v32 + 1) > 5u )
  {
    TlgCreateWsz(&v59, v12);
    TlgCreateWsz(&v60, v11);
    TlgCreateWsz(&v61, v10);
    TlgWrite(v17, &unk_18046AAB7, 0LL, 0LL, 5u, &v58);
  }
  v24 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v24);
  v9 = v13;
  if ( v13 < 0 )
  {
    v18 = 622LL;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING, __int64))(*(_QWORD *)this[11] + 88LL))(
            this[11],
            this,
            string,
            v24);
    v9 = v13;
    if ( v13 >= 0 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v35);
      v9 = 0;
      goto LABEL_24;
    }
    v18 = 623LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v13,
    cData);
LABEL_24:
  v14 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_26:
  WindowsDeleteString(string);
  string = 0LL;
  v35 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v35);
  if ( v52 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v52, 0xFFFFFFFF) == 1 )
    {
      v19 = v52;
      if ( v52 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v52 + 8);
        operator delete(v19, (const struct std::nothrow_t *)0x100);
      }
    }
    v52 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v50 = 0LL;
  }
  if ( v46 )
  {
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v45);
    v46 = 0;
  }
  v45 = 0LL;
  if ( v40 == 1 )
  {
    v40 = 2;
    v33 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, v29, &v33) && v29[0] )
    {
      v33 = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v33 + 1), v42);
  }
  v40 = 3;
  if ( v37 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v36);
  return v9;
}
