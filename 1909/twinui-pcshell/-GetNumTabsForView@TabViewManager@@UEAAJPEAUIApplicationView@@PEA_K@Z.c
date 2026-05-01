/*
 * XREFs of ?GetNumTabsForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEA_K@Z @ 0x18024F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$count@PEAUIApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEBA_KAEBQEAUIApplicationView@@@Z @ 0x18024814C (--$count@PEAUIApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicati.c)
 */

__int64 __fastcall TabViewManager::GetNumTabsForView(
        TabViewManager *this,
        struct IApplicationView *a2,
        unsigned __int64 *a3)
{
  RTL_SRWLOCK *v3; // rsi
  struct IApplicationView *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (RTL_SRWLOCK *)((char *)this + 1304);
  AcquireSRWLockExclusive((PSRWLOCK)this + 163);
  *a3 = std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::count<IApplicationView *,std::less<void>,int>(
          (__int64 *)this + 143,
          (unsigned __int64 *)&v7);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
