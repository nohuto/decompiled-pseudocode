/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___ @ 0x1801DA110
 * Callers:
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DE2E8 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::___Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_f4ad9fd0261f94213fae033314329a8a___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_18045D2D8;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
