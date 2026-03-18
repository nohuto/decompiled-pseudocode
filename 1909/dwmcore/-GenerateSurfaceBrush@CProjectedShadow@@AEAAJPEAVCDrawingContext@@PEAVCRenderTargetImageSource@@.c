/*
 * XREFs of ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F0054
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801EEFF4 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFF00 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C240 (-SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x18007CADC (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800C71B8 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CTranslateTransform@@KAPEAX_K@Z @ 0x1800D0764 (--2CTranslateTransform@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??2CImageSourceResource@@SAPEAX_K@Z @ 0x18019CC90 (--2CImageSourceResource@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801D70E8 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ??0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z @ 0x1801EE2A0 (--0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateSurfaceBrush(
        __int64 a1,
        __int64 a2,
        struct IImageSource *a3,
        __int64 a4,
        __int64 *a5)
{
  CSurfaceBrush *v8; // rax
  CImageSourceResource *v9; // rax
  struct CResource *v10; // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD v19[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (CSurfaceBrush *)CTranslateTransform::operator new();
  if ( v8 )
    v8 = CSurfaceBrush::CSurfaceBrush(v8, *(struct CComposition **)(a1 + 16));
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(a5, (__int64)v8);
  v9 = (CImageSourceResource *)CImageSourceResource::operator new();
  if ( v9 )
    v10 = CImageSourceResource::CImageSourceResource(v9, *(struct CComposition **)(a1 + 16), a3);
  else
    v10 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = CSurfaceBrush::SetSurface((struct CResource **)*a5, v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x4A5u, 0LL);
  }
  else
  {
    CSurfaceBrush::SetSurfaceContentRect(*a5, a4);
    v14 = *a5;
    v15 = *(_QWORD *)*a5;
    *(_DWORD *)(v14 + 88) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v15 + 64))(v14, 0LL, v14);
    v16 = *a5 + SDWORD2(xmmword_180338A78);
    v19[0] = 0;
    ((void (__fastcall *)(__int64, void *, _DWORD *))xmmword_180338A78)(
      v16,
      &CSurfaceBrush::sc_HorizontalAlignment,
      v19);
    v17 = *a5 + SDWORD2(xmmword_180338AB0);
    v19[0] = 0;
    ((void (__fastcall *)(__int64, void *, _DWORD *))xmmword_180338AB0)(v17, &CSurfaceBrush::sc_VerticalAlignment, v19);
    v13 = 0;
  }
  if ( v10 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 16LL))(v10);
  return v13;
}
