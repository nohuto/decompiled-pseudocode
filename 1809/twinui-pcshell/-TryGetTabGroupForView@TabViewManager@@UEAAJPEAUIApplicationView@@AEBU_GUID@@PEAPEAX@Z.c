/*
 * XREFs of ?TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1801EDDA0
 * Callers:
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1801D7DC0 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ED8FC (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801EDCDC (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::TryGetTabGroupForView(
        TabViewManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 *TabForViewImpl; // rax
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  TabForViewImpl = (__int64 *)TabViewManager::TryGetTabForViewImpl((__int64)this - 136, &v14, (unsigned __int64)a2);
  try
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*TabViewManager::TryGetGroup(
                                                                             v7,
                                                                             &v13,
                                                                             *TabForViewImpl);
    if ( v8 )
    {
      v9 = (**v8)(v8, a3, a4);
      if ( v9 >= 0 )
      {
LABEL_6:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5800LL,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v9);
    }
    *a4 = 0LL;
    goto LABEL_6;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x541,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v10);
  }
  return result;
}
