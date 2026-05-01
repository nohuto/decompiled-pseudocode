/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18006D4E8
 * Callers:
 *     ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x18006D3D0 (--_ECImmersiveWindowFactory@@EEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180421080 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Mi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800775C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1800775C0.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>(
        CImmersiveWindowFactoryBase *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 23);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::Release(2 * v2);
  CImmersiveWindowFactoryBase::~CImmersiveWindowFactoryBase(this);
}
