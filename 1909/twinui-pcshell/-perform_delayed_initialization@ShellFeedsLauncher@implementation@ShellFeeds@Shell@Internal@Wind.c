/*
 * XREFs of ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800A1808 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??4?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A522C (--4-$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception.c)
 *     winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___ @ 0x1800BF32C (winrt--Windows--Networking--Connectivity--NetworkStatusChangedEventHandler--NetworkStatusChanged.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&_ @ 0x1800BFCCC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800BFCCC.c)
 *     ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1800BFE78 (--$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@.c)
 *     ?RetryConsentChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1800C3540 (-RetryConsentChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ @ 0x1800C443C (-ShellFeedsLauncher_NetworkStatusChangeListenerStarted@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@SA_NXZ @ 0x1800C4894 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@SA_NXZ.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868 (--1hstring@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING, _QWORD **); // r14
  HSTRING *v11; // rsi
  _QWORD *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  int AgileReference; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  RTL_SRWLOCK *v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v23; // [rsp+80h] [rbp+38h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+40h] BYREF
  RTL_SRWLOCK *v25; // [rsp+90h] [rbp+48h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp+50h] BYREF

  v21[1] = -2LL;
  LODWORD(v25) = 0;
  LOBYTE(v24) = 0;
  LOBYTE(v23) = 0;
  v5 = ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(0LL, (unsigned __int8)&v24, (unsigned __int8 *)&v23, a4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
      (const char *)(unsigned int)v5);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 10, &v20);
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, RTL_SRWLOCK **))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v25);
  }
  else
  {
    v25 = 0LL;
    v7 = 0;
  }
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_23;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v20);
  v20 = v25;
  winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
    v21,
    (__int64 (__fastcall *)(_QWORD, void *, void *, _QWORD *))IUnknown_QueryService,
    &v20);
  if ( v25 )
    winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v25);
  v26 = 0LL;
  v9 = v21[0];
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD **))(*(_QWORD *)v21[0] + 48LL);
  v11 = winrt::hstring::hstring((HSTRING *)&v25, L"Windows.Internal.ShellExperience.ShellFeeds");
  v12 = v26;
  v26 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v12 + 16LL))(v12, *v12);
  v13 = v10(v9, *v11, &v26);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v14,
      66LL,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  winrt::hstring::~hstring((winrt::hstring *)&v25);
  v15 = (__int64)v26;
  v20 = 0LL;
  LODWORD(v25) = 2;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v20);
  AgileReference = RoGetAgileReference(0LL, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v15, &v20);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1634LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)AgileReference);
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v8,
      171LL,
      (__int64)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
      (const char *)(unsigned int)v7);
    goto LABEL_24;
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData,wil::err_exception_policy>::operator=(
    (__int64 *)this + 11,
    (__int64 *)&v20);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
  if ( wil::Feature<__WilFeatureTraits_Feature_FeedsCTACompliance>::__private_IsEnabled(v17) && (_BYTE)v23 )
  {
    winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks(
      (__int64)this - 8,
      &v23);
  }
  else if ( (_BYTE)v24 )
  {
    ShellFeedsTelemetry::ShellFeedsLauncher_NetworkStatusChangeListenerStarted(v18);
    winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___(
      &v23,
      (__int64)this - 8);
    v24 = &v23;
    *((_QWORD *)this + 12) = *(_QWORD *)winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a____(
                                          v19,
                                          (__int64)&v25,
                                          &v24);
    if ( v23 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v23);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
  if ( v21[0] )
    winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v21);
}
