/*
 * XREFs of ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802C69C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1802B4378 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B89A4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Deskt.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_18988d2ef5f1df883e47c946f668d0df___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_18988d2ef5f1df883e47c946f668d0df___ @ 0x1802C425C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802C425C.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_86dfcfb900c2cb342977b68534687bf6___ @ 0x1802C4900 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_86dfcfb900c2cb342977b68534687bf6.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowWrapperBase::RequestCloseAsync(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rsi
  AppRequestOperation *v7; // rbx
  __int64 *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  char v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h] BYREF
  __int64 v24; // [rsp+60h] [rbp-28h] BYREF
  AppRequestOperation *v25; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AppRequestOperation *v27; // [rsp+98h] [rbp+10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  *a2 = 0LL;
  try
  {
    wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsageToService(
      a1,
      (__int64)a2,
      a3);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 280) + 192LL))(*(_QWORD *)(a1 + 280), SRWLock);
    v27 = 0LL;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(&v27);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        963LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    if ( *(_BYTE *)(a1 + 561) )
    {
      _InterlockedExchange((volatile __int32 *)v27 + 42, 1);
      v7 = v27;
      (*(void (__fastcall **)(char *))(*((_QWORD *)v27 + 2) + 128LL))((char *)v27 + 16);
    }
    else
    {
      v6 = a1 - 8;
      v21 = a1 - 8;
      v22 = 1;
      *(_BYTE *)(a1 + 561) = 1;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v18,
        a1 - 8);
      v23 = a1 - 8;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v24,
        v18);
      v7 = v27;
      v25 = v27;
      if ( v27 )
        (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v27 + 8LL))(v27);
      v8 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_18988d2ef5f1df883e47c946f668d0df___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_18988d2ef5f1df883e47c946f668d0df___(
             &v29,
             &v23);
      v28 = *v8;
      *v8 = 0LL;
      v10 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
          v10,
          v9);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
      *(_QWORD *)&v20 = v6;
      *((_QWORD *)&v20 + 1) = &v28;
      CurrentThreadId = GetCurrentThreadId();
      v13 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_86dfcfb900c2cb342977b68534687bf6___(
              v12,
              CurrentThreadId,
              &v20);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1017LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v13);
      v22 = 0;
      v14 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
    }
    if ( v7 )
    {
      v15 = (**(__int64 (__fastcall ***)(AppRequestOperation *, GUID *, _QWORD *))v7)(
              v7,
              &GUID_3843809c_1f21_5d40_a51f_f6963ca8d259,
              a2);
      if ( v15 >= 0 )
      {
LABEL_19:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
        if ( SRWLock[0] )
          ReleaseSRWLockExclusive(SRWLock[0]);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v15);
    }
    *a2 = 0LL;
    goto LABEL_19;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x403,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v16);
    return (unsigned int)v27;
  }
  return result;
}
