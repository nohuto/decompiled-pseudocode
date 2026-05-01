/*
 * XREFs of ?OnTabbedWindowMisbehaving@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180234830
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_132747a8c064cc57545260719f8d8ec8___ @ 0x180226658 (Windows--Internal--ComTaskPool--QueueTask__lambda_132747a8c064cc57545260719f8d8ec8___.c)
 *     ??$count@PEAUIApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEBA_KAEBQEAUIApplicationView@@@Z @ 0x180228AC0 (--$count@PEAUIApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicati.c)
 */

__int64 __fastcall TabViewManager::OnTabbedWindowMisbehaving(
        unsigned __int64 this,
        struct IApplicationView *a2,
        int *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  char *v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationView *v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = a2;
  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(this + 1312);
  AcquireSRWLockShared((PSRWLOCK)(this + 1312));
  if ( (unsigned __int64)std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::count<IApplicationView *,std::less<void>,int>(
                           (__int64 *)(this + 1152),
                           (unsigned __int64 *)&v18) <= 1 )
  {
    if ( v6 )
      ReleaseSRWLockShared(v6);
    v8 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v19,
           (__int64)a2);
    v9 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v17,
           this & -(__int64)(this != 136));
    v13 = (char *)(this - 136);
    v10 = *v9;
    *v9 = 0LL;
    v14 = v10;
    v11 = *v8;
    *v8 = 0LL;
    v15[0] = v11;
    v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_132747a8c064cc57545260719f8d8ec8___(v11, &v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v15);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    if ( v12 >= 0 )
    {
      *a3 = 1;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x606,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
  }
  else
  {
    *a3 = 0;
    if ( v6 )
      ReleaseSRWLockShared(v6);
    return 0LL;
  }
}
