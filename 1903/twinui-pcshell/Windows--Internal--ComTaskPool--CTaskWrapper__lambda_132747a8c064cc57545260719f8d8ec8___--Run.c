/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_132747a8c064cc57545260719f8d8ec8___::Run @ 0x1802374A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18024025C (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_132747a8c064cc57545260719f8d8ec8___::Run(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  TabViewManager::TryGetTabForViewImpl(*(_QWORD *)(a1 + 16), &v5, *(_QWORD *)(a1 + 32));
  if ( v5 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1216LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1216LL),
           v5,
           0LL);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x601,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
  }
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v5);
}
