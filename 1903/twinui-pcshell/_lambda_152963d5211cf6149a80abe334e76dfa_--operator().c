/*
 * XREFs of _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x1802ECAC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::Run @ 0x1802ED8A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___--Run.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x1801C4950 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x1802EBEEC (--$create_task@PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA-AV-$task@_N@0@PE$.c)
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x1802EC180 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     ?RequestSelectTabAsync@ITabController@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAU?$IAsyncOperation@_N@Foundation@5@PE$AAVShellTabGroup@2345@PE$AAVShellTab@2345@@Z @ 0x1802ED820 (-RequestSelectTabAsync@ITabController@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAU-$IAsyn.c)
 *     ?get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ @ 0x1802EF5B8 (-get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_152963d5211cf6149a80abe334e76dfa_::operator()(__int64 *a1)
{
  char v2; // al
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  Concurrency::task_options *v8; // rax
  Concurrency::details::_Task_impl_base **v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-59h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-39h]
  __int64 v15; // [rsp+50h] [rbp-31h] BYREF
  std::_Ref_count_base *v16; // [rsp+58h] [rbp-29h]
  _BYTE v17[120]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+67h]

  v12[1] = -2LL;
  v2 = 0;
  LODWORD(v18) = 0;
  if ( !a1[3] )
  {
    v3 = v18;
    goto LABEL_5;
  }
  v3 = ((__int64 (*)(void))Windows::Internal::ComposableShell::Tabs::IShellTab::Group::get)();
  v2 = 1;
  if ( !v3 )
  {
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  v4 = 1;
LABEL_6:
  if ( (v2 & 1) != 0 && v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( !v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 24LL))(*a1, a1[1]);
  v5 = Windows::Internal::ComposableShell::Tabs::IShellTab::Group::get(a1[3]);
  v6 = Windows::Internal::ComposableShell::Tabs::ITabController::RequestSelectTabAsync(a1[2], v5, a1[3]);
  v7 = *a1;
  v11 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v12,
    a1[1]);
  v8 = Concurrency::task_options::task_options((Concurrency::task_options *)v17);
  v9 = (Concurrency::details::_Task_impl_base **)Concurrency::create_task<Windows::Foundation::IAsyncOperation<bool> __gc *>(
                                                   &v15,
                                                   v6,
                                                   (__int64)v8);
  Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___(v9, &v13, (__int64)&v11);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
  result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return result;
}
