/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18009A600
 * Callers:
 *     _std::vector_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_IApplicationView_____ptr64_&___ptr64__::_1_::catch$38 @ 0x180096767 (_std--vector_wil--com_ptr_t_IApplicationView_wil--err_exception_policy__std--allocator_wil--com_.c)
 *     ??1KioskPositioner@@UEAA@XZ @ 0x180096CDC (--1KioskPositioner@@UEAA@XZ.c)
 *     ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x180097050 (--_GUwpPrimaryAppProxy@@UEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18009A408 (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     _std::vector_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_____::_Emplace_reallocate_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_&___ptr64__::_1_::catch$38 @ 0x1800E9D07 (_std--vector_wil--com_ptr_t_Windows--Internal--Shell--Holographic--IViewHostItem_wil--err_return.c)
 *     _std::vector_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy__const_&___ptr64__::_1_::catch$38 @ 0x1801D1B67 (_std--vector_wil--com_ptr_t_Windows--Internal--ComposableShell--Tabs--IShellTab_wil--err_excepti.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v4++);
    while ( v4 != a3 );
  }
  return result;
}
