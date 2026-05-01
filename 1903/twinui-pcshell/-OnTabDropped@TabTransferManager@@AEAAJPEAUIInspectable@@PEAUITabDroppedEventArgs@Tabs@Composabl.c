/*
 * XREFs of ?OnTabDropped@TabTransferManager@@AEAAJPEAUIInspectable@@PEAUITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802575E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fa5311f677dfb1ca9719d5bf83446d7_____lambda_6fa5311f677dfb1ca9719d5bf83446d7___ @ 0x180255158 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fa5311f677df.c)
 */

__int64 __fastcall TabTransferManager::OnTabDropped(
        TabTransferManager *this,
        struct IInspectable *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  int v11; // edi
  const char *v12; // r9
  __int64 result; // rax
  TabTransferManager *v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs *v16; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs *))(*(_QWORD *)a3 + 8LL))(a3);
    v5 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v19,
           (__int64)this);
    v14 = this;
    v6 = *v5;
    *v5 = 0LL;
    v15 = v6;
    v20 = 0LL;
    v16 = a3;
    v7 = *((_DWORD *)this + 28);
    v8 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fa5311f677dfb1ca9719d5bf83446d7_____lambda_6fa5311f677dfb1ca9719d5bf83446d7___(
           &v18,
           &v14);
    v9 = *v8;
    *v8 = 0LL;
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v10);
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        262LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x109,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v12);
  }
  return result;
}
