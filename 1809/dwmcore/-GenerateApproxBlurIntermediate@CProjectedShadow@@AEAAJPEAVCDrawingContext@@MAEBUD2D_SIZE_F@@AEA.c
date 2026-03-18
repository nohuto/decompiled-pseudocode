/*
 * XREFs of ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@@Z @ 0x1801C9140
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000EB24 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??2CImageSourceResource@@SAPEAX_K@Z @ 0x180173BC8 (--2CImageSourceResource@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ??0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z @ 0x1801C81D0 (--0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z.c)
 *     ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4 (-GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlurIntermediate(
        struct CComposition **this,
        CDrawingContext *a2,
        float a3,
        const struct D2D_SIZE_F *a4,
        __int64 *a5)
{
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct IRenderTarget *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  const struct D2D_SIZE_F *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  CImageSourceResource *v29; // rax
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  __int64 v32; // [rsp+38h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  struct IImageSource *v34; // [rsp+48h] [rbp-38h] BYREF
  struct IRenderTarget *v35; // [rsp+50h] [rbp-30h] BYREF
  const char *v36; // [rsp+58h] [rbp-28h] BYREF
  int v37; // [rsp+60h] [rbp-20h]
  float v38; // [rsp+A8h] [rbp+28h] BYREF
  int v39; // [rsp+ACh] [rbp+2Ch]

  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v8 = *((_QWORD *)a2 + 48);
  v31 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v35);
  v37 = 30;
  v36 = "DWM ProjectedShadow ApproxBlur";
  v9 = CDrawingContext::PushOffScreenRenderingLayer(
         (struct IRenderTarget **)a2,
         (const struct CResourceTag *)&v36,
         a4,
         0,
         &v35);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x578u);
    goto LABEL_21;
  }
  v12 = v35;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v35 + 128LL))(v35, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v12 + 240LL))(v12, DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v34);
  v13 = CRenderTargetImageSource::Create(v12, 0, &v34);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x581u);
    goto LABEL_19;
  }
  v16 = CProjectedShadow::s_cpMaskForBlur;
  if ( !CProjectedShadow::s_cpMaskForBlur )
  {
    CProjectedShadow::GenerateMaskApproxBlur((CProjectedShadow *)this, a2, v15);
    v16 = CProjectedShadow::s_cpMaskForBlur;
  }
  v17 = v16 + 56;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v33);
  v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, &v33);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x589u);
    goto LABEL_19;
  }
  v20 = v33;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v32);
  v21 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v20 + 136LL))(
          v20,
          (char *)a2 + 392,
          0LL,
          0LL,
          &v32);
  v11 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x58Fu);
    goto LABEL_19;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 224LL))(v8, 6LL, &v31);
  v11 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x592u);
    goto LABEL_19;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v31 + 112LL))(v31, 0LL, v32, 1LL);
  v38 = a3 / 3.0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v31 + 72LL))(v31, 0LL, 0LL, &v38, 4);
  LODWORD(v38) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v31 + 72LL))(v31, 1LL, 0LL, &v38, 4);
  v38 = 0.0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v31 + 72LL))(v31, 2LL, 0LL, &v38, 4);
  v38 = 64.0;
  v39 = 1115684864;
  v25 = CDrawingContext::FillEffect(a2, v31, 0LL, (__int64)&v38, 1);
  v11 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x5A0u);
LABEL_19:
    CDrawingContext::PopLayer(a2);
    goto LABEL_21;
  }
  v27 = CDrawingContext::PopLayer(a2);
  v11 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x5A5u);
  }
  else
  {
    v29 = (CImageSourceResource *)CImageSourceResource::operator new();
    if ( v29 )
      v29 = CImageSourceResource::CImageSourceResource(v29, this[2], v34);
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(a5, (__int64)v29);
  }
LABEL_21:
  if ( v31 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v31 + 112LL))(v31, 0LL, 0LL, 1LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v35);
  return v11;
}
