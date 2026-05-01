/*
 * XREFs of ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YGJPAIPBUCreatorMap@012@ABU_GUID@@PAPAUIUnknown@@@Z @ 0x10009040
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIActivationFactory@@@Z @ 0x100098E0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIA.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMemoryManager@System@Windows@@@Z @ 0x100090D0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMe.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x1000F0DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 */

int __stdcall Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
        int *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4)
{
  int v4; // ecx
  int CanCastTo; // edi
  int v6; // esi
  int v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = 0;
  CanCastTo = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager,>(&v9);
  if ( CanCastTo < 0 )
  {
    v6 = v9;
  }
  else
  {
    if ( *a3 == 53 )
    {
      v4 = a3[1];
      if ( v4 == *(_DWORD *)&_GUID_00000035_0000_0000_c000_000000000046.Data2 )
      {
        v4 = a3[2];
        if ( v4 == *(_DWORD *)_GUID_00000035_0000_0000_c000_000000000046.Data4 )
        {
          v4 = a3[3];
          if ( v4 == *(_DWORD *)&_GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
          {
            v6 = v9;
            *a4 = v9;
LABEL_7:
            v7 = *a1;
            if ( (*a1 & 4) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 56));
              v7 = *a1;
            }
            *(_DWORD *)(v6 + 68) = v7;
            *(_DWORD *)(v6 + 64) = a2;
            return 0;
          }
        }
      }
    }
    v6 = v9;
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>::CanCastTo(
                  v9 + 4,
                  a3,
                  a4,
                  v4);
    if ( CanCastTo >= 0 )
      goto LABEL_7;
  }
  if ( v6 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v6 + 8))(*(_DWORD *)(*(_DWORD *)v6 + 8), v6);
  return CanCastTo;
}
