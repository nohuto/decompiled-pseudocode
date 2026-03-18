/*
 * XREFs of ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x18000EC1C
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000E500 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180194AE0 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18005FB00 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
        struct CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CSpriteVisualContent *a3,
        struct CRenderTargetImageSource **a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  struct IRenderTarget *v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  struct CRenderTargetImageSource *v16; // rax
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *); // rax
  int v22; // eax
  unsigned int v23; // ecx
  _BYTE v24[8]; // [rsp+30h] [rbp-38h] BYREF
  struct CRenderTargetImageSource *v25; // [rsp+38h] [rbp-30h] BYREF
  struct IRenderTarget *v26; // [rsp+40h] [rbp-28h] BYREF
  __int128 v27; // [rsp+48h] [rbp-20h] BYREF

  v26 = 0LL;
  *(_QWORD *)&v27 = "DWM DropShadow Mask";
  DWORD2(v27) = 19;
  v8 = CDrawingContext::PushOffScreenRenderingLayer(this, (const struct CResourceTag *)&v27, a2, 0, &v26);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x37Du);
    goto LABEL_7;
  }
  v11 = v26;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v26 + 128LL))(v26, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v11 + 240LL))(v11, DisplayId::None);
  v25 = 0LL;
  v12 = CRenderTargetImageSource::Create(v11, 0, &v25);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x386u);
    goto LABEL_6;
  }
  if ( !a3
    || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 19LL) )
  {
    v14 = CDrawingContext::Clear(this, &stru_18024C648);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x38Bu);
      goto LABEL_6;
    }
  }
  else
  {
    v18 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x38Fu);
      goto LABEL_6;
    }
    v20 = *(_QWORD *)a3;
    v24[0] = 0;
    v21 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(v20 + 160);
    v27 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v22 = v21(a3, this, a2, v24, &v27);
    v10 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x394u);
      CDrawingContext::PopTransformInternal(this, 1);
      goto LABEL_6;
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  v16 = v25;
  v25 = 0LL;
  *a4 = v16;
LABEL_6:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v25);
  CDrawingContext::PopLayer(this);
LABEL_7:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v26);
  return v10;
}
