/*
 * XREFs of ?OnTabTransferStarting@TabTransferManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180257890
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099D88 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e_____lambda_2de9129cf7ca5d1ddf0542513b424d5e___ @ 0x180254F18 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___--CTaskW.c)
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::__lambda_2de9129cf7ca5d1ddf0542513b424d5e_ @ 0x180255D7C (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--__lambda_2de9129cf7ca5d1ddf0542513b424d5e_.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabTransferManager::OnTabTransferStarting(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 (*v5)(void); // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  void *v13; // rbx
  __int64 (__fastcall *v14)(void *, __int64 *, __int64 *); // rdi
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rbx
  void *v20; // rax
  int v21; // edi
  const char *v22; // r9
  __int64 result; // rax
  __int64 *v24; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B0h] BYREF
  void *v28[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+60h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-88h]
  __int64 v31[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-68h] BYREF
  __int64 v33; // [rsp+98h] [rbp-60h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v30 = -2LL;
  v24 = 0LL;
  v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 72) + 96LL);
  v29 = *a3;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v24);
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        454LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = v24;
    if ( !v24 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        455LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)0x80070490LL);
    v25 = 0LL;
    v8 = *v7;
    v25 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v8 + 168))(v7, &v25);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        458LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v9);
    v10 = v25;
    if ( !v25 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        459LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)0x80070490LL);
    v27 = 0LL;
    v11 = *v10;
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 56))(v10, &v27);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        462LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v12);
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
      (struct IWeakReference **)(a1 + 64),
      v28);
    v26 = 0LL;
    v13 = v28[0];
    v14 = *(__int64 (__fastcall **)(void *, __int64 *, __int64 *))(*(_QWORD *)v28[0] + 24LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v26);
    v15 = v14(v13, v24, &v26);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        466LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v15);
    v16 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v29,
            a1);
    v31[0] = a1;
    v17 = *v16;
    *v16 = 0LL;
    v31[1] = v17;
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v32,
      (__int64)v24);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v33,
      v27);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v34,
      (__int64)v28[0]);
    v35 = *a3;
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v36,
      (__int64)v25);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v37,
      v26);
    v18 = *(_DWORD *)(a1 + 112);
    v19 = 0LL;
    v20 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v20 )
      v19 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e_____lambda_2de9129cf7ca5d1ddf0542513b424d5e___(
              (__int64)v20,
              (__int64)v31);
    v21 = SHTaskPoolQueueTask(3LL, 2LL, v18, 0LL, v19, 0LL);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    lambda_2de9129cf7ca5d1ddf0542513b424d5e_::__lambda_2de9129cf7ca5d1ddf0542513b424d5e_(v31);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v29);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        545LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v21);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v28);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v27);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x225,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v22);
  }
  return result;
}
