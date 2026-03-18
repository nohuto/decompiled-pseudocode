/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x1800DC6A0
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x1800DC660 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800B0BE0 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B0D60 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D801C (-clear@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COver.c)
 *     ??1CDirectFlipInfo@@UEAA@XZ @ 0x1800DC798 (--1CDirectFlipInfo@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1673));
  FastRegion::CRegion::FreeMemory(this + 1664);
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 1644));
  detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear(this + 1569);
  v2 = (COverlayContext *)this[1569];
  this[1569] = 0LL;
  if ( v2 == (COverlayContext *)(this + 1572) )
    v2 = 0LL;
  operator delete(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 1054);
  v3 = (COverlayContext *)this[1054];
  this[1054] = 0LL;
  if ( v3 == (COverlayContext *)(this + 1057) )
    v3 = 0LL;
  operator delete(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 539);
  v4 = (COverlayContext *)this[539];
  this[539] = 0LL;
  if ( v4 == (COverlayContext *)(this + 542) )
    v4 = 0LL;
  operator delete(v4);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 24);
  v5 = (COverlayContext *)this[24];
  this[24] = 0LL;
  if ( v5 == (COverlayContext *)(this + 27) )
    v5 = 0LL;
  operator delete(v5);
}
