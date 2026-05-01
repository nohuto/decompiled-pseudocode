/*
 * XREFs of ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BF318
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801BF568 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CI@@StringReference@Internal@Windows@@QEAA@AEAY0CI@$$CBG@Z @ 0x1801B9F88 (--$-0$0CI@@StringReference@Internal@Windows@@QEAA@AEAY0CI@$$CBG@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___ @ 0x1801BB150 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801BB150.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_44001d2a1b1d7cbc6b9a85ddc28654fc___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_44001d2a1b1d7cbc6b9a85ddc28654fc___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___ @ 0x1801BB1C4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801BB1C4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToAppEvents(CortanaStoreAppExperienceManager *this)
{
  HSTRING v2; // rbx
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, char *); // rdi
  _QWORD *v8; // r15
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  void *v13; // rax
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+28h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v18 = -2LL;
  v16 = 0LL;
  v2 = *Windows::Internal::StringReference::StringReference(&string, L"Windows.ApplicationModel.PackageCatalog");
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_a18c9696_e65b_4634_ba21_5e63eb7244a7, &v16);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 416LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_14;
  }
  v6 = v16;
  v7 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 56LL);
  v8 = (_QWORD *)((char *)this + 288);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  ActivationFactory = v7(v6, (char *)this + 288);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 417LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v17 = CortanaStoreAppExperienceManager::OnPackageInstalling;
  DWORD2(v17) = 0;
  string = (HSTRING)this;
  v21 = v17;
  v9 = 0LL;
  v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0LL;
  if ( v10 )
  {
    v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___(
           (__int64)v10,
           (__int64)&string);
    v11 = v9;
  }
  v19 = v9;
  (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 64LL))(*v8, v11, (char *)this + 184);
  *(_QWORD *)&v17 = CortanaStoreAppExperienceManager::OnPackageUninstalling;
  DWORD2(v17) = 0;
  string = (HSTRING)this;
  v21 = v17;
  v12 = 0LL;
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = 0LL;
  if ( v13 )
  {
    v12 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_44001d2a1b1d7cbc6b9a85ddc28654fc___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_44001d2a1b1d7cbc6b9a85ddc28654fc___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___(
            (__int64)v13,
            (__int64)&string);
    v14 = v12;
  }
  *(_QWORD *)&v17 = v12;
  (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 96LL))(*v8, v14, (char *)this + 192);
  v4 = 0;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v4;
}
