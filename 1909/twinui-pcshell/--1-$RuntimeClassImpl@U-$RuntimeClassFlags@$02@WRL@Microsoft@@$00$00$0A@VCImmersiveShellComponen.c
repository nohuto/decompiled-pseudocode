/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800AFF84
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B071C (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@.c)
 *     ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B095C (--_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = a1[22];
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
      2 * v3,
      a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 20);
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(a1 + 1));
}
