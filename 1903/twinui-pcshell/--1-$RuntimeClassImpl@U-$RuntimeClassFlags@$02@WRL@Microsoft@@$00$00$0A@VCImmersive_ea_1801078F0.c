/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@UIViewProvider@Core@ComposableShell@89@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801078F0
 * Callers:
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x180107AAC (--1AcrylicPolicyManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@UIViewProvider@Core@ComposableShell@89@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180107F80 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@.c)
 *     ??1RetailDemoExperienceManager@@EEAA@XZ @ 0x1801B4884 (--1RetailDemoExperienceManager@@EEAA@XZ.c)
 *     ??1HolographicViewHostItemLedger@@UEAA@XZ @ 0x180207B70 (--1HolographicViewHostItemLedger@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800775C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1800775C0.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180107B88 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[23];
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::Release((volatile signed __int32 *)(2 * v2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 21);
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 6));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 1));
}
