/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@123@ABU_GUID@@PAPAX@Z @ 0x10008610
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x10009FC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemory.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10008680 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@S.c)
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@UIAppMemoryReport2@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x100106F1 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefer_ea_100106F1.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>>(
        int a1,
        _DWORD *a2,
        int *a3)
{
  int v4; // ecx
  int CanCastTo; // edi
  void (__thiscall *v6)(_DWORD, int); // esi
  int v8; // [esp-4h] [ebp-14h]
  const struct _GUID *v9; // [esp+0h] [ebp-10h]
  const struct _GUID *v10; // [esp+4h] [ebp-Ch]

  *a3 = 0;
  if ( (*a2
     || a2[1] != *(_DWORD *)&_GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)_GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&_GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( InlineIsEqualGUID(v9, v10) )
    {
      CanCastTo = 0;
      *a3 = a1;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>::CanCastTo(
                    a1 + 4,
                    a2,
                    a3,
                    v4);
      if ( CanCastTo < 0 )
        return CanCastTo;
    }
    v8 = *a3;
    v6 = *(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*a3 + 4);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::AddRef(v8);
    else
      v6(*(_DWORD *)(*(_DWORD *)*a3 + 4), v8);
    return CanCastTo;
  }
  *a3 = a1;
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1 + 4))(*(_DWORD *)(*(_DWORD *)a1 + 4), a1);
  return 0;
}
