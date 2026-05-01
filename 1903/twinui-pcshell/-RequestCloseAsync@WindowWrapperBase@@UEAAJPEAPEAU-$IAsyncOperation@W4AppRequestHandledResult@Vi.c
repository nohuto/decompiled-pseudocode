/*
 * XREFs of ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802A7490
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x180294EB4 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802994B4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Deskt.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_18988d2ef5f1df883e47c946f668d0df___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_18988d2ef5f1df883e47c946f668d0df___ @ 0x1802A4D2C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802A4D2C.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_86dfcfb900c2cb342977b68534687bf6___ @ 0x1802A53D0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_86dfcfb900c2cb342977b68534687bf6.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowWrapperBase::RequestCloseAsync(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rsi
  AppRequestOperation *v7; // rbx
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  volatile signed __int32 *v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h]
  char v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h] BYREF
  AppRequestOperation *v24; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AppRequestOperation *v26; // [rsp+98h] [rbp+10h] BYREF
  volatile signed __int32 *v27; // [rsp+A0h] [rbp+18h] BYREF
  volatile signed __int32 *v28; // [rsp+A8h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  *a2 = 0LL;
  try
  {
    wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsageToService(
      a1,
      (__int64)a2,
      a3);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 280) + 192LL))(*(_QWORD *)(a1 + 280), SRWLock);
    v26 = 0LL;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(&v26);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        963LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    if ( *(_BYTE *)(a1 + 561) )
    {
      _InterlockedExchange((volatile __int32 *)v26 + 42, 1);
      v7 = v26;
      (*(void (__fastcall **)(char *))(*((_QWORD *)v26 + 2) + 128LL))((char *)v26 + 16);
    }
    else
    {
      v6 = a1 - 8;
      v20 = a1 - 8;
      v21 = 1;
      *(_BYTE *)(a1 + 561) = 1;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v17,
        a1 - 8);
      v22 = a1 - 8;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v23,
        v17);
      v7 = v26;
      v24 = v26;
      if ( v26 )
        (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v26 + 8LL))(v26);
      v8 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_18988d2ef5f1df883e47c946f668d0df___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_18988d2ef5f1df883e47c946f668d0df___(
             &v28,
             &v22);
      v27 = *v8;
      *v8 = 0LL;
      v9 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(v9);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
      *(_QWORD *)&v19 = v6;
      *((_QWORD *)&v19 + 1) = &v27;
      CurrentThreadId = GetCurrentThreadId();
      v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_86dfcfb900c2cb342977b68534687bf6___(
              v11,
              CurrentThreadId,
              &v19);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1017LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v12);
      v21 = 0;
      v13 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    }
    if ( v7 )
    {
      v14 = (**(__int64 (__fastcall ***)(AppRequestOperation *, GUID *, _QWORD *))v7)(
              v7,
              &GUID_3843809c_1f21_5d40_a51f_f6963ca8d259,
              a2);
      if ( v14 >= 0 )
      {
LABEL_19:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
        if ( SRWLock[0] )
          ReleaseSRWLockExclusive(SRWLock[0]);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v14);
    }
    *a2 = 0LL;
    goto LABEL_19;
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x403,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v15);
    return (unsigned int)v26;
  }
  return result;
}
