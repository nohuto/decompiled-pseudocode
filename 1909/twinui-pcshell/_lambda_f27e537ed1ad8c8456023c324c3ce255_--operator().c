/*
 * XREFs of _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x180270BC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f27e537ed1ad8c8456023c324c3ce255___::Run @ 0x180272600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f27e537ed1ad8c8456023c324c3ce255___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18024EA50 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 *     ??$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@?$map@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18026F794 (--$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@-$map@VHString@Wrappers@WRL@Microsoft@@V-$c.c)
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802719E8 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 *     ?SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180272708 (-SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@Compos.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f27e537ed1ad8c8456023c324c3ce255_::operator()(__int64 a1)
{
  DefaultIconManager *v2; // rcx
  int v3; // eax
  bool v4; // bl
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rbx
  HSTRING *Aumid; // rax
  __int64 v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  _QWORD v11[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v13; // [rsp+60h] [rbp+8h] BYREF
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+70h] [rbp+18h]

  v2 = *(DefaultIconManager **)(a1 + 8);
  try
  {
    DefaultIconManager::GetIconForView(v2);
    if ( v13 )
    {
      v3 = DefaultIconManager::SetIconOnViewTabs(
             *(DefaultIconManager **)(a1 + 8),
             *(struct IApplicationView **)(a1 + 16),
             v13);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          151LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
          (const char *)(unsigned int)v3);
      (***(void (__fastcall ****)(_QWORD, GUID *, HSTRING *))(a1 + 16))(
        *(_QWORD *)(a1 + 16),
        &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
        &string);
      v4 = string != 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&string);
      if ( v4 )
      {
        v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 496LL);
        AcquireSRWLockExclusive(v5);
        v15 = v5;
        v6 = *(_QWORD *)(a1 + 8);
        Aumid = GetAumid(&string, *(_QWORD *)(a1 + 16));
        std::map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>::_Try_emplace<Microsoft::WRL::Wrappers::HString,>(
          (__int64 *)(v6 + 56),
          (__int64)v11,
          Aumid);
        v8 = *(_QWORD *)(v11[0] + 40LL);
        *(_QWORD *)(v11[0] + 40LL) = v13;
        if ( v13 )
          (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        WindowsDeleteString(string);
        if ( v5 )
          ReleaseSRWLockExclusive(v5);
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA4,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                           v9);
  }
  return result;
}
