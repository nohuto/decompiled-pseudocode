/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x18003BDE0
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18003C7D0 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18003C9B0 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18005EC94 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

__int64 __fastcall NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
        NotificationDispatcher *this,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // rcx
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  struct IAsyncCallback *v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // di
  RTL_SRWLOCK *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  int v19; // eax
  __int64 v20; // rdx
  HANDLE ProcessHeap; // rax
  LPUNKNOWN ppunkMarshal; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+2Ch] [rbp-D4h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  void **v31; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[24]; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+90h] [rbp-70h]
  _DWORD *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  _BYTE v36[48]; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID lpMem; // [rsp+E0h] [rbp-20h]
  char v38; // [rsp+E8h] [rbp-18h]
  LPVOID v39; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v40[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v26[1] = -2LL;
  v27 = 0LL;
  if ( &v27 != a2 )
  {
    v27 = *a2;
    *a2 = 0LL;
  }
  v28 = *((_DWORD *)a2 + 2);
  v4 = a2 + 2;
  v29 = 0LL;
  if ( &v29 != a2 + 2 )
  {
    v29 = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 3;
  v30 = 0LL;
  if ( &v30 != a2 + 3 )
  {
    v30 = *v5;
    *v5 = 0LL;
  }
  v6 = a2 + 4;
  LOBYTE(a3) = *((_DWORD *)v6 + 8) != 0;
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    &v31,
    v6,
    a3);
  v31 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v7 = 0LL;
  v26[2] = 0LL;
  v8 = operator new(0x188uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v8[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8[4] = 0LL;
    ppunkMarshal = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v9 = v8[4];
      if ( v9 )
      {
        v8[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v8 + 4);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    *((_DWORD *)v8 + 11) = 1;
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    v8[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8[6] = 0LL;
    if ( v8 + 6 != &v27 )
    {
      v8[6] = v27;
      v27 = 0LL;
    }
    *((_DWORD *)v8 + 14) = v28;
    v8[8] = 0LL;
    if ( v8 + 8 != &v29 )
    {
      v8[8] = v29;
      v29 = 0LL;
    }
    v8[9] = 0LL;
    if ( v8 + 9 != &v30 )
    {
      v8[9] = v30;
      v30 = 0LL;
    }
    LOBYTE(v10) = v33 != 0;
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      v8 + 10,
      &v31,
      v10);
    v8[10] = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    *v8 = off_1803C3C68;
    v8[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7 = (struct IAsyncCallback *)v8;
  }
  v26[0] = v7;
  v31 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v11 = 1;
  if ( !v40[0] )
    goto LABEL_27;
  v12 = (RTL_SRWLOCK *)(v40[0] + 248LL);
  AcquireSRWLockExclusive((PSRWLOCK)(v40[0] + 248LL));
  if ( !v40[0] || *(_DWORD *)v40[0] != 1 )
  {
    v11 = 0;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v40);
  }
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  if ( v11 )
  {
LABEL_27:
    if ( *v34 == 1 )
    {
      v19 = v34[21];
      v23 = v19;
      v20 = 2147942974LL;
      if ( v19 < 0 )
        v20 = (unsigned int)v19;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v34,
        v20,
        &v23);
      ((void (__fastcall *)(void ***))v31[1])(&v31);
    }
  }
  wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v40);
  wil::details::shared_buffer::reset(&v39);
  if ( v38 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v38 = 0;
  }
  lpMem = 0LL;
  if ( v35 == 1 )
  {
    v35 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18050F870;
      qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v36);
  }
  v35 = 3;
  if ( v33 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v32);
  v13 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v7 )
  {
    v16 = NotificationDispatcher::AddTask(this, v7);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v16,
        (int)ppunkMarshal);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
      return v17;
    }
    else
    {
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v7 + 16LL))(v7);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL,
      (int)ppunkMarshal);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
    return 2147942414LL;
  }
}
