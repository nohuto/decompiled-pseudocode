/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801F1688
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0764 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??2CNineGridBrush@@SAPEAX_K@Z @ 0x180089724 (--2CNineGridBrush@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800C6638 (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800C6D48 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800CE914 (-SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800CEB70 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CTranslateTransform@@KAPEAX_K@Z @ 0x1800D0494 (--2CTranslateTransform@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801D87F8 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z @ 0x1801E8518 (-SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F17DC (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        struct CSpriteVisualContent *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  CNineGridBrush *v8; // rax
  struct CResource ***v9; // rsi
  CSurfaceBrush *v10; // rax
  __int64 v11; // rdx
  struct CSpriteVisualContent *v12; // rcx
  struct CSpriteVisualContent *v13; // rbx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  struct CSpriteVisualContent *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v8 = (CNineGridBrush *)CNineGridBrush::operator new();
  if ( v8 )
    v8 = CNineGridBrush::CNineGridBrush(v8, *(struct CComposition **)(a1 + 16));
  v9 = (struct CResource ***)a5;
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(a5, (__int64)v8);
  v10 = (CSurfaceBrush *)CTranslateTransform::operator new();
  if ( v10 )
    v12 = CSurfaceBrush::CSurfaceBrush(v10, *(struct CComposition **)(a1 + 16));
  else
    v12 = 0LL;
  v18 = v12;
  if ( v12 )
    (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v12 + 8LL))(v12);
  CProjectedShadow::GenerateSurfaceBrush(a1, v11, a3, a4, &v18);
  v13 = v18;
  v14 = CNineGridBrush::SetSource(*v9, v18);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x466u, 0LL);
  }
  else
  {
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 0, 80.0);
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 8u, 80.0);
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 5u, 80.0);
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 3u, 80.0);
    CNineGridBrush::SetCanUseSurfaceTransform((CNineGridBrush *)*v9);
    v16 = 0;
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}
