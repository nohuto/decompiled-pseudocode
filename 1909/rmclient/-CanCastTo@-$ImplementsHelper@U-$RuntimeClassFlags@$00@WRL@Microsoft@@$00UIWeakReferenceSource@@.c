/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10007A6B
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@ABU_GUID@@PAPAX@Z @ 0x10009690 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageL.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IAEJABU_GUID@@PAPAX@Z @ 0x10008178 (-CanCastTo@FtmBase@WRL@Microsoft@@IAEJABU_GUID@@PAPAX@Z.c)
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 */

int __thiscall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
        int this,
        int a2,
        void **a3,
        int a4)
{
  const struct _GUID *v5; // ecx
  int result; // eax
  const struct _GUID *v7; // [esp+0h] [ebp-4h]
  const struct _GUID *savedregs; // [esp+4h] [ebp+0h]

  if ( InlineIsEqualGUID(v7, savedregs) )
  {
    *a3 = (void *)this;
    return 0;
  }
  else
  {
    result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(this + 4), v5, a3);
    if ( result == -2147467262 )
      return -2147467262;
  }
  return result;
}
