/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x1800E8A50
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x1800E8A10 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079DF8 (-clear@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COver.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??1CDirectFlipInfo@@UEAA@XZ @ 0x1800E8B48 (--1CDirectFlipInfo@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::~COverlayContext(void **this)
{
  COverlayContext *v2; // rcx
  COverlayContext *v3; // rcx
  COverlayContext *v4; // rcx
  COverlayContext *v5; // rcx
  void *v6; // rcx

  *this = &COverlayContext::`vftable';
  if ( this[2] )
  {
    COverlayContext::Reset((COverlayContext *)this);
    v6 = this[2];
    if ( v6 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1671);
  FastRegion::CRegion::FreeMemory(this + 1662);
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 1644));
  detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear();
  v2 = (COverlayContext *)this[1569];
  this[1569] = 0LL;
  if ( v2 == (COverlayContext *)(this + 1572) )
    v2 = 0LL;
  WPF::ProcessHeapImpl::Free(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 1054);
  v3 = (COverlayContext *)this[1054];
  this[1054] = 0LL;
  if ( v3 == (COverlayContext *)(this + 1057) )
    v3 = 0LL;
  WPF::ProcessHeapImpl::Free(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 539);
  v4 = (COverlayContext *)this[539];
  this[539] = 0LL;
  if ( v4 == (COverlayContext *)(this + 542) )
    v4 = 0LL;
  WPF::ProcessHeapImpl::Free(v4);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 24);
  v5 = (COverlayContext *)this[24];
  this[24] = 0LL;
  if ( v5 == (COverlayContext *)(this + 27) )
    v5 = 0LL;
  WPF::ProcessHeapImpl::Free(v5);
}
