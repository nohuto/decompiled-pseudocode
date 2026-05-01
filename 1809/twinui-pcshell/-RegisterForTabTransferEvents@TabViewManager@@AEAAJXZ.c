/*
 * XREFs of ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38
 * Callers:
 *     ?OnTitleBarsLost@TabViewManager@@UEAAJXZ @ 0x1801E2110 (-OnTitleBarsLost@TabViewManager@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x1801E2D30 (-PerformDelayedInitialization@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0VTabViewManager@@@?$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@PEAVTabViewManager@@@Z @ 0x1801CDEAC (--$-0VTabViewManager@@@-$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows.c)
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_cbb0258dd247905ababaa0c64dc22f3a__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801D0EAC (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase_Windows--Internal--Shell--Exper_ea_1801D0EAC.c)
 *     _lambda_cbb0258dd247905ababaa0c64dc22f3a_::_lambda_cbb0258dd247905ababaa0c64dc22f3a_ @ 0x1801D39D0 (_lambda_cbb0258dd247905ababaa0c64dc22f3a_--_lambda_cbb0258dd247905ababaa0c64dc22f3a_.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_ @ 0x1801D42AC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801D42AC.c)
 *     _lambda_cbb0258dd247905ababaa0c64dc22f3a_::__lambda_cbb0258dd247905ababaa0c64dc22f3a_ @ 0x1801D500C (_lambda_cbb0258dd247905ababaa0c64dc22f3a_--__lambda_cbb0258dd247905ababaa0c64dc22f3a_.c)
 */

__int64 __fastcall TabViewManager::RegisterForTabTransferEvents(TabViewManager *this)
{
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v5; // rdi
  void *v6; // rax
  __int64 v7; // rsi
  void *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r14d
  __int64 v12; // r14
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  TabViewManager *v17; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+58h] BYREF

  v16 = -2LL;
  *(_QWORD *)&v15 = TabViewManager::OnTabTransferStarting;
  DWORD2(v15) = 0;
  v17 = this;
  v18 = v15;
  v2 = 0LL;
  v3 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v2 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_(
           (__int64)v3,
           (__int64)&v17);
  v23 = v2;
  if ( !v2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40C,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  *(_QWORD *)&v15 = TabViewManager::OnTabTransferCompleted;
  DWORD2(v15) = 0;
  v17 = this;
  v18 = v15;
  v5 = 0LL;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v5 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_(
           (__int64)v6,
           (__int64)&v17);
  v22 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)0x8007000ELL);
LABEL_10:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return 2147942414LL;
  }
  *(_QWORD *)&v15 = TabViewManager::OnTabTransferCanceled;
  DWORD2(v15) = 0;
  v17 = this;
  v18 = v15;
  v7 = 0LL;
  v8 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v7 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::TabTransferEventBroker_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_5fcb779aef48f5d8da69e0e86825322b___1_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_IInspectable_____ptr64_(
           (__int64)v8,
           (__int64)&v17);
  v21 = v7;
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x410,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)0x8007000ELL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    goto LABEL_10;
  }
  v9 = *((_QWORD *)this + 173);
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 72LL))(v9, &v20);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x413,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_17:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return (unsigned int)v11;
  }
  v12 = v20;
  v13 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>(
          (__int64 *)&v15,
          (__int64)this);
  v14 = lambda_cbb0258dd247905ababaa0c64dc22f3a_::_lambda_cbb0258dd247905ababaa0c64dc22f3a_(
          &v17,
          (__int64)this,
          v13,
          &v23,
          &v22,
          &v21);
  v11 = wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_cbb0258dd247905ababaa0c64dc22f3a__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_(
          v12,
          v14);
  lambda_cbb0258dd247905ababaa0c64dc22f3a_::__lambda_cbb0258dd247905ababaa0c64dc22f3a_((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x437,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_17;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
