/*
 * XREFs of ?GetTabsForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEAV?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801DD6D0
 * Callers:
 *     ?GetTabsForHwnd@TabViewManager@@UEAAJPEAUHWND__@@AEAV?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801DD600 (-GetTabsForHwnd@TabViewManager@@UEAAJPEAUHWND__@@AEAV-$vector@V-$com_ptr_t@UIShellTab@Tabs@Compo.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801D19F0 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     ??$_Eqrange@PEAUIApplicationView@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@V12@@1@AEBQEAUIApplicationView@@@Z @ 0x1801D1BA8 (--$_Eqrange@PEAUIApplicationView@@@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::GetTabsForView(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rbx
  const char *v6; // r9
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 result; // rax
  _QWORD v10[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+78h] [rbp+20h]

  v13 = a2;
  v5 = (RTL_SRWLOCK *)(a1 + 1296);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 1296));
  v14 = v5;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Eqrange<IApplicationView *>(
    (__int64 *)(a1 + 1080),
    v10,
    &v13);
  v7 = v10[0];
  v12 = v10[0];
  try
  {
    while ( v7 != v10[1] )
    {
      v8 = (__int64 *)(v7 + 40);
      if ( *(_QWORD *)(a3 + 16) == *(_QWORD *)(a3 + 8) )
      {
        std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const &>(
          (__int64 **)a3,
          *(__int64 **)(a3 + 8),
          v8);
      }
      else
      {
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          *(_QWORD **)(a3 + 8),
          *v8);
        *(_QWORD *)(a3 + 8) += 8LL;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v12);
      v7 = v12;
    }
    if ( v5 )
      ReleaseSRWLockShared(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C6,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v6);
  }
  return result;
}
