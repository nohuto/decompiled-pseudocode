/*
 * XREFs of ?NewViewForTab@TabTransferManager@@UEAAJIUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802769D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc_____lambda_63df1022615e5d58b392f54f931127cc___ @ 0x180274598 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_63df1022615e5.c)
 */

__int64 __fastcall TabTransferManager::NewViewForTab(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edi
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edi
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  int v21; // [rsp+58h] [rbp-30h]
  __int128 v22; // [rsp+5Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18[1] = -2LL;
  v6 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v18,
         a1);
  v19 = a1;
  v7 = *v6;
  *v6 = 0LL;
  v20 = v7;
  v21 = a2;
  v22 = *a3;
  v8 = *(_DWORD *)(a1 + 112);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc_____lambda_63df1022615e5d58b392f54f931127cc___(
         &v17,
         (__int64)&v19);
  v11 = *v9;
  *v9 = 0LL;
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v12,
      v10);
  }
  v13 = SHTaskPoolQueueTask(3LL, 2LL, v8);
  try
  {
    v14 = v13;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v18);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        244LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF7,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v15);
  }
  return result;
}
