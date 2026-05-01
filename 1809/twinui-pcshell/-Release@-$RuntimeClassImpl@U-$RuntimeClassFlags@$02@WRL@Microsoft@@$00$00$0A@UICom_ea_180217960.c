/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180217960
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A2170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800A2180 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICom_ea_1800A2180.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800A2190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICom_ea_1800A2190.c)
 *     ??$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIComponentRelationshipStore@2345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x18020EF74 (--$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIC.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAKXZ @ 0x180217BA0 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 208LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
