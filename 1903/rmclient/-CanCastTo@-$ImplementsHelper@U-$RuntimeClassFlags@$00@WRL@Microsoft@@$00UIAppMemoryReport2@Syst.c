/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIAppMemoryReport2@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10010691
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@UIAppMemoryReport2@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x100106F1 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefer_ea_100106F1.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIInspectable@@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x100106C5 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIInspectable@@@Details.c)
 */

int __thiscall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IAppMemoryReport2,IInspectable>::CanCastTo(
        char *this,
        _DWORD *a2,
        _DWORD *a3,
        int a4)
{
  int v5; // ecx

  if ( !InlineIsEqualGUID(a2, &_GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>::CanCastTo(
             this + 4,
             v5,
             a3,
             v5);
  *a3 = this;
  return 0;
}
