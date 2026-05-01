/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UAGJPAW4TrustLevel@@@Z @ 0x1000F3F0
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WBE@AGJPAW4TrustLevel@@@Z @ 0x1000D2C0 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIMemoryM.c)
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WBI@AGJPAW4TrustLevel@@@Z @ 0x1000D2D0 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implemen_ea_1000D2D0.c)
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WBM@AGJPAW4TrustLevel@@@Z @ 0x1000D2E0 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implemen_ea_1000D2E0.c)
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@AGJPAW4TrustLevel@@@Z @ 0x1000D2F0 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implemen_ea_1000D2F0.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        int a1,
        int *a2)
{
  int v2; // esi
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 )
    v3 = (*(int (__thiscall **)(_DWORD))(v2 + 8))(*(_DWORD *)(v2 + 8));
  else
    v3 = 2;
  *a2 = v3;
  return 0;
}
