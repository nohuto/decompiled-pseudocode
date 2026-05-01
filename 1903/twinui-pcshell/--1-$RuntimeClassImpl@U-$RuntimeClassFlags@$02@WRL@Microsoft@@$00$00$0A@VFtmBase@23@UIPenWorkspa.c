/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPenWorkspaceAppInstallBroker@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800946F0
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@UEAA@XZ @ 0x1800946E4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIPenWorkspaceAppInstallBr.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180094850 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@VFtmBase@23@UIPresentationReadyChange.c)
 *     ??_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z @ 0x1800948C0 (--_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z.c)
 *     ??_EPresentationReadyChangedEventArgs@@UEAAPEAXI@Z @ 0x18020E190 (--_EPresentationReadyChangedEventArgs@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800775C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1800775C0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::Release((volatile signed __int32 *)(2 * v2));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
