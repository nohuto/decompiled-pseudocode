/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1801D55D4
 * Callers:
 *     _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$3 @ 0x1801EE592 (_TabViewManager--TryRemoveViewFromTabGroup_--_1_--dtor$3.c)
 *     __lambda_f167818d7963a6aecc3c3c61dfbcf93a_::operator()_::_1_::dtor$1 @ 0x1801FE3ED (__lambda_f167818d7963a6aecc3c3c61dfbcf93a_--operator()_--_1_--dtor$1.c)
 *     _DefaultIconManager::UpdateIconForAppUserModelId_::_1_::dtor$1 @ 0x180200A0F (_DefaultIconManager--UpdateIconForAppUserModelId_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v1++);
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
