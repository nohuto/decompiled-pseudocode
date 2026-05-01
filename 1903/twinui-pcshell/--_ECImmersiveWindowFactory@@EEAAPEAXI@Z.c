/*
 * XREFs of ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x18006D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18006D4E8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactory.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactory *__fastcall CImmersiveWindowFactory::`vector deleting destructor'(
        CImmersiveWindowFactory *this,
        char a2)
{
  *(_QWORD *)this = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 1) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::Selector<CWrlLightweightHandlerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 6) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 9) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IConfigureWindowFactory>'};
  *((_QWORD *)this + 10) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>'};
  *((_QWORD *)this + 21) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
