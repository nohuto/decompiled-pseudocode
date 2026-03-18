/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800713C8
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        struct CRenderingEffect *a3)
{
  int v4; // eax
  int v6; // eax
  _QWORD *v7; // rcx
  bool v8; // al
  struct CRenderingEffect *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 2;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  if ( *((struct CRenderingEffect **)this + 4) != a3 )
  {
    v9 = a3;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v9);
    v9 = (struct CRenderingEffect *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a3;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v9);
  }
  v6 = (*(__int64 (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)a3 + 32LL))(a3);
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 569) = v6;
  v8 = 0;
  *(_WORD *)((char *)this + 2297) = 0;
  if ( !*v7 && !v7[2] || *((_DWORD *)this + 3) == 1 )
    *((_BYTE *)this + 28) = 0;
  if ( (*((_BYTE *)this + 24) & 0x20) != 0 || !*v7 )
    v8 = CCommonRegistryData::m_fEnableCpuClipping != 0;
  *((_BYTE *)this + 2296) = v8;
  CDrawListEntryBuilder::ResetAccumulationBuffers(this);
}
