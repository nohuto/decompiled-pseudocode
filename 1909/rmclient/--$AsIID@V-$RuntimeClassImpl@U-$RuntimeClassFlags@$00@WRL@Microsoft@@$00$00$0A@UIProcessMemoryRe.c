/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@123@ABU_GUID@@PAPAX@Z @ 0x1000FEB6
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x10010CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A_ea_10010CD0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIProcessMemoryReport@System@Windows@@UIWeakReferenceSource@@UIInspectable@@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10010759 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIProcessMemoryReport@.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>>(
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
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::System::IProcessMemoryReport,IWeakReferenceSource,IInspectable>::CanCastTo(
                  a1,
                  a2,
                  a3,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a3 + 4))(*(_DWORD *)(*(_DWORD *)*a3 + 4), *a3);
    return CanCastTo;
  }
}
