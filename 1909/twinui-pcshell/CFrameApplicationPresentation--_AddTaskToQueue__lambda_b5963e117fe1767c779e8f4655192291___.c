/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_b5963e117fe1767c779e8f4655192291___ @ 0x180036B80
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800365C0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180036ED0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180037E40 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180037F84 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180071814 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_180071814.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BEB8 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18012D048 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18012D048.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x18016F7AC (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_b5963e117fe1767c779e8f4655192291___(
        _DWORD *a1,
        int *a2)
{
  unsigned int v4; // r12d
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rbx
  _DWORD *v9; // r15
  int v10; // r12d
  _DWORD *v11; // rcx
  volatile signed __int32 *v12; // rcx
  HANDLE ProcessHeap; // rax
  char *v15; // rbx
  HANDLE v16; // rax
  int v17; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v19; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v21; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-B8h]
  _DWORD *v23; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+60h] [rbp-A0h]
  char v26; // [rsp+64h] [rbp-9Ch]
  char v27; // [rsp+65h] [rbp-9Bh]
  __int64 v28; // [rsp+68h] [rbp-98h]
  void **v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[3]; // [rsp+78h] [rbp-88h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h] BYREF
  char v35; // [rsp+ACh] [rbp-54h]
  char v36[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  LPVOID lpMem; // [rsp+E0h] [rbp-20h]
  char v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  char v42[144]; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v43[3]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v17);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a2 + 4));
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v23 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v25 = *a2;
    v26 = *((_BYTE *)a2 + 4);
    v27 = *((_BYTE *)a2 + 5);
    v28 = *((_QWORD *)a2 + 1);
    v29 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v30[1] = &v29;
    v24 = a1;
    v30[0] = 0LL;
    v30[2] = 0LL;
    v31 = 0;
    v32 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v30);
    v34 = 0;
    v33 = &v34;
    v35 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0LL;
    lpMem = 0LL;
    v41 = 1LL;
    v43[0] = 0LL;
    memset_0(v42, 0, sizeof(v42));
    v44 = 0LL;
    v43[1] = 0LL;
    v43[2] = 0LL;
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
      &v29,
      a2 + 4);
    v4 = a1[12];
    v29 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    v22 = 0LL;
    v5 = 0LL;
    v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6;
    v9 = 0LL;
    if ( v6 )
    {
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v8 + 2) = 0LL;
      if ( v8 + 4 != (_DWORD *)&v23 )
      {
        *((_QWORD *)v8 + 2) = v23;
        v23 = 0LL;
      }
      *((_QWORD *)v8 + 3) = v24;
      v8[8] = v25;
      *((_BYTE *)v8 + 36) = v26;
      *((_BYTE *)v8 + 37) = v27;
      *((_QWORD *)v8 + 5) = v28;
      LOBYTE(v7) = v31 != 0;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        v8 + 12,
        &v29,
        v7);
      v22 = v8;
      *((_QWORD *)v8 + 6) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
      v9 = v8;
      v5 = v8;
      *(_QWORD *)v8 = off_180446D78;
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v4);
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    v29 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v29);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v44);
    wil::details::shared_buffer::reset(v43);
    if ( v40 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      v40 = 0;
    }
    lpMem = 0LL;
    if ( v34 == 1 )
    {
      v34 = 2;
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
      _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v36);
    }
    v34 = 3;
    if ( v31 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
    v11 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v10 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    *((_QWORD *)a2 + 2) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 4);
    v12 = (volatile signed __int32 *)*((_QWORD *)a2 + 40);
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      {
        v15 = (char *)*((_QWORD *)a2 + 40);
        if ( v15 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v15 + 8);
          operator delete(v15, (const struct std::nothrow_t *)0x100);
        }
      }
      *((_QWORD *)a2 + 40) = 0LL;
    }
    wil::details::shared_buffer::reset((LPVOID *)a2 + 37);
    if ( *((_BYTE *)a2 + 136) )
    {
      v16 = GetProcessHeap();
      HeapFree(v16, 0, *((LPVOID *)a2 + 16));
      *((_BYTE *)a2 + 136) = 0;
    }
    *((_QWORD *)a2 + 16) = 0LL;
    if ( a2[18] == 1 )
    {
      a2[18] = 2;
      v21 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v19, &v21) && v19 )
      {
        v21 = &qword_1805C1F08;
        qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
        qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
      }
      _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)v21 + 1), a2 + 20);
    }
    a2[18] = 3;
    if ( a2[12] )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 6));
    return (unsigned int)v10;
  }
}
