/*
 * XREFs of ??$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIComponentRelationshipStore@2345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x18020EF74
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x180217F6C (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180210B74 (--0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180213B38 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180213B38.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180217960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICom_ea_180217960.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,>(
        __int64 *a1)
{
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *v2; // rax
  int CanCastTo; // edi
  __int64 v4; // rbx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rdx

  *a1 = 0LL;
  v2 = (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)operator new(
                                                                                      0x118uLL,
                                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v7) )
    {
      *a1 = v4;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IViewCUIEventStore,Microsoft::WRL::FtmBase>::CanCastTo(
                    v4 + 8,
                    v8,
                    a1);
      if ( CanCastTo < 0 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_10:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::Release(v4);
  return (unsigned int)CanCastTo;
}
