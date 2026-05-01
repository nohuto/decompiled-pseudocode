/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_b5963e117fe1767c779e8f4655192291___ @ 0x18002DE30
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18002D870 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18002C9B8 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002E180 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18002F0F0 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004A8EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006F304 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18006F304.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC7C (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18010DDFC (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18010DDFC.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x18015058C (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_b5963e117fe1767c779e8f4655192291___(
        _DWORD *a1,
        int *a2)
{
  unsigned int v4; // r12d
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // r15
  int v9; // r12d
  _DWORD *v10; // rcx
  volatile signed __int32 *v11; // rcx
  HANDLE ProcessHeap; // rax
  char *v14; // rbx
  HANDLE v15; // rax
  int v16; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v18; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-B8h]
  _DWORD *v22; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h]
  char v25; // [rsp+64h] [rbp-9Ch]
  char v26; // [rsp+65h] [rbp-9Bh]
  __int64 v27; // [rsp+68h] [rbp-98h]
  void **v28; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[3]; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h] BYREF
  char v34; // [rsp+ACh] [rbp-54h]
  char v35[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  LPVOID lpMem; // [rsp+E0h] [rbp-20h]
  char v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  char v41[144]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v42[3]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v16);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a2 + 4));
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v22 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v24 = *a2;
    v25 = *((_BYTE *)a2 + 4);
    v26 = *((_BYTE *)a2 + 5);
    v27 = *((_QWORD *)a2 + 1);
    v28 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v29[1] = &v28;
    v23 = a1;
    v29[0] = 0LL;
    v29[2] = 0LL;
    v30 = 0;
    v31 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v29);
    v33 = 0;
    v32 = &v33;
    v34 = 0;
    v39 = 0;
    v36 = 0;
    v37 = 0LL;
    lpMem = 0LL;
    v40 = 1LL;
    v42[0] = 0LL;
    memset_0(v41, 0, sizeof(v41));
    v43 = 0LL;
    v42[1] = 0LL;
    v42[2] = 0LL;
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
      &v28,
      a2 + 4);
    v4 = a1[12];
    v28 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    v21 = 0LL;
    v5 = 0LL;
    v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    v8 = 0LL;
    if ( v6 )
    {
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v7 + 2) = 0LL;
      if ( v7 + 4 != (_DWORD *)&v22 )
      {
        *((_QWORD *)v7 + 2) = v22;
        v22 = 0LL;
      }
      *((_QWORD *)v7 + 3) = v23;
      v7[8] = v24;
      *((_BYTE *)v7 + 36) = v25;
      *((_BYTE *)v7 + 37) = v26;
      *((_QWORD *)v7 + 5) = v27;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v7 + 12),
        (__int64)&v28,
        v30 != 0);
      v21 = v7;
      *((_QWORD *)v7 + 6) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
      v8 = v7;
      v5 = v7;
      *(_QWORD *)v7 = off_180426C78;
    }
    v9 = SHTaskPoolQueueTask(3LL, 2LL, v4, 0LL, v5, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    v28 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v28);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v43);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)v42);
    if ( v39 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      v39 = 0;
    }
    lpMem = 0LL;
    if ( v33 == 1 )
    {
      v33 = 2;
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
      _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v35);
    }
    v33 = 3;
    if ( v30 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v29);
    v10 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    *((_QWORD *)a2 + 2) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 4);
    v11 = (volatile signed __int32 *)*((_QWORD *)a2 + 40);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
      {
        v14 = (char *)*((_QWORD *)a2 + 40);
        if ( v14 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v14 + 8);
          operator delete(v14, (const struct std::nothrow_t *)0x100);
        }
      }
      *((_QWORD *)a2 + 40) = 0LL;
    }
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a2 + 74));
    if ( *((_BYTE *)a2 + 136) )
    {
      v15 = GetProcessHeap();
      HeapFree(v15, 0, *((LPVOID *)a2 + 16));
      *((_BYTE *)a2 + 136) = 0;
    }
    *((_QWORD *)a2 + 16) = 0LL;
    if ( a2[18] == 1 )
    {
      a2[18] = 2;
      v20 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v18, &v20) && v18 )
      {
        v20 = &qword_180599AE8;
        qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
        qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
      }
      _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)v20 + 1), a2 + 20);
    }
    a2[18] = 3;
    if ( a2[12] )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 6));
    return (unsigned int)v9;
  }
}
