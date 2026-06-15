/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUninstallingEventArgs@23@@Foundation@Windows@@V_lambda_d16d110d62607e9e7a123dfd70e3b2fb_@@$0?0PEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageUninstallingEventArgs@63@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVPackageCatalog@ApplicationModel@Windows@@PEAUIPackageCatalog@23@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPackageUninstallingEventArgs@ApplicationModel@Windows@@PEAUIPackageUninstallingEventArgs@23@@234@@Foundation@Windows@@EAAJPEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageUninstallingEventArgs@53@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180067F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::IPackageCatalog *>,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::PackageUninstallingEventArgs *,Windows::ApplicationModel::IPackageUninstallingEventArgs *>>::*)(Windows::ApplicationModel::IPackageCatalog *,Windows::ApplicationModel::IPackageUninstallingEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,_lambda_d16d110d62607e9e7a123dfd70e3b2fb_,-1,Windows::ApplicationModel::IPackageCatalog *,Windows::ApplicationModel::IPackageUninstallingEventArgs *>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
