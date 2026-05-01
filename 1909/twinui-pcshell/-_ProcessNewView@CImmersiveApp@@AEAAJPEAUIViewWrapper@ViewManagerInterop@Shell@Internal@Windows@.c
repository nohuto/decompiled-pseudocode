/*
 * XREFs of ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18000CDBC
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18000CD50 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180164D50 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18000EE50 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18000FAA8 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x18003319C (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18003C938 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006E8A0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180161558 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18016A59C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::_ProcessNewView(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        char a3,
        unsigned int a4,
        struct ITaskWindow *a5,
        bool *a6)
{
  void (__fastcall *v10)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rcx
  CImmersiveApp::CImmersiveWindowCollection *v12; // rcx
  int View; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  struct IApplicationPresentationLayer *v17; // rdx
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  WINBOOL fPending[2]; // [rsp+30h] [rbp-D8h] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-D0h] BYREF
  void **v21; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  int *v24; // [rsp+70h] [rbp-98h]
  int *v25; // [rsp+78h] [rbp-90h]
  int v26; // [rsp+80h] [rbp-88h] BYREF
  char v27; // [rsp+84h] [rbp-84h]
  _BYTE v28[32]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+A8h] [rbp-60h] BYREF
  const char *v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  char v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  _BYTE v34[144]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v35[3]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v36; // [rsp+178h] [rbp+70h] BYREF

  Context[1] = (LPVOID)-2LL;
  *a6 = *(_QWORD *)(a1 + 472) == 0LL;
  v22[0] = 0LL;
  v22[1] = &v21;
  v22[2] = 0LL;
  LODWORD(v23) = 0;
  v24 = &v29;
  v25 = &v26;
  v26 = 0;
  v27 = 0;
  v32 = 0;
  v29 = 0;
  v30 = "ProcessNewWindow";
  v31 = 0LL;
  v33 = 1LL;
  v35[0] = 0LL;
  memset_0(v34, 0, sizeof(v34));
  v35[1] = 0LL;
  v35[2] = 0LL;
  v36 = 0LL;
  v21 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
    (CImmersiveAppTelemetry::ProcessNewWindow *)&v21,
    *(const unsigned __int16 **)(a1 + 592));
  v18 = 0LL;
  if ( a2 )
  {
    v10 = **(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    v11 = a2;
  }
  else
  {
    v10 = *(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))(*(_QWORD *)a5 + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    v11 = a5;
  }
  v10(v11, &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f, &v18);
  (*(void (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v18 + 88LL))(
    v18,
    L"LastSetGlomIdForReconstitution",
    *(unsigned int *)(a1 + 600));
  v12 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296);
  if ( a3 )
    View = CImmersiveApp::CImmersiveWindowCollection::AddFirstView(v12, a2, a5);
  else
    View = CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(v12, a2, a4, a5);
  v14 = View;
  if ( View < 0 )
  {
    if ( *a6 )
      *a6 = 0;
  }
  else if ( a3 )
  {
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 676));
    v15 = *(_QWORD *)(a1 + 676);
    *(_QWORD *)(a1 + 700) = v15;
    if ( *(_BYTE *)(a1 + 496) && !*(_BYTE *)(a1 + 497) )
    {
      *(_QWORD *)(a1 + 708) = v15;
      v17 = *(struct IApplicationPresentationLayer **)(a1 + 448);
      *(_DWORD *)(a1 + 632) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 632), v17);
    }
    CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)a1);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v21, v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v21 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v21);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v36);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v35);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v29);
  if ( v26 == 1 )
  {
    v26 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, Context) && fPending[0] )
    {
      Context[0] = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v28);
  }
  v26 = 3;
  if ( (_DWORD)v23 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
  return v14;
}
