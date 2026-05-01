/*
 * XREFs of ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F8BF8
 * Callers:
 *     wil::details::lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___::_lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___ @ 0x1801F61E4 (wil--details--lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___--_lambda_call__lambda_30d7.c)
 *     _lambda_4583b2cd47151c5f4a6d744938b764a0_::operator() @ 0x1801F6534 (_lambda_4583b2cd47151c5f4a6d744938b764a0_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24847edcb696616e06d886fb92d2466e___::Run @ 0x1801F8D00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24847edcb696616e06d886fb92d2466e___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@@Z @ 0x1801F1A54 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Window.c)
 *     ?DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1801F73E4 (-DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TitleBarController::RemoveWin32View(
        TitleBarController *this,
        struct IWin32ApplicationView *a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3)
{
  struct Windows::Internal::Shell::Experience::ITitleBar *v6; // rbx
  RTL_SRWLOCK *v7; // rsi
  TitleBarController *v8; // rcx
  __int64 **v9; // r10
  __int64 *v10; // r8
  struct Windows::Internal::Shell::Experience::ITitleBar *v11; // r14
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::Shell::Experience::ITitleBar *v15; // [rsp+60h] [rbp+8h] BYREF
  struct IWin32ApplicationView *v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a2;
  v6 = 0LL;
  v15 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)this + 11,
    &v17,
    (unsigned __int64 *)&v16);
  v10 = v17;
  v11 = 0LL;
  if ( v17 != *v9 )
  {
    v15 = (struct Windows::Internal::Shell::Experience::ITitleBar *)v17[5];
    v6 = v15;
    v17[5] = 0LL;
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
      v9,
      &v17,
      (__int64)v10);
    v11 = v6;
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  try
  {
    if ( v11 )
      TitleBarController::DisconnectTitleBarFromSharedVisual(v8, v6, a2, a3);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x18E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v12);
  }
  return result;
}
