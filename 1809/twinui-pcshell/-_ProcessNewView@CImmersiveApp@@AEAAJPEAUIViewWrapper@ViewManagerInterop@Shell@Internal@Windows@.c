/*
 * XREFs of ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18004ADFC
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18004AD90 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18011D010 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002B1F4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180045878 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180045DB8 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x18004B044 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18011A1F8 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180121C2C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
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
  CImmersiveApp::CImmersiveWindowCollection *v10; // rcx
  int View; // eax
  unsigned int v12; // esi
  __int64 v13; // rax
  struct IApplicationPresentationLayer *v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  WINBOOL fPending[2]; // [rsp+30h] [rbp-D8h] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-D0h] BYREF
  void **v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h]
  LPVOID *v22; // [rsp+70h] [rbp-98h]
  int *v23; // [rsp+78h] [rbp-90h]
  int v24; // [rsp+80h] [rbp-88h] BYREF
  char v25; // [rsp+84h] [rbp-84h]
  _BYTE v26[32]; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v27[3]; // [rsp+A8h] [rbp-60h] BYREF
  char v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[144]; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v31[3]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v32; // [rsp+178h] [rbp+70h] BYREF

  Context[1] = (LPVOID)-2LL;
  *a6 = *(_QWORD *)(a1 + 440) == 0LL;
  v20[0] = 0LL;
  v20[1] = &v19;
  v20[2] = 0LL;
  LODWORD(v21) = 0;
  v22 = v27;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v28 = 0;
  LODWORD(v27[0]) = 0;
  v27[1] = "ProcessNewWindow";
  v27[2] = 0LL;
  v29 = 1LL;
  v31[0] = 0LL;
  memset_0(v30, 0, sizeof(v30));
  v31[1] = 0LL;
  v31[2] = 0LL;
  v32 = 0LL;
  v19 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
    (CImmersiveAppTelemetry::ProcessNewWindow *)&v19,
    *(const unsigned __int16 **)(a1 + 560));
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  if ( a2 )
    (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
      a2,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      &v16);
  else
    (*(void (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a5 + 40LL))(
      a5,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      &v16);
  (*(void (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v16 + 88LL))(
    v16,
    L"LastSetGlomIdForReconstitution",
    *(unsigned int *)(a1 + 568));
  v10 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264);
  if ( a3 )
    View = CImmersiveApp::CImmersiveWindowCollection::AddFirstView(v10, a2, a5);
  else
    View = CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(v10, a2, a4, a5);
  v12 = View;
  if ( View < 0 )
  {
    if ( *a6 )
      *a6 = 0;
  }
  else if ( a3 )
  {
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 644));
    v13 = *(_QWORD *)(a1 + 644);
    *(_QWORD *)(a1 + 668) = v13;
    if ( *(_BYTE *)(a1 + 464) && !*(_BYTE *)(a1 + 465) )
    {
      *(_QWORD *)(a1 + 676) = v13;
      v15 = *(struct IApplicationPresentationLayer **)(a1 + 416);
      *(_DWORD *)(a1 + 600) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 600), v15);
    }
    CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)a1);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v19, v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v19 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v19);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v32);
  wil::details::shared_buffer::reset(v31);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v27);
  if ( v24 == 1 )
  {
    v24 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, Context) && fPending[0] )
    {
      Context[0] = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v26);
  }
  v24 = 3;
  if ( (_DWORD)v21 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
  return v12;
}
