/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_8bf19a67da9349d708dd7efffc5e2d17___ @ 0x18003FDCC
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18003F7C0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180012800 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040170 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180041438 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800414F4 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180069D20 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_180069D20.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA424 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126FA0 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_8bf19a67da9349d708dd7efffc5e2d17___(
        _DWORD *a1,
        int *a2)
{
  int *v2; // rsi
  unsigned int v5; // r12d
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  _DWORD *v11; // rcx
  int v12; // ebx
  _DWORD *v13; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  int v17; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v19; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v21[2]; // [rsp+40h] [rbp-C0h] BYREF
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
  LPVOID v42[3]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v2 = a2 + 4;
  if ( a1[14] == 2 )
  {
    v12 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v17);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)v2);
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
    v28 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
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
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::operator=(&v28, v2);
    v5 = a1[12];
    v28 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    v21[1] = 0LL;
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
      v9 = v30 == 0;
      *((_QWORD *)v7 + 6) = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)(v7 + 14),
        (struct wil::details::IFailureCallback *)(v7 + 12),
        0LL,
        !v9);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v7 + 26),
        (__int64)&v33);
      *((_QWORD *)v7 + 44) = v43;
      v43 = 0LL;
      v10 = *((_QWORD *)v7 + 44);
      v11 = (_DWORD *)(v10 + 8);
      if ( !v10 )
        v11 = v7 + 26;
      *((_QWORD *)v7 + 12) = v11;
      *((_QWORD *)v7 + 11) = v11 + 10;
      v32 = &v33;
      if ( v30 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v29);
      v8 = v7;
      *((_QWORD *)v7 + 6) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
      *(_QWORD *)v7 = off_1803C3D60;
    }
    v12 = SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    v28 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v28);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v43);
    wil::details::shared_buffer::reset(v42);
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
        Context = qword_18050F7D0;
        qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
      }
      _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v35);
    }
    v33 = 3;
    if ( v30 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v29);
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v12 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    *(_QWORD *)v2 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v2);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v2 + 76);
    wil::details::shared_buffer::reset((LPVOID *)v2 + 35);
    if ( *((_BYTE *)v2 + 120) )
    {
      v16 = GetProcessHeap();
      HeapFree(v16, 0, *((LPVOID *)v2 + 14));
      *((_BYTE *)v2 + 120) = 0;
    }
    *((_QWORD *)v2 + 14) = 0LL;
    if ( v2[14] == 1 )
    {
      v2[14] = 2;
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
      _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)v21[0] + 1), v2 + 16);
    }
    v2[14] = 3;
    if ( v2[8] )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(v2 + 2));
  }
  return (unsigned int)v12;
}
