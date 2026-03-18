/*
 * XREFs of ?InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CB520
 * Callers:
 *     ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8848 (-CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ @ 0x1801ACFC4 (-DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AE4D4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@.c)
 *     ?GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C949C (-GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::InitializeFastShadow(CProjectedShadow *this, struct IRenderTarget **a2)
{
  CProjectedShadowCaster **v2; // rdi
  CProjectedShadowCaster *v4; // rcx
  struct D2D_SIZE_F v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CProjectedShadowCaster **)CProjectedShadow::s_pFastShadow;
  v6.width = 33.0;
  v6.height = 33.0;
  v4 = (CProjectedShadowCaster *)*((_QWORD *)CProjectedShadow::s_pFastShadow + 9);
  *((_DWORD *)CProjectedShadow::s_pFastShadow + 24) = 1098907648;
  CProjectedShadowCaster::UpdateShadowIntermediates(v4, a2, &v6, 0);
  v6.width = v6.width + 32.0;
  v6.height = v6.height + 32.0;
  CProjectedShadow::GenerateBlurIntermediate((CProjectedShadow *)v2, (struct CDrawingContext *)a2, &v6);
  CProjectedShadowCaster::DestroyMaskIntermediate(v2[9]);
  return 0LL;
}
