/*
 * XREFs of ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4
 * Callers:
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@@Z @ 0x1801C9140 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x180066AD0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??2CImageSourceResource@@SAPEAX_K@Z @ 0x180173BC8 (--2CImageSourceResource@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ??0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z @ 0x1801C81D0 (--0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z.c)
 *     ?EnsureWhiteColorBrush@CProjectedShadow@@AEAAJXZ @ 0x1801C8A78 (-EnsureWhiteColorBrush@CProjectedShadow@@AEAAJXZ.c)
 */

__int64 __fastcall CProjectedShadow::GenerateMaskApproxBlur(
        struct CComposition **this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3)
{
  CImageSourceResource *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct IRenderTarget *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  CDrawingContext *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  CImageSourceResource *v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-39h]
  _BYTE v23[8]; // [rsp+30h] [rbp-29h] BYREF
  struct IImageSource *v24; // [rsp+38h] [rbp-21h] BYREF
  struct IRenderTarget *v25; // [rsp+40h] [rbp-19h] BYREF
  __int64 v26; // [rsp+48h] [rbp-11h] BYREF
  const char *v27; // [rsp+50h] [rbp-9h] BYREF
  int v28; // [rsp+58h] [rbp-1h]
  __int64 v29; // [rsp+60h] [rbp+7h] BYREF
  char v30; // [rsp+68h] [rbp+Fh]
  __int128 v31; // [rsp+70h] [rbp+17h] BYREF

  v3 = 0LL;
  v25 = 0LL;
  v31 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v24 = 0LL;
  v23[0] = 0;
  v29 = 0LL;
  v30 = 0;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
  v28 = 37;
  v27 = "DWM ProjectedShadow Mask - ApproxBlur";
  v6 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v27, &stru_1802BCE98, 0, &v25);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5E1u);
    goto LABEL_18;
  }
  v9 = v25;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v25 + 128LL))(v25, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v9 + 240LL))(v9, DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
  v10 = CRenderTargetImageSource::Create(v9, 0, &v24);
  v8 = v10;
  if ( v10 < 0 )
  {
    v22 = 1514;
    goto LABEL_15;
  }
  v12 = CProjectedShadow::EnsureWhiteColorBrush((CProjectedShadow *)this);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x5ECu);
    goto LABEL_16;
  }
  v14 = CProjectedShadow::s_cpWhiteColorBrush;
  v10 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)a2,
          0LL,
          (const struct CMILMatrix *)&CMILMatrix::Identity,
          0,
          1);
  v8 = v10;
  if ( v10 < 0 )
  {
    v22 = 1519;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v22);
    goto LABEL_16;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)v14 + 160LL))(
          v14,
          a2,
          &stru_1802BCE98,
          v23,
          &v31);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5F5u);
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
LABEL_16:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_18;
  }
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  v18 = CDrawingContext::PopLayer(v17);
  v8 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x5FCu);
  }
  else
  {
    v20 = (CImageSourceResource *)CImageSourceResource::operator new();
    if ( v20 )
      v3 = CImageSourceResource::CImageSourceResource(v20, this[2], v24);
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(&CProjectedShadow::s_cpMaskForBlur, (__int64)v3);
  }
LABEL_18:
  CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v26);
  CShapePtr::Release((CShapePtr *)&v29);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
  return v8;
}
