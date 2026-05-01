/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180213B38
 * Callers:
 *     ??$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIComponentRelationshipStore@2345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x18020EF74 (--$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIC.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180216890 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponent.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IViewCUIEventStore,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  void **v6; // r8
  unsigned int CanCastTo; // r9d
  __int64 v8; // r10
  const struct _GUID *v9; // r11

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92) )
    {
      *v6 = (void *)v8;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v9, v6);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
