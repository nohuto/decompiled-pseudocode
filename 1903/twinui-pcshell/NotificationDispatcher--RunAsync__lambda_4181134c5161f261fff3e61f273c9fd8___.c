/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180027F40
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180028900 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180028B20 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004A8EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006250C (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
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
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  LPUNKNOWN v10; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v12; // r8
  char v13; // di
  RTL_SRWLOCK *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  int v21; // eax
  __int64 v22; // rdx
  HANDLE ProcessHeap; // rax
  LPUNKNOWN ppunkMarshal; // [rsp+20h] [rbp-E0h] BYREF
  int v25; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+2Ch] [rbp-D4h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v28[5]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  void **v33; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[24]; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+A0h] [rbp-60h]
  _DWORD *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  _BYTE v38[48]; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID lpMem; // [rsp+F0h] [rbp-10h]
  char v40; // [rsp+F8h] [rbp-8h]
  _BYTE v41[24]; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v42[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v28[1] = -2LL;
  v29 = 0LL;
  if ( &v29 != a2 )
  {
    v29 = *a2;
    *a2 = 0LL;
  }
  v30 = *((_DWORD *)a2 + 2);
  v4 = a2 + 2;
  v31 = 0LL;
  if ( &v31 != a2 + 2 )
  {
    v31 = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 3;
  v32 = 0LL;
  if ( &v32 != a2 + 3 )
  {
    v32 = *v5;
    *v5 = 0LL;
  }
  v6 = a2 + 4;
  LOBYTE(a3) = *((_DWORD *)v6 + 8) != 0;
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v33,
    v6,
    a3);
  v33 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v7 = 0LL;
  v28[2] = 0LL;
  v8 = operator new(0x188uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8[4] = 0LL;
    ppunkMarshal = 0LL;
    v28[3] = &ppunkMarshal;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v10 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9 + 4);
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v10,
        &GUID_00000003_0000_0000_c000_000000000046,
        v9 + 4);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    *((_DWORD *)v9 + 11) = 1;
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9[6] = 0LL;
    if ( v9 + 6 != &v29 )
    {
      v9[6] = v29;
      v29 = 0LL;
    }
    *((_DWORD *)v9 + 14) = v30;
    v9[8] = 0LL;
    if ( v9 + 8 != &v31 )
    {
      v9[8] = v31;
      v31 = 0LL;
    }
    v9[9] = 0LL;
    if ( v9 + 9 != &v32 )
    {
      v9[9] = v32;
      v32 = 0LL;
    }
    LOBYTE(v12) = v35 != 0;
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      v9 + 10,
      &v33,
      v12);
    v9[10] = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    *v9 = off_180426A10;
    v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7 = (struct IAsyncCallback *)v9;
  }
  v28[0] = v7;
  v33 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v13 = 1;
  if ( !v42[0] )
    goto LABEL_25;
  v14 = (RTL_SRWLOCK *)(v42[0] + 248LL);
  AcquireSRWLockExclusive((PSRWLOCK)(v42[0] + 248LL));
  if ( !v42[0] || *(_DWORD *)v42[0] != 1 )
  {
    v13 = 0;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v42);
  }
  if ( v14 )
    ReleaseSRWLockExclusive(v14);
  if ( v13 )
  {
LABEL_25:
    if ( *v36 == 1 )
    {
      v21 = v36[21];
      v25 = v21;
      v22 = 2147942974LL;
      if ( v21 < 0 )
        v22 = (unsigned int)v21;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v36,
        v22,
        &v25);
      ((void (__fastcall *)(void ***))v33[1])(&v33);
    }
  }
  wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v42);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v41);
  if ( v40 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v40 = 0;
  }
  lpMem = 0LL;
  if ( v37 == 1 )
  {
    v37 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180599BF8;
      qword_180599BF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599C10 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599BF8, qword_180599C10);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180599BF8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v38);
  }
  v37 = 3;
  if ( v35 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v34);
  v15 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v7 )
  {
    v18 = NotificationDispatcher::AddTask(this, v7);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v18,
        (int)ppunkMarshal);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
      return v19;
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
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
    return 2147942414LL;
  }
}
