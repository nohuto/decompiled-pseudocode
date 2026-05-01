/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics3@System@Windows@@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x100082BB
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10009CC0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 */

int __thiscall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
        char *this,
        int a2,
        _DWORD *a3,
        int a4)
{
  const struct _GUID *v6; // [esp+0h] [ebp-4h]
  const struct _GUID *v7; // [esp+0h] [ebp-4h]
  const struct _GUID *savedregs; // [esp+4h] [ebp+0h]
  const struct _GUID *savedregsa; // [esp+4h] [ebp+0h]

  if ( InlineIsEqualGUID(v6, savedregs) )
  {
    *a3 = this;
  }
  else
  {
    if ( !InlineIsEqualGUID(v7, savedregsa) )
      return -2147467262;
    *a3 = this + 4;
  }
  return 0;
}
