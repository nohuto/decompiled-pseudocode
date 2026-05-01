/*
 * XREFs of _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x1801FE400
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f27e537ed1ad8c8456023c324c3ce255___::Run @ 0x1801FFE80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f27e537ed1ad8c8456023c324c3ce255___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801DBF84 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 *     ??$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@?$map@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1801FCFD0 (--$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@-$map@VHString@Wrappers@WRL@Microsoft@@V-$c.c)
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FF230 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 *     ?SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801FFF88 (-SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@Compos.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f27e537ed1ad8c8456023c324c3ce255_::operator()(__int64 a1)
{
  DefaultIconManager *v2; // rcx
  int v3; // eax
  bool v4; // bl
  RTL_SRWLOCK *v5; // rsi
  HSTRING *Aumid; // rax
  __int64 v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  _QWORD v10[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *v12; // [rsp+60h] [rbp+8h] BYREF
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+70h] [rbp+18h]

  v2 = *(DefaultIconManager **)(a1 + 8);
  try
  {
    DefaultIconManager::GetIconForView(v2);
    if ( v12 )
    {
      v3 = DefaultIconManager::SetIconOnViewTabs(
             *(DefaultIconManager **)(a1 + 8),
             *(struct IApplicationView **)(a1 + 16),
             v12);
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
        v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 480LL);
        AcquireSRWLockExclusive(v5);
        v14 = v5;
        Aumid = GetAumid(&string, *(_QWORD *)(a1 + 16));
        std::map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>::_Try_emplace<Microsoft::WRL::Wrappers::HString,>(
          (__int64 *)(*(_QWORD *)(a1 + 8) + 56LL),
          (__int64)v10,
          Aumid);
        v7 = *(_QWORD *)(v10[0] + 40LL);
        *(_QWORD *)(v10[0] + 40LL) = v12;
        if ( v12 )
          (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        WindowsDeleteString(string);
        if ( v5 )
          ReleaseSRWLockExclusive(v5);
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA4,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                           v8);
  }
  return result;
}
