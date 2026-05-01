/*
 * XREFs of ?CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@6@PEAPEAUIViewGroup@@@Z @ 0x1801FA2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 *     ??$_Buynode@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@1@$$QEAV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801F9BFC (--$_Buynode@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@-$_Tree_comp_all.c)
 *     ??$_Insert_nohint@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@_NAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1801F9DC8 (--$_Insert_nohint@AEAV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tre.c)
 *     ??$MakeOrThrow@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@7@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VViewGroup@@@WRL@Microsoft@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@9@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x180205868 (--$MakeOrThrow@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabVi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::CreateViewGroup(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r8
  const char *v14; // r9
  int v15; // eax
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  char v21; // [rsp+58h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v22 = -2LL;
  *a4 = 0LL;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_QWORD *)(a1 + 80);
  v24 = *(_QWORD *)(a1 + 112);
  v26 = a3;
  v18 = v6;
  v19 = v7;
  v20 = v8;
  try
  {
    v9 = (__int64 *)wil::MakeOrThrow<ViewGroup,IWindowGroupManager * &,ITitleBarController * &,ITabViewManager * &,Windows::Foundation::IEventHandler<IInspectable *> * &,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const &,IPrivilegedForegroundOperations * &>(
                      (unsigned int)&v25,
                      (unsigned int)&v20,
                      (unsigned int)&v19,
                      (unsigned int)&v18,
                      (__int64)&v26,
                      a2,
                      (__int64)&v24);
    v10 = *v9;
    *v9 = 0LL;
    if ( v10 )
      v24 = v10 + 8;
    else
      v24 = 0LL;
    v11 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v11);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 240));
    v25 = a1 + 240;
    v12 = (__int64 *)std::_Tree_comp_alloc<std::_Tset_traits<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>,0>>::_Buynode<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>(
                       a1 + 248,
                       &v24);
    std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Insert_nohint<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *> *>(
      (__int64 *)(a1 + 248),
      (__int64)&v20,
      v13,
      v12 + 4,
      v12);
    if ( !v21 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        139LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        v14);
    v15 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v20 + 32))(
            *(_QWORD *)(v20 + 32),
            &GUID_c8708459_3036_4e1a_8555_56cebb48e438,
            a4);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5800LL,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v15);
    if ( a1 != -240 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 240));
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x90,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v16);
  }
  return result;
}
