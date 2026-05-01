/*
 * XREFs of ?OnViewRemoved@TabTransferManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1802771D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380_____lambda_6173185157cfb5f97cdb06cbbf229380___ @ 0x180274508 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6173185157cfb.c)
 */

__int64 __fastcall TabTransferManager::OnViewRemoved(TabTransferManager *this, struct IApplicationView *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  const char *v14; // r9
  __int64 result; // rax
  TabTransferManager *v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v22,
         (__int64)a2);
  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v21,
         (__int64)this);
  v16 = this;
  v5 = *v4;
  *v4 = 0LL;
  v17 = v5;
  v6 = *v3;
  *v3 = 0LL;
  v18 = v6;
  v7 = *((_DWORD *)this + 28);
  v8 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380_____lambda_6173185157cfb5f97cdb06cbbf229380___(
         &v20,
         &v16);
  v10 = *v8;
  *v8 = 0LL;
  v11 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v11,
      v9);
  }
  v12 = SHTaskPoolQueueTask(3LL, 2LL, v7);
  try
  {
    v13 = v12;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        771LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x306,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v14);
  }
  return result;
}
