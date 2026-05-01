/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___ @ 0x18003E6CC
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18003DFB0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18004152C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180041670 (--4-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126ED0 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___(
        _DWORD *a1,
        LPVOID *a2)
{
  LPVOID v4; // rcx
  unsigned int v5; // r12d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  int v10; // ebx
  LPVOID v11; // rcx
  _DWORD *v12; // rcx
  LPVOID v13; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  int v17; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v19; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v22; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-A8h]
  LPVOID v24; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v25; // [rsp+68h] [rbp-98h]
  void **v26; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[3]; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h] BYREF
  char v32; // [rsp+ACh] [rbp-54h]
  char v33[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  LPVOID lpMem; // [rsp+E0h] [rbp-20h]
  char v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  char v39[144]; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v40[3]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v41; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  if ( a1[14] == 2 )
  {
    v10 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v17);
    CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a2 + 2));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v22 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *a2;
    v23 = a1;
    v24 = v4;
    if ( v4 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 8LL))(v4);
    v25 = a2[1];
    v26 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v27[1] = &v26;
    v27[0] = 0LL;
    v27[2] = 0LL;
    v28 = 0;
    v29 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v27);
    v31 = 0;
    v30 = &v31;
    v32 = 0;
    v37 = 0;
    v34 = 0;
    v35 = 0LL;
    lpMem = 0LL;
    v38 = 1LL;
    v40[0] = 0LL;
    memset_0(v39, 0, sizeof(v39));
    v41 = 0LL;
    v40[1] = 0LL;
    v40[2] = 0LL;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(&v26, a2 + 2);
    v5 = a1[12];
    v26 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v21[1] = 0LL;
    v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6;
    v9 = 0LL;
    if ( v6 )
    {
      *((_DWORD *)v6 + 3) = 1;
      *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v8[2] = 0LL;
      if ( v8 + 2 != &v22 )
      {
        v8[2] = v22;
        v22 = 0LL;
      }
      v8[3] = v23;
      v8[4] = 0LL;
      if ( v8 + 4 != &v24 )
      {
        v8[4] = v24;
        v24 = 0LL;
      }
      v8[5] = v25;
      LOBYTE(v7) = v28 != 0;
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        v8 + 6,
        &v26,
        v7);
      v8[6] = &CFramePresentationTelemetry::PresentWindow::`vftable';
      *v8 = off_1803C3D88;
      v9 = v8;
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v26 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v41);
    wil::details::shared_buffer::reset(v40);
    if ( v37 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      v37 = 0;
    }
    lpMem = 0LL;
    if ( v31 == 1 )
    {
      v31 = 2;
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
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v33);
    }
    v31 = 3;
    if ( v28 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v27);
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v10 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    a2[2] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 2);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 40);
    wil::details::shared_buffer::reset(a2 + 37);
    if ( *((_BYTE *)a2 + 136) )
    {
      v16 = GetProcessHeap();
      HeapFree(v16, 0, a2[16]);
      *((_BYTE *)a2 + 136) = 0;
    }
    a2[16] = 0LL;
    if ( *((_DWORD *)a2 + 18) == 1 )
    {
      *((_DWORD *)a2 + 18) = 2;
      v21[0] = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v19, v21) && v19 )
      {
        v21[0] = qword_18050F7D0;
        qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v21[0] + 1), a2 + 10);
    }
    *((_DWORD *)a2 + 18) = 3;
    if ( *((_DWORD *)a2 + 12) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 3));
    v13 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return (unsigned int)v10;
}
