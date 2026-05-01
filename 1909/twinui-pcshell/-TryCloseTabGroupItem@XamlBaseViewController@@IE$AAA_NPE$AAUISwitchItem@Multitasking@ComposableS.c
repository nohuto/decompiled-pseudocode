/*
 * XREFs of ?TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18030CDA4
 * Callers:
 *     _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x18030C128 (_lambda_95ea086e3b8fa056e55a3a293b600f83_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$cx_safe_cast@UITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUITabController@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x18030B45C (--$cx_safe_cast@UITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@Y.c)
 *     ??$cx_safe_cast@VShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAVShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x18030B508 (--$cx_safe_cast@VShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AA.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18030C8C8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ @ 0x18030EA78 (-get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall XamlBaseViewController::TryCloseTabGroupItem(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int AppViewFromSwitchItem; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v16 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v16);
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v4, a2, &v16);
  if ( AppViewFromSwitchItem < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      204LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)AppViewFromSwitchItem);
  v6 = *(_QWORD *)(a1 + 88);
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, v16, &v17);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v7);
LABEL_6:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
    return 0;
  }
  if ( !v17 )
    goto LABEL_6;
  v18 = v17;
  v9 = wil::cx_safe_cast<Windows::Internal::ComposableShell::Tabs::ShellTab,IInspectable *>(&v18);
  v18 = v9;
  v10 = __abi_winrt_ptr_ctor(v9);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v18 = *(_QWORD *)(a1 + 96);
  v11 = wil::cx_safe_cast<Windows::Internal::ComposableShell::Tabs::ITabController,IInspectable *>(&v18);
  v18 = v11;
  v12 = __abi_winrt_ptr_ctor(v11);
  v18 = v12;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v13 = Windows::Internal::ComposableShell::Tabs::IShellTab::Group::get(v10);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 136LL))(v12, v13);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  return 1;
}
