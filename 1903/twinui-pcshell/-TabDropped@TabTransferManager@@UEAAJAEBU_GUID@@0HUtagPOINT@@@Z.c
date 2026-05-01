/*
 * XREFs of ?TabDropped@TabTransferManager@@UEAAJAEBU_GUID@@0HUtagPOINT@@@Z @ 0x18025A020
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a_____lambda_101c7afbd5e76fc2a50976d3f19be39a___ @ 0x180254EB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___--CTaskW.c)
 */

__int64 __fastcall TabTransferManager::TabDropped(
        TabTransferManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        int a4,
        struct tagPOINT a5)
{
  __int64 *v9; // rax
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rbx
  void *v13; // rax
  int v14; // eax
  int v15; // edi
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18[2]; // [rsp+30h] [rbp-68h] BYREF
  TabTransferManager *v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int128 v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+70h] [rbp-28h]
  struct tagPOINT v24; // [rsp+74h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18[1] = -2LL;
  v9 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v18,
         (__int64)this);
  v19 = this;
  v10 = *v9;
  *v9 = 0LL;
  v20 = v10;
  v21 = (__int128)*a2;
  v22 = (__int128)*a3;
  v23 = a4;
  v24 = a5;
  v11 = *((_DWORD *)this + 28);
  v12 = 0LL;
  v13 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
    v12 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a_____lambda_101c7afbd5e76fc2a50976d3f19be39a___(
            (__int64)v13,
            (__int64)&v19);
  v14 = SHTaskPoolQueueTask(3LL, 2LL, v11, 0LL, v12, 0LL);
  try
  {
    v15 = v14;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v18);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        279LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11A,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v16);
  }
  return result;
}
