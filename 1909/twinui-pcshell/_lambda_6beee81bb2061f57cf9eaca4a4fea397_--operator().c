/*
 * XREFs of _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801E4348
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6beee81bb2061f57cf9eaca4a4fea397___::Run @ 0x1801E72C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6beee81bb2061f57cf9eaca4a4fea397___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801E06BC (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     ??$Undocking_AlreadyInstalled@_N@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAX$$QEA_N@Z @ 0x1801E09F8 (--$Undocking_AlreadyInstalled@_N@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@.c)
 *     ??$Undocking_InstallAppFromStoreDelay@AEBH@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXAEBH@Z @ 0x1801E1348 (--$Undocking_InstallAppFromStoreDelay@AEBH@CortanaUndocking_InstallAppFromStore@CortanaProactive.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E33A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E33A4.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E3458 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E3458.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::_)(Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1801E3500 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyncOperationCom.c)
 *     ??1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3EA8 (--1CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801E7314 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z.c)
 *     ?StartActivity@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E7C84 (-StartActivity@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E838C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     ?TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801EAA2C (-TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 *     ?Undocking_AppInstalledDuringInstallDelayTime@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801EACFC (-Undocking_AppInstalledDuringInstallDelayTime@CortanaUndocking_InstallAppFromStore@CortanaProact.c)
 *     ?Undocking_InstallEventTriggered@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801EAE2C (-Undocking_InstallEventTriggered@CortanaUndocking_InstallAppFromStore@CortanaProactiveTelemetry@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator()(__int64 a1)
{
  struct Windows::ApplicationModel::IPackage **v2; // rdx
  int InstalledPackage; // eax
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, _QWORD, _QWORD, char, __int64 *); // rsi
  HSTRING_HEADER *v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, const WCHAR *); // rsi
  const WCHAR *v15; // rbx
  void *v16; // rax
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  const WCHAR *v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h]
  _QWORD v25[40]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v26[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v22[1] = (const WCHAR *)-2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v25,
    (__int64)"CortanaUndocking_InstallAppFromStore");
  v25[0] = &CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)v25);
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::Undocking_InstallAppFromStoreDelay<int const &>(
    (__int64)v25,
    a1);
  v21 = 0LL;
  InstalledPackage = CortanaStoreAppHelper::TryGetInstalledPackage((CortanaStoreAppHelper *)&v21, v2);
  v4 = InstalledPackage;
  if ( InstalledPackage < 0 )
    goto LABEL_17;
  v5 = v21;
  LOBYTE(v18) = v21 != 0;
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::Undocking_AlreadyInstalled<bool>(
    (__int64)v25,
    (__int64)&v18);
  if ( v5 )
  {
    InstalledPackage = CortanaStoreAppHelper::SetCortanaRegKey(
                         L"CortanaStoreHasTriedInstall",
                         (const unsigned __int16 *)1,
                         0,
                         v6);
    v4 = InstalledPackage;
    if ( InstalledPackage >= 0 )
    {
      CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::Undocking_AppInstalledDuringInstallDelayTime((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)v25);
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
      goto LABEL_19;
    }
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)InstalledPackage);
    goto LABEL_20;
  }
  v20 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
    0x48u,
    0x47u);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
         v24,
         &v20);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    v8 = v20;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, _QWORD, char, __int64 *))(*(_QWORD *)v20 + 152LL);
    v22[0] = L"9NFFX4SZZ23L";
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v11 = v9(v8, v10[1].Reserved.Reserved1, 0LL, 0LL, 1, &v19);
    v4 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      goto LABEL_14;
    }
    CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::Undocking_InstallEventTriggered((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)v25);
    v13 = v19;
    v14 = *(__int64 (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v19 + 48LL);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v26,
      (__int64)v25);
    v26[0] = &CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::`vftable';
    v15 = 0LL;
    v16 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v16 )
      v15 = (const WCHAR *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_____::___Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_____lambda_f8fc68a596a1d4698bf0d7673b0f23f8___1_Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem______enum_ABI::Windows::Foundation::AsyncStatus_((__int64)v16);
    v22[0] = v15;
    v4 = v14(v13, v15);
    if ( v15 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v15 + 16LL))(v15);
    CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::~CortanaUndocking_InstallAppFromStore((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)v26);
    if ( v4 < 0 )
    {
      v12 = (unsigned int)v4;
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_19:
    v4 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v7);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore::~CortanaUndocking_InstallAppFromStore((CortanaProactiveTelemetry::CortanaUndocking_InstallAppFromStore *)v25);
  return (unsigned int)v4;
}
