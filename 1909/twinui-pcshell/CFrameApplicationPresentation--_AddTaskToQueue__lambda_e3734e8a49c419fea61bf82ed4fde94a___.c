/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___ @ 0x1800342D4
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180033C20 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180035704 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006E8A0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18007137C (--4-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18016F6DC (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_e3734e8a49c419fea61bf82ed4fde94a___(
        _DWORD *a1,
        LPVOID *a2)
{
  LPVOID v4; // rcx
  _QWORD *v5; // r12
  unsigned int v6; // r13d
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r8
  int v11; // ebx
  LPVOID v12; // rcx
  _DWORD *v13; // rcx
  LPVOID v14; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v17; // rax
  int v18; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v21; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-B8h]
  LPVOID v23; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v24; // [rsp+58h] [rbp-A8h]
  void **v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-98h] BYREF
  int v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h] BYREF
  char v31; // [rsp+9Ch] [rbp-64h]
  char v32[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  LPVOID lpMem; // [rsp+D0h] [rbp-30h]
  char v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  char v38[144]; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID v39[3]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v40; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  if ( a1[14] == 2 )
  {
    v11 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v18);
    CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a2 + 2));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v21 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *a2;
    v5 = 0LL;
    v22 = a1;
    v23 = v4;
    if ( v4 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 8LL))(v4);
    v24 = a2[1];
    v25 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v26[1] = &v25;
    v26[0] = 0LL;
    v26[2] = 0LL;
    v27 = 0;
    v28 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v26);
    v30 = 0;
    v29 = &v30;
    v31 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0LL;
    lpMem = 0LL;
    v37 = 1LL;
    v39[0] = 0LL;
    memset_0(v38, 0, sizeof(v38));
    v40 = 0LL;
    v39[1] = 0LL;
    v39[2] = 0LL;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(&v25, a2 + 2);
    v6 = a1[12];
    v25 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v7 = 0LL;
    v8 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v8);
      v9[2] = 0LL;
      if ( v9 + 2 != &v21 )
      {
        v9[2] = v21;
        v21 = 0LL;
      }
      v9[3] = v22;
      v9[4] = 0LL;
      if ( v9 + 4 != &v23 )
      {
        v9[4] = v23;
        v23 = 0LL;
      }
      v9[5] = v24;
      LOBYTE(v10) = v27 != 0;
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        v9 + 6,
        &v25,
        v10);
      v5 = v9;
      v9[6] = &CFramePresentationTelemetry::PresentWindow::`vftable';
      *v9 = off_180446CC0;
      v7 = v9;
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    v25 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v25);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v40);
    wil::details::shared_buffer::reset(v39);
    if ( v36 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      v36 = 0;
    }
    lpMem = 0LL;
    if ( v30 == 1 )
    {
      v30 = 2;
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
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v32);
    }
    v30 = 3;
    if ( v27 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v11 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    a2[2] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 2);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 40);
    wil::details::shared_buffer::reset(a2 + 37);
    if ( *((_BYTE *)a2 + 136) )
    {
      v17 = GetProcessHeap();
      HeapFree(v17, 0, a2[16]);
      *((_BYTE *)a2 + 136) = 0;
    }
    a2[16] = 0LL;
    if ( *((_DWORD *)a2 + 18) == 1 )
    {
      *((_DWORD *)a2 + 18) = 2;
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
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), a2 + 10);
    }
    *((_DWORD *)a2 + 18) = 3;
    if ( *((_DWORD *)a2 + 12) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 3));
    v14 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return (unsigned int)v11;
}
