/*
 * XREFs of ?NewViewForTab@TabTransferManager@@UEAAJIUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180257470
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc_____lambda_63df1022615e5d58b392f54f931127cc___ @ 0x180255038 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_63df1022615e5.c)
 */

__int64 __fastcall TabTransferManager::NewViewForTab(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edi
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  int v12; // eax
  int v13; // edi
  const char *v14; // r9
  __int64 result; // rax
  volatile signed __int32 *v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+58h] [rbp-30h]
  __int128 v21; // [rsp+5Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v17[1] = -2LL;
  v6 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v17,
         a1);
  v18 = a1;
  v7 = *v6;
  *v6 = 0LL;
  v19 = v7;
  v20 = a2;
  v21 = *a3;
  v8 = *(_DWORD *)(a1 + 112);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc_____lambda_63df1022615e5d58b392f54f931127cc___(
         &v16,
         (__int64)&v18);
  v10 = *v9;
  *v9 = 0LL;
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v11);
  }
  v12 = SHTaskPoolQueueTask(3LL, 2LL, v8, 0LL, v10, 0LL);
  try
  {
    v13 = v12;
    if ( v10 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v17);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        244LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF7,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v14);
  }
  return result;
}
