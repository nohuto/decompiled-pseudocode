/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012620 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800266A0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800268FC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028330 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800C2B80 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180191100 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18019A570 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C5CD0 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?clear@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180028AFC (-clear@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180028DB4 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x180063DEC (-Clear@Mesh@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800674A4 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_exp.c)
 *     ?clear@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B3F0C (-clear@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawLi.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  CMILRefCountBase *v2; // rcx
  CDrawListEntryBuilder *v3; // r8
  CDrawListEntryBuilder *v4; // r8
  CDrawListEntryBuilder *v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // r8
  void *v9; // r8
  void *v10; // r8
  void *v11; // r8
  _QWORD *v12; // rbx
  void *v13; // r8
  void *v14; // r8
  void *v15; // r8
  void *v16; // r8
  void *v17; // rcx
  CDrawListEntryBuilder *v18; // r8

  CDrawListEntryBuilder::Reset(this);
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 285);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 273);
  v3 = (CDrawListEntryBuilder *)*((_QWORD *)this + 273);
  *((_QWORD *)this + 273) = 0LL;
  if ( v3 == (CDrawListEntryBuilder *)((char *)this + 2208) )
    v3 = 0LL;
  if ( v3 )
    HeapFree(WPF::g_processHeap, 0, v3);
  detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear((char *)this + 1184);
  v4 = (CDrawListEntryBuilder *)*((_QWORD *)this + 148);
  *((_QWORD *)this + 148) = 0LL;
  if ( v4 == (CDrawListEntryBuilder *)((char *)this + 1216) )
    v4 = 0LL;
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear((char *)this + 192);
  v5 = (CDrawListEntryBuilder *)*((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v5 == (CDrawListEntryBuilder *)((char *)this + 224) )
    v5 = 0LL;
  if ( v5 )
    HeapFree(WPF::g_processHeap, 0, v5);
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Mesh::Clear((CDrawListEntryBuilder *)((char *)this + 104));
  v7 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    v8 = (void *)v7[3];
    if ( v8 )
      HeapFree(WPF::g_processHeap, 0, v8);
    v9 = (void *)v7[6];
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, v9);
    v10 = (void *)v7[10];
    if ( v10 )
      HeapFree(WPF::g_processHeap, 0, v10);
    v11 = (void *)v7[15];
    if ( v11 )
      HeapFree(WPF::g_processHeap, 0, v11);
    operator delete(v7, 0x88uLL);
  }
  v12 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v12 )
  {
    v13 = (void *)v12[3];
    if ( v13 )
      HeapFree(WPF::g_processHeap, 0, v13);
    v14 = (void *)v12[6];
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
    v15 = (void *)v12[10];
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
    v16 = (void *)v12[15];
    if ( v16 )
      HeapFree(WPF::g_processHeap, 0, v16);
    operator delete(v12, 0x88uLL);
  }
  v17 = (void *)*((_QWORD *)this + 13);
  if ( v17 )
    WPF::ProcessHeapImpl::Free(v17);
  detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 5);
  v18 = (CDrawListEntryBuilder *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v18 == (CDrawListEntryBuilder *)((char *)this + 64) )
    v18 = 0LL;
  if ( v18 )
    HeapFree(WPF::g_processHeap, 0, v18);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 4);
}
