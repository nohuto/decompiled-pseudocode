/*
 * XREFs of ??$AsIID@V?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$0N@@Details@WRL@Microsoft@@KGJPAV?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@23@ABU_GUID@@PAPAX@Z @ 0x1000EE70
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x1000F4A0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Impleme_ea_1000F4A0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x1000F12D (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<13>::AsIID<Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v5; // ecx
  int v6; // ecx
  int CanCastTo; // ebx

  *a3 = 0;
  if ( InlineIsEqualGUID(a2, &_GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v5, &_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = a1;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1 + 4))(*(_DWORD *)(*(_DWORD *)a1 + 4), a1);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  a1,
                  a2,
                  a3,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a3 + 4))(*(_DWORD *)(*(_DWORD *)*a3 + 4), *a3);
    return CanCastTo;
  }
}
