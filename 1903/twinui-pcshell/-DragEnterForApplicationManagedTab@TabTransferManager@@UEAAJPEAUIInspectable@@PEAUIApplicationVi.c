/*
 * XREFs of ?DragEnterForApplicationManagedTab@TabTransferManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x180257050
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70c1c60e35f2cf7099057459f26c5cae_____lambda_70c1c60e35f2cf7099057459f26c5cae___ @ 0x1802551E8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_70c1c60e35f2c.c)
 */

__int64 __fastcall TabTransferManager::DragEnterForApplicationManagedTab(
        TabTransferManager *this,
        struct IInspectable *a2,
        struct IApplicationView *a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  int v12; // eax
  int v13; // edi
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  TabTransferManager *v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v16,
         (__int64)a3);
  v5 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v22,
         (__int64)this);
  v17 = this;
  v6 = *v5;
  *v5 = 0LL;
  v18 = v6;
  v7 = *v4;
  *v4 = 0LL;
  v19[0] = v7;
  v8 = *((_DWORD *)this + 28);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70c1c60e35f2cf7099057459f26c5cae_____lambda_70c1c60e35f2cf7099057459f26c5cae___(
         &v21,
         &v17);
  v10 = *v9;
  *v9 = 0LL;
  v11 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v11);
  }
  v12 = SHTaskPoolQueueTask(3LL, 2LL, v8, 0LL, v10, 0LL);
  try
  {
    v13 = v12;
    if ( v10 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        222LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v14);
  }
  return result;
}
