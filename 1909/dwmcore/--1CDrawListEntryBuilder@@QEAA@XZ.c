/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012240 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180038570 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180039AF0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003C100 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801D1C00 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EB854 (-GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EF8F0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180214940 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x18006F214 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18006F3A0 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18006F3E8 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801860D4 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE18C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE2FC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(Mesh::MeshGraph **this)
{
  CDirtyRegion *v2; // rcx
  CDrawListEntryBuilder **v3; // rsi
  CDrawListEntryBuilder *v4; // rdi
  CDrawListEntryBuilder **v5; // rsi
  CDrawListEntryBuilder *v6; // rdi
  CDrawListEntryBuilder **v7; // rsi
  CDrawListEntryBuilder *v8; // rdi
  Mesh::MeshGraph *v9; // rcx
  Mesh::MeshGraph *v10; // rsi
  Mesh::MeshGraph *v11; // rsi
  Mesh::MeshGraph *v12; // rcx
  CDrawListEntryBuilder **v13; // rsi
  CDrawListEntryBuilder *v14; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  HANDLE v17; // rax
  HANDLE v18; // rax

  CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)this);
  v2 = this[286];
  if ( v2 )
    CDirtyRegion::Release(v2);
  v3 = this + 273;
  v4 = this[273];
  if ( (this[274] - v4) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      this + 273,
      0LL);
    v4 = *v3;
  }
  *v3 = 0LL;
  if ( v4 == (CDrawListEntryBuilder *)(this + 276) )
    v4 = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v5 = this + 148;
  v6 = this[148];
  if ( (this[149] - v6) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      this + 148,
      0LL);
    v6 = *v5;
  }
  *v5 = 0LL;
  if ( v6 == (CDrawListEntryBuilder *)(this + 152) )
    v6 = 0LL;
  if ( v6 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v6);
  }
  v7 = this + 24;
  v8 = this[24];
  if ( (this[25] - v8) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      this + 24,
      0LL);
    v8 = *v7;
  }
  *v7 = 0LL;
  if ( v8 == (CDrawListEntryBuilder *)(this + 28) )
    v8 = 0LL;
  if ( v8 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v8);
  }
  v9 = this[23];
  if ( v9 )
    (*(void (__fastcall **)(Mesh::MeshGraph *))(*(_QWORD *)v9 + 16LL))(v9);
  Mesh::Clear((Mesh *)(this + 13));
  v10 = this[17];
  if ( v10 )
  {
    Mesh::MeshGraph::~MeshGraph(this[17]);
    operator delete(v10);
  }
  v11 = this[15];
  if ( v11 )
  {
    Mesh::MeshGraph::~MeshGraph(this[15]);
    operator delete(v11);
  }
  v12 = this[13];
  if ( v12 )
    operator delete(v12);
  v13 = this + 5;
  v14 = this[5];
  if ( (this[6] - v14) >> 3 )
  {
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(this + 5);
    v14 = *v13;
  }
  *v13 = 0LL;
  if ( v14 == (CDrawListEntryBuilder *)(this + 8) )
    v14 = 0LL;
  if ( v14 )
  {
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v14);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 4);
}
