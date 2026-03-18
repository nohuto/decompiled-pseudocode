/*
 * XREFs of ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@45@@Z @ 0x1801CA17C
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@45@@Z @ 0x1801CA030 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceRes.c)
 * Callees:
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180068158 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CSurfaceBrush@@SAPEAX_K@Z @ 0x180071DB0 (--2CSurfaceBrush@@SAPEAX_K@Z.c)
 *     ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD004 (-SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1800BD050 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateSurfaceBrush(
        __int64 a1,
        __int64 a2,
        struct CResource **a3,
        const struct D2D_RECT_F *a4,
        __int64 *a5)
{
  CSurfaceBrush *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (CSurfaceBrush *)CSurfaceBrush::operator new();
  if ( v8 )
    v8 = CSurfaceBrush::CSurfaceBrush(v8, *(struct CComposition **)(a1 + 16));
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(a5, (__int64)v8);
  v9 = CSurfaceBrush::SetSurface((CSurfaceBrush *)*a5, *a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x77Cu);
  }
  else
  {
    CSurfaceBrush::SetSurfaceContentRect(*a5, a4);
    v12 = *a5;
    v13 = *(_QWORD *)*a5;
    *(_DWORD *)(v12 + 80) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v13 + 64))(v12, 0LL, v12);
    v14 = *a5 + SDWORD2(xmmword_1803071B8);
    v17[0] = 0;
    ((void (__fastcall *)(__int64, void *, _DWORD *))xmmword_1803071B8)(
      v14,
      &CSurfaceBrush::sc_HorizontalAlignment,
      v17);
    v15 = *a5 + SDWORD2(xmmword_1803071F0);
    v17[0] = 0;
    ((void (__fastcall *)(__int64, void *, _DWORD *))xmmword_1803071F0)(v15, &CSurfaceBrush::sc_VerticalAlignment, v17);
    return 0;
  }
  return v11;
}
