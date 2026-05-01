/*
 * XREFs of ?CanCastTo@FtmBase@WRL@Microsoft@@IAEJABU_GUID@@PAPAX@Z @ 0x10008178
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10007A6B (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x1000F0DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@123@ABU_GUID@@PAPAX@Z @ 0x1000FF27 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Implements@U-.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@123@ABU_GUID@@PAPAX@Z @ 0x1000FFAD (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1000FFAD.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 */

int __thiscall Microsoft::WRL::FtmBase::CanCastTo(Microsoft::WRL::FtmBase *this, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v5; // [esp+0h] [ebp-4h]
  const struct _GUID *v6; // [esp+0h] [ebp-4h]
  const struct _GUID *savedregs; // [esp+4h] [ebp+0h]
  const struct _GUID *savedregsa; // [esp+4h] [ebp+0h]

  if ( !InlineIsEqualGUID(v5, savedregs) && !InlineIsEqualGUID(v6, savedregsa) )
    return -2147467262;
  *a3 = this;
  return 0;
}
