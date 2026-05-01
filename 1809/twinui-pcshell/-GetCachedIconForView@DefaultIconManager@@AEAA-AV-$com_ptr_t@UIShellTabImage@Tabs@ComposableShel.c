/*
 * XREFs of ?GetCachedIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FEEFC
 * Callers:
 *     ?SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801FFE90 (-SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801DBF84 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1802019E8 (-find@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$com_ptr_t@UIShellTabImage@Tabs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DefaultIconManager::GetCachedIconForView(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  __int64 *v4; // rdi
  bool v6; // bl
  HSTRING *Aumid; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD v11[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  HSTRING string; // [rsp+88h] [rbp+20h] BYREF

  v11[1] = -2LL;
  v4 = a2;
  *a2 = 0LL;
  (**a3)(a3, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v14);
  v6 = v14 != 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
  if ( v6 && *(_BYTE *)(a1 + 72) )
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 480));
    try
    {
      v11[2] = a1 + 480;
      Aumid = GetAumid(&string, (__int64)a3);
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>>,0>>::find(
        a1 + 56,
        v11,
        Aumid);
      WindowsDeleteString(string);
      if ( v11[0] != *(_QWORD *)(a1 + 56) )
      {
        v8 = *(_QWORD *)(v11[0] + 40LL);
        v9 = *v4;
        *v4 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( a1 != -480 )
        ReleaseSRWLockShared((PSRWLOCK)(a1 + 480));
    }
    catch ( ... )
    {
      return a2;
    }
  }
  return v4;
}
