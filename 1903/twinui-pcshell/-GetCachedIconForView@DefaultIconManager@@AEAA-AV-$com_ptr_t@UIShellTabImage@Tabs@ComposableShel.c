/*
 * XREFs of ?GetCachedIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18025216C
 * Callers:
 *     ?SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1802530B0 (-SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022F4A0 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180254BFC (-find@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$com_ptr_t@UIShellTabImage@Tabs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DefaultIconManager::GetCachedIconForView(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  __int64 *v4; // rdi
  bool v6; // bl
  RTL_SRWLOCK *v7; // rbx
  HSTRING *Aumid; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD v12[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  v12[1] = -2LL;
  v4 = a2;
  *a2 = 0LL;
  (**a3)(a3, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v15);
  v6 = v15 != 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
  if ( v6 && *(_BYTE *)(a1 + 72) )
  {
    v7 = (RTL_SRWLOCK *)(a1 + 496);
    AcquireSRWLockShared((PSRWLOCK)(a1 + 496));
    try
    {
      v12[2] = a1 + 496;
      Aumid = GetAumid(&string, (__int64)a3);
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>>,0>>::find(
        a1 + 56,
        v12,
        Aumid);
      WindowsDeleteString(string);
      if ( v12[0] != *(_QWORD *)(a1 + 56) )
      {
        v9 = *(_QWORD *)(v12[0] + 40LL);
        v10 = *v4;
        *v4 = v9;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v7 )
        ReleaseSRWLockShared(v7);
    }
    catch ( ... )
    {
      return a2;
    }
  }
  return v4;
}
