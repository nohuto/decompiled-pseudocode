/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800289EC
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028330 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  *((_BYTE *)this + 2289) = 0;
  if ( !*v7 && !v7[2] || *((_DWORD *)this + 3) == 1 )
    *((_BYTE *)this + 28) = 0;
  if ( (*((_BYTE *)this + 24) & 0x20) != 0 || !*v7 )
    v8 = CCommonRegistryData::m_fEnableCpuClipping != 0;
  *((_BYTE *)this + 2288) = v8;
  CDrawListEntryBuilder::ResetAccumulationBuffers(this);
}
