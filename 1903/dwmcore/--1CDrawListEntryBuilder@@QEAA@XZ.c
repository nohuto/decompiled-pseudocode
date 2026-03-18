/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013890 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180046554 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180075D50 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800787A8 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801D3370 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801ECFC4 (-GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F1060 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020E7C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180216030 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x1800917A4 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x180091930 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180091978 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801877B4 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFA4C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFBBC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(Mesh::MeshGraph **this)
{
  CDirtyRegion *v2; // rcx
  CDrawListEntryBuilder **v3; // rsi
  CDrawListEntryBuilder *v4; // rdi
  CDrawListEntryBuilder **v5; // rsi
  CDrawListEntryBuilder *v6; // rdi
  __int64 v7; // r8
  CDrawListEntryBuilder **v8; // rsi
  CDrawListEntryBuilder *v9; // rdi
  __int64 v10; // r8
  Mesh::MeshGraph *v11; // rcx
  Mesh::MeshGraph *v12; // rsi
  Mesh::MeshGraph *v13; // rsi
  Mesh::MeshGraph *v14; // rcx
  CDrawListEntryBuilder **v15; // rsi
  CDrawListEntryBuilder *v16; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v18; // rax
  HANDLE v19; // rax
  HANDLE v20; // rax

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
  v7 = (this[149] - v6) >> 4;
  if ( v7 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      this + 148,
      0LL,
      v7);
    v6 = *v5;
  }
  *v5 = 0LL;
  if ( v6 == (CDrawListEntryBuilder *)(this + 152) )
    v6 = 0LL;
  if ( v6 )
  {
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v6);
  }
  v8 = this + 24;
  v9 = this[24];
  v10 = (this[25] - v9) >> 4;
  if ( v10 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      this + 24,
      0LL,
      v10);
    v9 = *v8;
  }
  *v8 = 0LL;
  if ( v9 == (CDrawListEntryBuilder *)(this + 28) )
    v9 = 0LL;
  if ( v9 )
  {
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v9);
  }
  v11 = this[23];
  if ( v11 )
    (*(void (__fastcall **)(Mesh::MeshGraph *))(*(_QWORD *)v11 + 16LL))(v11);
  Mesh::Clear((Mesh *)(this + 13));
  v12 = this[17];
  if ( v12 )
  {
    Mesh::MeshGraph::~MeshGraph(this[17]);
    operator delete(v12, 0x88uLL);
  }
  v13 = this[15];
  if ( v13 )
  {
    Mesh::MeshGraph::~MeshGraph(this[15]);
    operator delete(v13, 0x88uLL);
  }
  v14 = this[13];
  if ( v14 )
    operator delete(v14);
  v15 = this + 5;
  v16 = this[5];
  if ( (this[6] - v16) >> 3 )
  {
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(this + 5);
    v16 = *v15;
  }
  *v15 = 0LL;
  if ( v16 == (CDrawListEntryBuilder *)(this + 8) )
    v16 = 0LL;
  if ( v16 )
  {
    v20 = GetProcessHeap();
    HeapFree(v20, 0, v16);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 4);
}
