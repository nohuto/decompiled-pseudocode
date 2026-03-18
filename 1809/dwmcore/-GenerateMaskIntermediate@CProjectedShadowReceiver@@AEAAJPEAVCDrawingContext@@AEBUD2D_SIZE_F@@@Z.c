/*
 * XREFs of ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AEC0C
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801AEE84 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801AC638 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AEDF0 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GenerateMaskIntermediate(
        CProjectedShadowReceiver *this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  struct IRenderTarget *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  struct CSpriteVisualContent *EffectiveMaskBrush; // r14
  CDrawingContext *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-50h]
  _BYTE v18[8]; // [rsp+30h] [rbp-40h] BYREF
  struct CRenderTargetImageSource *v19; // [rsp+38h] [rbp-38h] BYREF
  struct IRenderTarget *v20; // [rsp+40h] [rbp-30h] BYREF
  const char *v21; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+50h] [rbp-20h]
  __int128 v23; // [rsp+58h] [rbp-18h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v23 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v18[0] = 0;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  v22 = 24;
  v21 = "DWM ProjectedShadow Mask";
  v6 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v21, a3, 0, &v20);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x18Bu);
    goto LABEL_14;
  }
  v9 = v20;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v20 + 128LL))(v20, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v9 + 240LL))(v9, DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19);
  v10 = CRenderTargetImageSource::Create(v9, 0, &v19);
  v8 = v10;
  if ( v10 < 0 )
  {
    v17 = 404;
    goto LABEL_11;
  }
  EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(this);
  v10 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)a2,
          0LL,
          (const struct CMILMatrix *)&CMILMatrix::Identity,
          0,
          1);
  v8 = v10;
  if ( v10 < 0 )
  {
    v17 = 408;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v17);
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct IRenderTarget **, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)EffectiveMaskBrush + 160LL))(
         EffectiveMaskBrush,
         a2,
         a3,
         v18,
         &v23);
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v8, 0x1A0u);
LABEL_12:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_14;
  }
  v14 = CDrawingContext::PopLayer(v13);
  v8 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1A4u);
  else
    Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)this + 13, (__int64 *)&v19);
LABEL_14:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v8;
}
