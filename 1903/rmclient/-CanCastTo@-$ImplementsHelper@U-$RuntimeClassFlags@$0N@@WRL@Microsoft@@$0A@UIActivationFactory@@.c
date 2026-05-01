/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x1000F12D
 * Callers:
 *     ??$AsIID@V?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$0N@@Details@WRL@Microsoft@@KGJPAV?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@23@ABU_GUID@@PAPAX@Z @ 0x1000EE70 (--$AsIID@V-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIMemoryManage.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x1000F0DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 */

int __thiscall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        int this,
        _DWORD *a2,
        void **a3,
        int a4)
{
  struct _GUID *v5; // ecx
  int result; // eax

  if ( InlineIsEqualGUID(a2, &_GUID_00000035_0000_0000_c000_000000000046) )
  {
    *a3 = (void *)this;
    return 0;
  }
  else
  {
    result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>::CanCastTo(
               (Microsoft::WRL::FtmBase *)(this + 4),
               v5,
               a3,
               (int)v5);
    if ( result == -2147467262 )
      return -2147467262;
  }
  return result;
}
