/*
 * XREFs of ??0UTMRecentItem@Discover@PenWorkspace@@QEAA@XZ @ 0x1801DFD7C
 * Callers:
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801DEC90 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

PenWorkspace::Discover::UTMRecentItem *__fastcall PenWorkspace::Discover::UTMRecentItem::UTMRecentItem(
        PenWorkspace::Discover::UTMRecentItem *this)
{
  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IDiscoverRecentItem>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDiscoverRecentItem>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IDiscoverRecentItem>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &PenWorkspace::Discover::UTMRecentItem::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IDiscoverRecentItem>>'};
  *((_QWORD *)this + 4) = &PenWorkspace::Discover::UTMRecentItem::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDiscoverRecentItem>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IDiscoverRecentItem>>'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
