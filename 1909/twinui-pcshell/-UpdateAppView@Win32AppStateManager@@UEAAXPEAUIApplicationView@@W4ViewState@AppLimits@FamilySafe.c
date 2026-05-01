/*
 * XREFs of ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800BC010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1800A6A20 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___ @ 0x1800B8E8C (Windows--Internal--ComTaskPool--QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___.c)
 *     _lambda_db2cedfb0854aef668be6bda3030eb84_::__lambda_db2cedfb0854aef668be6bda3030eb84_ @ 0x1800BA6C4 (_lambda_db2cedfb0854aef668be6bda3030eb84_--__lambda_db2cedfb0854aef668be6bda3030eb84_.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Win32AppStateManager::UpdateAppView(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v24[4]; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  v27 = a2;
  v23[1] = -2LL;
  wil::com_query<IWin32ApplicationView,IApplicationView * &>((__int64)&v21, &v27);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v20);
  v9 = retaddr;
  if ( v8 >= 0 )
  {
    if ( a5 )
    {
      Win32AppStateManager::UpdateAppViewWorker(a1);
      return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    }
    v11 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            v23,
            a4);
    v12 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v22,
            a1);
    v24[0] = a1;
    v13 = *v12;
    *v12 = 0LL;
    v24[1] = v13;
    v14 = *v11;
    *v11 = 0LL;
    v24[2] = v14;
    v24[3] = v20;
    v25 = a3;
    v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___(
            v14,
            v15,
            *(_DWORD *)(a1 + 48),
            (__int64)v24);
    lambda_db2cedfb0854aef668be6bda3030eb84_::__lambda_db2cedfb0854aef668be6bda3030eb84_((__int64)v24);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v23);
    if ( v16 >= 0 )
      return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      402LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
      (const char *)(unsigned int)v16);
  }
  wil::details::in1diag3::Throw_Hr(
    v9,
    381LL,
    (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
    (const char *)(unsigned int)v8);
  __debugbreak();
  return Win32AppStateManager::UpdateAppView_::_1_::dtor_0(v18, v17, v19);
}
