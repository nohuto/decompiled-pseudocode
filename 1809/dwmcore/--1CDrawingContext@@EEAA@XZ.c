/*
 * XREFs of ??1CDrawingContext@@EEAA@XZ @ 0x1800C2B80
 * Callers:
 *     ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x180075330 (--_ECDrawingContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006B2C0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006B4DC (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x18008EBAC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18008F704 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C2DE8 (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801B7E24 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CContentBounder *v8; // rcx
  CVisual *v9; // rcx
  _QWORD *i; // rbx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CDrawingContext::PopAllStacks(this);
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 465);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 44);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 45);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 46);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (CContentBounder *)*((_QWORD *)this + 466);
  if ( v8 )
  {
    CContentBounder::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 466) = 0LL;
  }
  SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 785, v2);
  for ( i = (_QWORD *)((char *)this + 6176);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v9, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 775);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 768);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3744));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 451);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 447);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 443);
  WPF::ProcessHeapImpl::Free(*((void **)this + 437));
  WPF::ProcessHeapImpl::Free(*((void **)this + 422));
  WPF::ProcessHeapImpl::Free(*((void **)this + 414));
  WPF::ProcessHeapImpl::Free(*((void **)this + 410));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  WPF::ProcessHeapImpl::Free(*((void **)this + 406));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 230);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 126);
  WPF::ProcessHeapImpl::Free(*((void **)this + 124));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 114);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 672));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 76);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 68);
  WPF::ProcessHeapImpl::Free(*((void **)this + 66));
  WPF::ProcessHeapImpl::Free(*((void **)this + 62));
  WPF::ProcessHeapImpl::Free(*((void **)this + 58));
  CResource::~CResource((CDrawingContext *)((char *)this + 16));
}
