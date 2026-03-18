/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@45@@Z @ 0x1801CA030
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800672F8 (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180068158 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x18006E618 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006EA8C (-SetSource@CNineGridBrush@@QEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ??2CSurfaceBrush@@SAPEAX_K@Z @ 0x180071DB0 (--2CSurfaceBrush@@SAPEAX_K@Z.c)
 *     ??2CNineGridBrush@@SAPEAX_K@Z @ 0x180075FB8 (--2CNineGridBrush@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@45@@Z @ 0x1801CA17C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceReso.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        struct CSpriteVisualContent *a2,
        int a3,
        int a4,
        __int64 *a5)
{
  CNineGridBrush *v8; // rax
  struct CResource ***v9; // rsi
  CSurfaceBrush *v10; // rax
  int v11; // edx
  struct CSpriteVisualContent *v12; // rcx
  struct CSpriteVisualContent *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  struct CSpriteVisualContent *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v8 = (CNineGridBrush *)CNineGridBrush::operator new();
  if ( v8 )
    v8 = CNineGridBrush::CNineGridBrush(v8, *(struct CComposition **)(a1 + 16));
  v9 = (struct CResource ***)a5;
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(a5, (__int64)v8);
  v10 = (CSurfaceBrush *)CSurfaceBrush::operator new();
  if ( v10 )
    v12 = CSurfaceBrush::CSurfaceBrush(v10, *(struct CComposition **)(a1 + 16));
  else
    v12 = 0LL;
  v18 = v12;
  if ( v12 )
    (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v12 + 8LL))(v12);
  CProjectedShadow::GenerateSurfaceBrush(a1, v11, a3, a4, (__int64)&v18);
  v13 = v18;
  v14 = CNineGridBrush::SetSource(*v9, v18);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x73Eu);
  }
  else
  {
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 0, 80.0);
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 8u, 80.0);
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 5u, 80.0);
    CNineGridBrush::SetInsetProperty((CNineGridBrush *)*v9, 3u, 80.0);
    v16 = 0;
    *((_BYTE *)*v9 + 113) = 1;
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}
