/*
 * XREFs of ??1CDrawingContext@@EEAA@XZ @ 0x180046554
 * Callers:
 *     ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x180046514 (--_ECDrawingContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180046DF0 (--1CLightStack@@QEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180046E80 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180046F24 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180046F4C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180049318 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801C4574 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
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
    CContentBounder::`scalar deleting destructor'(v8, v2);
    *((_QWORD *)this + 466) = 0LL;
  }
  SAFE_DELETE<COcclusionContext>((char *)this + 6280);
  for ( i = (_QWORD *)((char *)this + 6176);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v9, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 6200);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 6144);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3744));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3608);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3576);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3544);
  operator delete(*((void **)this + 437));
  operator delete(*((void **)this + 422));
  operator delete(*((void **)this + 414));
  operator delete(*((void **)this + 410));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  operator delete(*((void **)this + 406));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 1840);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 1008);
  operator delete(*((void **)this + 124));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 912);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 672));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 608);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 544);
  operator delete(*((void **)this + 66));
  operator delete(*((void **)this + 62));
  operator delete(*((void **)this + 58));
  CResource::~CResource((CDrawingContext *)((char *)this + 16));
}
